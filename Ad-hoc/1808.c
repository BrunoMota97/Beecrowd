#include <stdio.h>
 
int main() {
char s[10001];
scanf("%s\n",s);
int c=0;
double soma=0,valor;
for(int i=0;s[i]!='\0';i++){
    if(s[i]=='1'){
         if(s[i+1]=='0'){
        valor=(s[i]-'0')*10;
     }else{ 
        valor=(s[i]-'0');
    }
       c++;    soma+=valor;
    }else if(s[i]!='0' && s[i]!='1'){
        valor=(s[i]-'0');
      c++;     soma+=valor;
    }
}
printf("%.2lf\n",soma/c);
    return 0;
}