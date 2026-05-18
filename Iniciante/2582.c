#include <stdio.h>

int main(){
     int soma=0,c,x,y;
     char ar[20][13]={"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
     scanf("%d\n",&c);
     while(c--){
       scanf("%d %d\n",&x,&y);
       printf("%s\n",ar[x+y]);
     }
    return 0;
}