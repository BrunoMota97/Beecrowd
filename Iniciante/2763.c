#include <stdio.h>
int main() {
char s[15];
scanf("%s\n",s);
int n=0,c=0,r=3,i;
while(n<3){
for(i=c;i<r;i++) printf("%c",s[i]);
c=i+1,n++,r+=4;
printf("\n");
}
for(int i=12;i<14;i++) printf("%c",s[i]);
printf("\n");
    return 0;
}