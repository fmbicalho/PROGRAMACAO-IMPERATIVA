/*
1. Diga, justificando, qual o output de cada um dos seguintes excertos de c´odigo C.
(a) int x [15] = {1, 2, 3, 4, 5,
6, 7, 8, 9,10,
11,12,13,14,15};
int *y, *z, i;
y = x; z = x+3;
for (i=0; (i<5); i++) {
printf ("%d %d %d\n",
x[i], *y, *z);
y = y+1; z = z+2;
}
(b) int main () {
int i, j, *a, *b;
i=3; j=5;
a = &i; b = &j;
i++;
j = i + *b;
b = a;
j = j + *b;
printf ("%d\n", j);
return 0;
}
2. Defina uma fun¸c˜ao void swapM (int *x, int *y) que
troca o valor de duas vari´aveis. Por exemplo, o c´odigo ao
lado dever´a imprimir no ecran 5 3.
int x = 3, y = 5;
swapM (&x, &y);
printf ("%d %d\n", x, y);
3. Defina uma fun¸c˜ao void swap (int v[], int i, int j) que troca o valor das posi¸c˜oes i e
j do vector v.
4. Defina uma fun¸c˜ao int soma (int v[], int N) que calcula a soma dos elementos de um vector
v com N inteiros.
5. Defina uma fun¸c˜ao int maximum (int v[], int N, int *m) que coloca em *m o maior dos
elementos do vector v.
A fun¸c˜ao dever´a retornar 0 sse tal for poss´ıvel (i.e., quando N>0).
6. Defina uma fun¸c˜ao void quadrados (int q[], int N) que preenche o vector q com os quadrados dos primeiros N n´umeros naturais.
7.
O triˆangulo de Pascal ´e uma forma de calcular os
coeficientes da expans˜ao do bin´omio de Newton.
Ao lado relembramos as 5 primeiras linhas.
Note que a linha n do triˆangulo tem n elementos
e que a linha n + 1 pode ser obtida a partir da
linha n usando o seguinte processo:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
• acrescenta-se um 1 no final, i.e., coloca-se 1 na posi¸c˜ao n.
• para todos os elementos (desde n-1 at´e 1, por esta ordem) substitui-se o elemento nessa
posi¸c˜ao pela sua soma com o que est´a na posi¸c˜ao anterior.
Defina uma fun¸c˜ao void pascal (int v[], int N) que preenche o vector v com a N-´esima
linha do triˆangulo de Pascal.
*/
