#include <stdio.h>
#include<math.h>
#include<string.h>
int main() {
int n,a[5],b[5],i,soma,v1,v2,d;
char s[10];
scanf("%d\n",&n);
while(n--){
scanf("%s\n",s);
if(s[0]=='P') printf("skipped\n");
else{
   for(i=0,soma=0;s[i]!='+';i++){
       a[i]=s[i]-'0';
       soma+=(a[i]*pow(10,i));
      }
      int k=i;
      soma=0;
      for(int i=0;i<k;i++){
         soma+=(a[i]*pow(10,k-1-i));
      }
      v1=soma;
     int l=k+1;
    for(d=k+1,soma=0,i=0;s[d]!='\0';d++,i++){
       b[d]=s[d]-'0';
        soma+=(b[d]*pow(10,i));
    }
    int e=d;
   for(i=e-1,soma=0,k=0;i>=l;i--,k++){
         soma+=(b[i]*pow(10,k));
      }
      v2=soma;
     printf("%d\n",v1+v2); 
}
}
    return 0;
}