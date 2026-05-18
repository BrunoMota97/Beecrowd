#include <stdio.h>
#include<string.h> 
int main() {
 
int t,soma;
char s[18];
scanf("%d\n",&t);
while(t--){
    scanf("%s\n",s);
    soma=1;
    for(int i=0;s[i]!='\0';i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='s') soma*=3;
        else soma*=2;
    }
    printf("%d\n",soma);
}
    return 0;
}