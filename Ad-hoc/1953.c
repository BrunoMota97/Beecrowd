#include <stdio.h>
#include<string.h> 
int main() {
 
int n,res;
char code[10];
while(scanf("%d\n",&n)!=EOF){
    int c=0,d=0,e=0;
while(n--){
    scanf("%d %s\n",&res,code);
    if(strcmp(code,"EPR")==0) c++;
    else if(strcmp(code,"EHD")==0) d++;
    else e++;
}
printf("EPR: %d\nEHD: %d\nINTRUSOS: %d\n",c,d,e);
}
    return 0;
}