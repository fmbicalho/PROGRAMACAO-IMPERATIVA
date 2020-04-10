//1

//A
int x, y;
x = 3;
y = x + 1;
x = x * y ;
y = x + y ;
printf(" %d %d \n", x, y);

//B
int x , y;
x = 0;
printf(" %d %d \n", x, y);

//C
char a, b, c;
a = ’A’;
b = ’ ’;
c = ’0’;
printf(" %c %d \n", a, a);
a = a +1;
c = c +2;
printf(" %c %d %c %d \n", a, a, c, c);
c = a + b;
printf(" %c %d \n", c, c);

//D
int x, y;
x = 200;
y = 100;
x = x + y;
y = x - y;
x = x - y;
printf("%d %d \n", x, y);


//2

//A
int x, y;
x = y = 0;
  while(x != 11){
    x = x + 1;
    y += x;
}
printf("%d %d \n", x, y);

//B
int x, y;
x = y = 0;
  while(x != 11){
    x = x + 2;
    y += x;
}
printf("%d %d \n", x, y);

//C
int i;
for(i = 0; i < 20 ; i ++)
  if(i %2 == 0) putchar(’_’);
  else putchar(’#’);
  
//D
char i, j;
for(i = ’a’; i != ’h’; i++){
  for(j = i; j != ’h’; j++)
  putchar('j');
  putchar(’\n’);
}

//E
void f(int n){
  while(n > 0){
    if(n%2 == 0)putchar(’0’);
    else putchar(’1’);
   n = n /2;
  }
putchar(’\n’);
}

//F
int main(){
  int i;
  for(i =0; (i < 16); i++)
  f (i);
  return 0;
}

//---- Ok Above ------

/*
2. Escreva um programa que desenhe no ecran (usando o caracter #) um quadrado de dimens˜ao 5. Defina para isso uma
fun¸c˜ao que desenha um quadrado de dimens˜ao n. Use a fun¸c˜ao
putchar. O resultado da invoca¸c˜ao dessa fun¸c˜ao com um argumento 5 dever´a ser o que se apresenta `a direita.
#####
#####
#####
#####
#####
3. Escreva um programa que desenhe no ecran (usando os caracteres # e _) um tabuleiro de xadrez. Defina para isso uma
fun¸c˜ao que desenha um tabuleiro de xadrez de dimens˜ao n.
Use a fun¸c˜ao putchar. O resultado da invoca¸c˜ao dessa fun¸c˜ao
com um argumento 5 dever´a ser o que se apresenta `a direita.
#_#_#
_#_#_
#_#_#
_#_#_
#_#_#
4. Escreva duas fun¸c˜oes que desenham triangulos (usando o caracter #). O resultado da invoca¸c˜ao dessas fun¸c˜oes com um argumento
5 dever´a ser o que se apresenta `a direita.
#
##
###
####
#####
####
###
##
#
#
###
#####
#######
#########
Defina cada uma dessas fun¸c˜oes (com o nome triangulo), num ficheiro separado (vertical.c
e horizontal.c). Compile esses dois ficheiros (usando o comando gcc -c) separadamente.
2
Considere agora o programa
triangulo.c ao lado.
Compile este programa (com o comando gcc -c triangulo.c). Construa (e use) agora dois execut´aveis, usando os comandos
• gcc -o t1 triangulo.o vertical.o
• gcc -o t2 triangulo.o horizontal.o
# include < stdio .h >
void triangulo ( int n )
;
main () {
triangulo (5) ;
return 0;
}
*/
