#include <stdio.h>
#include<math.h> 
int main() {
 
int t,c,d,res;
scanf("%d\n",&t);
while(t--){
    scanf("%d %d\n",&c,&d);
    if(c==0 && d==0) printf("0\n");
    else{ res=pow(26,c)*pow(10,d);
    printf("%d\n",res);
    }
}
    return 0;
}