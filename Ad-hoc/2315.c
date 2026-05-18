#include <stdio.h>
 
int main() {
 
int d1,m1,d2,m2,total=0;
scanf("%d %d\n%d %d\n",&d1,&m1,&d2,&m2);
if(m1==m2){
    total=d2-d1;
}else{
    total=0;
    for(int i=m1;i<=m2;i++){
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
        if(i==m1) total+=31-d1;
        else if(i==m2) total+=d2;
        else  total+=31;
    }else if(i==4 || i==6 || i==9 || i==11){
        if(i==m1) total+=30-d1;
        else if(i==m2) total+=d2;
        else total+=30;
    }else{
        if(i==m1) total+=28-d1;
        else if(i==m2) total+=d2;
        else total+=28;
    }
    }
}
    printf("%d\n",total);
    return 0;
}