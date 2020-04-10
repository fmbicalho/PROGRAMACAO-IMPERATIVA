/*
1. Podemos calcular o produto de um n´umero m por um inteiro n atrav´es de um somat´orio
de n parcelas constantes (e iguais a m).
Assim
n × m =
Xn
i=1
m = m + m + · · · + m | {z }
n vezes
Este c´alculo pode ser efectuado somando n vezes a quantidade m a uma vari´avel inicialmente com o valor 0.
Apresente uma defini¸c˜ao da fun¸c˜ao float multInt (int n, float m) baseada nesta
observa¸c˜ao: a uma vari´avel r (inicialmente com o valor 0) ser´a somado o valor de m,
n vezes. Essa vari´avel r vai ter os valores 0, m, 2*m, 3*m, . . . , e no final ter´a o valor
desejado n*m.
2. Uma forma alternativa (e muito mais eficiente) consiste em aproveitar a representa¸c˜ao
bin´aria dos inteiros (onde a multiplica¸c˜ao e divis˜ao por 2 s˜ao pelo menos t˜ao eficientes
como a adi¸c˜ao).
Dados dois n´umeros m e n podemos construir uma tabela em
que vamos dividindo (divis˜ao inteira) n por 2 e multiplicando
m por 2. A primeira linha da tabela tem o valor original de n
enquanto que a ´ultima corresponde a n ser 1.
Para obter o valor do produto de n por m basta somar os
valores de m correspondentes `as linhas em que n ´e impar.
A tabela ao lado corresponde a um exemplo em que n=81 e
m=423.
n m
1 81 423
2 40 846
3 20 1692
4 10 3384
5 5 6768
6 2 13536
7 1 27072
Se somarmos os valores de m para os quais n e impar (i.e., as linhas 1, 5 e 7) obtemos
423 + 6768 + 27072 = 34263 = 81 ∗ 423.
Apresente uma defini¸c˜ao alternativa da fun¸c˜ao float multInt (int n, float m) usando este processo.
3. O c´alculo do m´aximo divisor comum entre dois n´umeros inteiros n˜ao negativos pode ser
feito, de uma forma muito pouco eficiente, procurando de entre os divisores do menor
deles, o maior que ´e tamb´em divisor do outro.
Defina uma fun¸c˜ao int mdc (int a, int b) que usa esse m´etodo para calcular o
m´aximo dicvisor comum entre dois n´umeros).
1
4. Uma forma alternativa de calcular o m´aximo divisor comum (mdc) baseia-se na seguinte
propriedade demonstrada por Euclides: para a e b inteiros positivos,
mdc (a, b) = mdc (a + b, b)
Desta propriedade podemos concluir que:
mdc (a, b) =



mdc (a − b, b) Se a > b
mdc (a, b − a) Se a < b
a Se a = b
O c´alculo do m´aximo dicvisor comum pode ser
feito por um processo repetitivo em que substituimos o maior dos argumentos pela diferen¸ca entre eles, at´e que um deles seja 0. Nessa altura, o
valor do outro corresponde ao valor pretendido.
Por exemplo, para calcularmos o m´aximo divisor
comum entre 126 e 45 passar´ıamos pelos estados
que se apresentam `a direita.
a b
126 45
81 (=126-45) 45
36 (=81-45) 45
36 9 (=45-36)
27 (=36-9) 9
18 (=27-9) 9
9 (=18-9) 9
0 (=9-9) 9
Apresente uma defini¸c˜ao alternativa da fun¸c˜ao int mdc (int a, int b) que usa esse
m´etodo.
5. Uma forma de melhorar o comportamento do algoritmo de Euclides consiste em substituir as opera¸c˜oes de subtrac¸c˜ao por opera¸c˜oes de % (resto da divis˜ao inteira). Repita o
exerc´ıcio da al´ınea anterior para essa variante do algoritmo.
6. A sequˆencia de Fibonacci define-se como
fib (n) =



1 Se n < 2
fib (n − 1) + fib (n − 2) Se n ≥ 2
(a) Apresente uma defini¸c˜ao recursiva de uma fun¸c˜ao que int fib (int n) calcula o
n-´esimo n´umero desta sequˆencia.
(b) O c´alculo do n-´esimo n´umero de Fibonacci pode ser definido de uma forma mais
eficiente (e iterativa) se repararmos que ele apenas necessita de conhecer os valores
dos 2 valores anteriores. Apresente uma defini¸c˜ao alternativa (e iterativa) da fun¸c˜ao
da al´ınea anterior que calcula o n-´esimo n´umero de Fibonacci, usando duas vari´aveis
auxiliares que guardam os dois valores anteriores.
*/
