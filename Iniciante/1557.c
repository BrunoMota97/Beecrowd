#include <stdio.h>
#include<math.h> 
int main() {
 
int t,contador=0,espacos=0,i;
scanf("%d\n",&t);
while(t!=0){
for( i=0;i<t;i++){
    for(int j=0,k=i;j<t;j++,k++){
        int ex = pow(2,k);
        if(t==3 || t==4){
                    if(j==0) printf("%*d",2,ex);
                    else printf(" %*d",2,ex);
                } else if(t==5){
                    if(j==0) printf("%*d",3,ex);
                    else printf(" %*d",3,ex);
                } else if(t==6 || t==7){
                    if(j==0) printf("%*d",4,ex);
                    else printf(" %*d",4,ex);
                } else if(t==8 || t==9){
                    if(j==0) printf("%*d",5,ex);
                    else printf(" %*d",5,ex);
                } else if(t==10){
                    if(j==0) printf("%*d",6,ex);
                    else printf(" %*d",6,ex);
                } else if(t==11 || t==12){
                    if(j==0) printf("%*d",7,ex);
                    else printf(" %*d",7,ex);
                }
                else if(t==13 || t==14) {
                    if(j==0) printf("%*d",8,ex);
                    else printf(" %*d",8,ex);
                } else if(t==15) {
                    if(j==0) printf("%*d",9,ex);
                    else printf(" %*d",9,ex);
                }else{
                    if(j==0)printf("%d",ex);
                    else printf(" %d",ex);
                }
            }
                printf("\n");
    }
    printf("\n");
scanf("%d\n",&t);
}
return 0;
}