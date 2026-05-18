#include <stdio.h>
 
int main() {
 
int am,rm,em,av,rv,ev,i,c,m,v;
char frase[100001];
scanf("%d %d %d\n%d %d %d\n",&am,&rm,&em,&av,&rv,&ev);
scanf("%[^\n]",frase);
for(i=0;frase[i]!='\0';i++);
c=i;
v=2*av+rv+ev*c;
m=2*am+rm+em*c;
if(m<v) printf("Matheus\n");
else if(m>v) printf("Vinicius\n");
else printf("Empate\n");
    return 0;
}