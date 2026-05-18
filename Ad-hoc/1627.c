#include <stdio.h>
 
int main() {
 
int t,at,ad,bt,bd,h,dano1,dano2;
scanf("%d\n",&t);
while(t--){
    scanf("%d %d %d %d\n%d\n",&at,&ad,&bt,&bd,&h);
    dano1=0,dano2=0;
    while(1){
        if(dano1<=dano2){
            h-=at;
            dano2-=dano1;
            dano1=ad;
            if(h<=0){
                printf("Andre\n");
                break;
            }
        }else{
            h-=bt;
            dano1-=dano2;
            dano2=bd;
            if(h<=0){
                printf("Beto\n");
                break;
            }
        }
    }
}
    return 0;
}#include <stdio.h>
 
int main() {
 
int t,at,ad,bt,bd,h,dano1,dano2;
scanf("%d\n",&t);
while(t--){
    scanf("%d %d %d %d\n%d\n",&at,&ad,&bt,&bd,&h);
    dano1=0,dano2=0;
    while(1){
        if(dano1<=dano2){
            h-=at;
            dano2-=dano1;
            dano1=ad;
            if(h<=0){
                printf("Andre\n");
                break;
            }
        }else{
            h-=bt;
            dano1-=dano2;
            dano2=bd;
            if(h<=0){
                printf("Beto\n");
                break;
            }
        }
    }
}
    return 0;
}