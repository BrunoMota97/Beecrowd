#include <stdio.h>
 
int main() {
int h,m;
while(scanf("%d:%d\n",&h,&m)!=EOF){
if(h<7) printf("Atraso maximo: 0\n");
else if(h==7){
printf("Atraso maximo: %d\n",m);
}else if(h==8){
    printf("Atraso maximo: %d\n",m+=60);
}else{
     printf("Atraso maximo: %d\n",m+=120);
}
}
    return 0;
}