
C = while code (just the body)

C:

```c++
   if (vect[i] > top) { // 2
      topI = i;         // 1
      top = vect[topI]; // 2
   }
   i++;                 // 2
```

C € O(6)  -> constant


B = while condition

B:

```c++
i < n; // 1
```

B € O(1)  -> constant


W = while loop

W: 

```c++
while (i < n) {         // 1 * iterations + 1
   if (vect[i] > top) { // 2 * iterations
      topI = i;         // 1 * iterations
      top = vect[topI]; // 2 * iterations
   }
   i++;                 // 2 * iterations
}
```
if i goes from 0 to n-1: iterations = n-1

W € O(7 * iterations + 1) --> lineal

Adding the first 2 instructions:

```
getTop € O(4 + 7 * iterations + 1) =
         O(7 * iterations + 5) =
         O(7 * iterations) = 
         O(iterations) --> lineal
```

