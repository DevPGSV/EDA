
P = precondition
Q = postcondition
E = code before while
B = while condition
C = while code (just the body)
I = invariant

```
P = { (lenght(vect) = n) ^ (n >= 1) ^ (isMountain(vect, n)) }
Q = { doesIncrease(0, top, vect) ^ doesDecrease(top, n - 1, vect) }
E = { i = 0 }
B = { i < n }
C = { if (vect[i] > top) {top = vect[i];}, i++; }
I = { (0 <= i <= n) ^ top = vect[topI] ^ doesIncrease(0, topI, vect) ^ doesDecrease(topI, i, vect) }
```

### Steps

##### {P} E {I}

```
{P} i = 0 {I}

{P} => pmd (i = 0 ; I) ?

   pmd (i = 0 ; I)
   <=> (I)[i -> 0]
   <=> ((0 <= i <= n) ^ doesIncrease(0, topI, vect) ^ doesDecrease(topI, i, vect))[i -> 0]
   <=> ((0 <= i <= n) ^ (FOR_ALL k : 0 <= k < topI : vect[k] < vect[k+1]) ^ (FOR_ALL k : topI <= k < i : vect[k] > vect[k+1]))[i -> 0]
   <=> ((0 <= 0 <= n) ^ (FOR_ALL k : 0 <= k < topI : vect[k] < vect[k+1]) ^ (FOR_ALL k : topI <= k < 0 : vect[k] > vect[k+1]))
   <=> ((     0 <= n) ^ (FOR_ALL k : 0 <= k < topI : vect[k] < vect[k+1]) ^ (FOR_ALL k : topI <= k < 0 : vect[k] > vect[k+1]))
   <=> ((     0 <= n) ^ (FOR_ALL k : 0 <= k < topI : vect[k] < vect[k+1]) ^ (FOR_ALL k : topI <= k < 0 : vect[k] > vect[k+1])) 
      //   (0 <= k < topI) ^ (topI <= k < 0)  ==>  0 < topI < 0  ==> false
      //   FOR_ALL false => true
   <=> ((     0 <= n) ^ true ) 
   <=>  (     0 <= n)
   <=> pmd (i = 0 ; I)
   
{P} = { (lenght(vect) = n) ^ (n >= 1) ^ (isMountain(vect, n)) }
    (n >= 1)   ==>   (1 <= n)   ==>   (0 <= n)
    (0 <= n)   ==>   (0 <= n)
    {P}        ==>   pmd (i = 0 ; I)
```

##### {I ^ B} C {I}

```
      {I ^ B} if (vect[i] > top) {topI = i;top = vect[topI];}, i++ {I}
<=>   {I ^ B ^   (vect[i] > top)} topI = i,top = vect[topI], i++ {I}
    ^ {I ^ B ^  ¬(vect[i] > top)}                            i++ {I}

{I ^ B ^ (vect[i] >  top)} => pmd ( topI = i,top = vect[topI], i++; I)  ?
{I ^ B ^ (vect[i] <= top)} => pmd ( i++; I)  ?

pmd ( topI = i,top = vect[topI], i++; I)
   <=> (I)[i -> i+1][top -> vect[topI]][topI -> i]
   <=> (0 <= i+1 <= n) ^ doesIncrease(0, vect[topI], vect) ^ doesDecrease(vect[topI], i, vect)[topI -> i]
   <=> (0 <= i+1 <= n) ^ doesIncrease(0, i, vect) ^ doesDecrease(i, i, vect)
      // doesDecrease(i, i, vect)   ==> true
   <=> (0 <= i+1 <= n) ^ doesIncrease(0, i, vect)
   <=> pmd ( topI = i,top = vect[topI], i++; I)
   
   I: (0 <= i)   =>   (0 <= i+1)
   B: (i < n)    =>   (i+1 <= n)
   isMountain(vect, n) ^ (vect[i] >  top)    =>  doesIncrease(0, i, vect)
   
   {I ^ B ^ (vect[i] >  top)} => (0 <= i+1 <= n) ^ doesIncrease(0, i, vect) 
   {I ^ B ^ (vect[i] >  top)} => pmd ( topI = i,top = vect[topI], i++; I)

pmd (i++; I)
   <=> (I)[i -> i+1]
   <=> (0 <= i+1 <= n) ^ top = vect[topI] ^ doesIncrease(0, topI, vect) ^ doesDecrease(topI, i+1, vect)
   
   I: (0 <= i)   =>   (0 <= i+1)
   ......
```



WIP
