

```
P = { (lenght(vect) = n) ^ (n >= 1) ^ (isMountain(vect, n)) }
function getTop(int vect[], int n) return int top;
Q = { doesIncrease(0, top, vect) ^ doesDecrease(top, n - 1, vect) }


   isMountain(vect, n) = EXISTS w : 0 <= w < n : ( doesIncrease(0, w, vect) ^ doesDecrease(w, n - 1, vect) )

   doesIncrease(i, j, vect) = FOR_ALL k : i <= k < j : vect[k] < vect[k+1]

   doesDecrease(i, j, vect) = FOR_ALL k : i <= k < j : vect[k] > vect[k+1]

```
