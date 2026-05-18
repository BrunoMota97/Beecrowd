#include <stdio.h>
 
int main() {
 
int n,o;
char com[3];
scanf("%d\n",&n);
while(n--){
    scanf("%d %s\n",&o,com);
    if(!strcmp(com,"1T")){
        if(o<=45) printf("%d\n",o);
        else printf("45+%d\n",o-45);
    }else{
        if(o<=45) printf("%d\n",o+45);
        else printf("90+%d\n",o-45);
    }
}
 
    return 0;
}