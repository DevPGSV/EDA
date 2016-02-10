
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
I = { (0 <= i <= n) ^ doesIncrease(0, top, vect) ^ doesDecrease(top, i, vect) }
```

### Steps

##### {P} E {I}
{P} i = 0 {I}

{P} => pmd (i = 0 ; I) ?

   pmd (i = 0 ; I)
   <=> (I)[i -> 0]
   <=> ((0 <= i <= n) ^ doesIncrease(0, top, vect) ^ doesDecrease(top, i, vect))[i -> 0]
   <=> ((0 <= i <= n) ^ (FOR_ALL k : 0 <= k < top : vect[k] < vect[k+1]) ^ (FOR_ALL k : top <= k < i : vect[k] > vect[k+1]))[i -> 0]
   <=> ((0 <= 0 <= n) ^ (FOR_ALL k : 0 <= k < top : vect[k] < vect[k+1]) ^ (FOR_ALL k : top <= k < 0 : vect[k] > vect[k+1]))
   <=> ((     0 <= n) ^ (FOR_ALL k : 0 <= k < top : vect[k] < vect[k+1]) ^ (FOR_ALL k : top <= k < 0 : vect[k] > vect[k+1]))
   <=> ((     0 <= n) ^ (FOR_ALL k : 0 <= k < top : vect[k] < vect[k+1]) ^ (FOR_ALL k : top <= k < 0 : vect[k] > vect[k+1])) 
      //   (0 <= k < top) ^ (top <= k < 0)  ==>  0 < top < 0  ==> false
      //   FOR_ALL false => true
   <=> ((     0 <= n) ^ true ) 
   <=>  (     0 <= n)
   <=> pmd (i = 0 ; I)
   
{P} = { (lenght(vect) = n) ^ (n >= 1) ^ (isMountain(vect, n)) }
    (n >= 1)   ==>   (1 <= n)   ==>   (0 <= n)
    (0 <= n)   ==>   (0 <= n)
    {P}        ==>   pmd (i = 0 ; I)
    
##### {I ^ B} C {I}


WIP
