# [Evaluando expresiones](https://www.aceptaelreto.com/problem/statement.php?id=198)

Las expresiones aritméticas suelen escribirse utilizando lo que se conoce como notación infija en la que los operadores se colocan entre los operandos. Esta notación, intuitiva para los humanos, tiene el problema de obligarnos a poner paréntesis en ciertas ocasiones para cambiar el orden de aplicación de los operadores.

Por otro lado, la notación postfija consiste en colocar el operador tras los dos operandos; una de sus ventajas es que no necesita paréntesis. Además es fácilmente evaluable con una pila. El proceso de evaluación consiste en añadir a la pila los operandos que nos vayamos encontrando. Cuando leemos un operador, extraemos dos valores de la pila los combinamos con el operador encontrado (teniendo en cuenta que el primer valor que se extrae es el segundo operando de la operación) y añadimos el resultado de vuelta.

Existe otra posibilidad de notación que sigue la misma idea que la anterior pero en vez de utilizar una pila para la evaluación, utiliza una cola. Cuando se tienen que añadir elementos a la cola, se hace por detrás, mientras que la extracción se realiza por delante.

Dada una expresión, nos preguntamos si, al ser considerada escrita en cada una de las dos notaciones, dará el mismo resultado, uno distinto, o incluso si la expresión no será correcta en alguna de las dos (debido a división por cero).

### Entrada
La entrada consta de una serie de casos de prueba, cada uno en una línea distinta. Cada línea debe interpretarse como una expresión a ser evaluada en cada una de las dos notaciones explicadas antes. Los operandos serán siempre dígitos individuales positivos y los operadores podrán ser suma (+), resta (-), multiplicación (*) o división (/). Los cálculos deben realizarse con aritmética entera y se garantiza que ningún resultado intermedio excederá 231-1.

### Salida
Para cada caso de prueba se mostrará una línea en la que aparecerá el resultado de evaluar la expresión utilizando una pila y después utilizando una cola. Entre ambos resultados se mostrará el símbolo = si ambos coinciden o != si no. Ten en cuenta que algunas de las dos evaluaciones puede fallar; en ese caso se mostrará ERROR.

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