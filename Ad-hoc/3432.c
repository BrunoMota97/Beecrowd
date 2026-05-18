#include <stdio.h>
 
int main() {
 
int n[8],flag=0;
for(int i=0;i<8;i++){
    scanf("%d",&n[i]);
}
scanf("\n");
for(int i=0;i<8;i++){
    if(n[i]==9) flag=1;
}
if(flag) printf("F\n");
else printf("S\n");
    return 0;
}