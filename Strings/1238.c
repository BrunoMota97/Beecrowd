#include <stdio.h>
#include<string.h>
int main() {
 
int n,maior,t1,t2;
char s1[52],s2[52];
scanf("%d\n",&n);
while(n--){
    scanf("%s %s",s1,s2);
    t1=strlen(s1);
    t2=strlen(s2);
    if(t1>=t2) maior=t1;
    else maior=t2;
    for(int i=0;i<maior;i++){
     if(i<t1) printf("%c",s1[i]);
     if(i<t2) printf("%c",s2[i]);
    }
    printf("\n");
}
 
    return 0;
}