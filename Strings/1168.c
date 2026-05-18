#include <stdio.h>
#include<string.h> 
int main() {
 
int n;
char v[101];
scanf("%d\n",&n);
while(n--){
    scanf("%s\n",v);
    int soma=0;
    for(int i=0;i<strlen(v);i++){
     if(v[i]=='1') soma+=2;
     else if(v[i]=='2' || v[i]=='3' || v[i]=='5') soma+=5;
     else if(v[i]=='4') soma+=4;
     else if(v[i]=='6' || v[i]=='9' || v[i]=='0') soma+=6;
     else if(v[i]=='7') soma+=3;
     else soma+=7;
    }
    printf("%d leds\n",soma);
}
    return 0;
}