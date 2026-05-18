#include <stdio.h>
 
int main() {
 
int  x,y,z;
int i=0,g=0,e=0,c=0;
while(z!=2){

scanf("%d %d\n",&x,&y);
scanf("%d\n",&z);  
if(x>y) i++;
else if(x<y) g++;
else e++;
c++;
printf("Novo grenal (1-sim 2-nao)\n");
}


printf("%d grenais\n",c);
printf("Inter:%d\nGremio:%d\nEmpates:%d\n",i,g,e);

if(i>g) printf("Inter venceu mais\n");
else if(i<g) printf("Gremio venceu mais\n");
else printf("Nao houve vencedor\n");
    return 0;
}