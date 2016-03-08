# [Evaluando expresiones](https://www.aceptaelreto.com/problem/statement.php?id=198)

Las expresiones aritm�ticas suelen escribirse utilizando lo que se conoce como notaci�n infija en la que los operadores se colocan entre los operandos. Esta notaci�n, intuitiva para los humanos, tiene el problema de obligarnos a poner par�ntesis en ciertas ocasiones para cambiar el orden de aplicaci�n de los operadores.

Por otro lado, la notaci�n postfija consiste en colocar el operador tras los dos operandos; una de sus ventajas es que no necesita par�ntesis. Adem�s es f�cilmente evaluable con una pila. El proceso de evaluaci�n consiste en a�adir a la pila los operandos que nos vayamos encontrando. Cuando leemos un operador, extraemos dos valores de la pila los combinamos con el operador encontrado (teniendo en cuenta que el primer valor que se extrae es el segundo operando de la operaci�n) y a�adimos el resultado de vuelta.

Existe otra posibilidad de notaci�n que sigue la misma idea que la anterior pero en vez de utilizar una pila para la evaluaci�n, utiliza una cola. Cuando se tienen que a�adir elementos a la cola, se hace por detr�s, mientras que la extracci�n se realiza por delante.

Dada una expresi�n, nos preguntamos si, al ser considerada escrita en cada una de las dos notaciones, dar� el mismo resultado, uno distinto, o incluso si la expresi�n no ser� correcta en alguna de las dos (debido a divisi�n por cero).

### Entrada
La entrada consta de una serie de casos de prueba, cada uno en una l�nea distinta. Cada l�nea debe interpretarse como una expresi�n a ser evaluada en cada una de las dos notaciones explicadas antes. Los operandos ser�n siempre d�gitos individuales positivos y los operadores podr�n ser suma (+), resta (-), multiplicaci�n (*) o divisi�n (/). Los c�lculos deben realizarse con aritm�tica entera y se garantiza que ning�n resultado intermedio exceder� 231-1.

### Salida
Para cada caso de prueba se mostrar� una l�nea en la que aparecer� el resultado de evaluar la expresi�n utilizando una pila y despu�s utilizando una cola. Entre ambos resultados se mostrar� el s�mbolo = si ambos coinciden o != si no. Ten en cuenta que algunas de las dos evaluaciones puede fallar; en ese caso se mostrar� ERROR.

### Entrada de ejemplo

```
2453/*+
6
811-/
11-8/
00/
```
### Salida de ejemplo

```
6 != 17
6 = 6
ERROR != -7
0 != ERROR
ERROR = ERROR

```