/*
1. Defina uma fun¸c˜ao int minusculas (char s[]) que substitui na string s todas as
letras mai´usculas pela correspondente letra min´uscula.
A fun¸c˜ao dever´a retornar quantas substitui¸c˜oes foram efectuadas.
2. Defina uma fun¸c˜ao int contalinhas (char s[]) que calcula quantas linhas tem uma
string (assuma que o caracter que separa duas linhas ´e ’\n’).
3. Defina uma fun¸c˜ao int contaPal (char s[]) que calcula quantas palavras tem uma
string. Assuma que uma palavra ´e um conjunto de caracteres n˜ao brancos terminada
por um caracter branco. Use para isso a fun¸c˜ao standard (ctype.h) int isspace(int
c).
4. Defina uma fun¸c˜ao int procura (char *p, char *ps[], int N) que procura uma
string p num array de strings ps).
5. Considere o seguinte tipo para representar stacks de n´umeros inteiros.
#define MAX 100
typedef struct stack {
int sp;
int valores [MAX];
} STACK;
Defina as seguintes fun¸c˜oes sobre este tipo:
(a) void initStack (STACK *s) que inicializa uma stack (passa a representar uma
stack vazia)
(b) int isEmptyS (STACK *s) que testa se uma stack ´e vazia
(c) int push (STACK *s, int x) que acrescenta x ao topo de s; a fun¸c˜ao deve retornar 0 se a opera¸c˜ao fˆor feita com sucesso (i.e., se a stack ainda n˜ao estiver cheia)
e 1 se a opera¸c˜ao n˜ao fˆor poss´ıvel (i.e., se a stack estiver cheia).
(d) int pop (STACK *s, int *x) que remove de uma stack o elemento que est´a no
topo. A fun¸c˜ao dever´a colocar no endere¸co x o elemento removido. A fun¸c˜ao
dever´a retornar 0 se a opera¸c˜ao for poss´ıvel (i.e. a stack n˜ao est´a vazia) e 1 em
caso de erro (stack vazia).
(e) int top (STACK *s, int *x) que coloca no endere¸co x o elemento que est´a no
topo da stack (sem modificar a stack). A fun¸c˜ao dever´a retornar 0 se a opera¸c˜ao
for poss´ıvel (i.e. a stack n˜ao est´a vazia) e 1 em caso de erro (stack vazia).
*/
