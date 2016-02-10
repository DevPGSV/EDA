
P = precondition
Q = postcondition
B = while condition
C = while code (just the body)
I = invariant

```
P = { (lenght(vect) = n) ^ (n >= 1) ^ (isMountain(vect, n)) }
Q = { doesIncrease(0, top, vect) ^ doesDecrease(top, n - 1, vect) }
B = { i < n }
C = { if (vect[i] > top) {top = vect[i];}, i++; }
I = { (0 <= i <= n) ^ doesIncrease(0, top, vect) ^ doesDecrease(top, i, vect) }
```

WIP
