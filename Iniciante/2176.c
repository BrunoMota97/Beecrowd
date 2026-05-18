#include<stdio.h>
#include<string.h>
int main(){
char s[101];
int conta=0;
scanf("%s\n",s);
for(int i=strlen(s)-1;i>=0;i--){
  int v=s[i]-'0';
  int digito=v%10;
  if(digito==1) conta++;
   v/=10;
}
if(conta%2==0) printf("%s0\n",s);
else printf("%s1\n",s);
return 0;
}