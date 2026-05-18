#include <stdio.h>
#include<ctype.h>
int main() {
 
char codigo[1000];

while(scanf("%[^\n]\n",codigo)!=EOF){
    for(int i=0;codigo[i]!='\0';i++){
        if(isalpha(codigo[i])){
            //codigo[i]=(int)codigo[i]
            codigo[i]=toupper(codigo[i]);
            if(codigo[i]>='A' && codigo[i]<='C') codigo[i]='2';
            if(codigo[i]>='D' && codigo[i]<='F') codigo[i]='3';
            if(codigo[i]>='G' && codigo[i]<='I') codigo[i]='4';
            if(codigo[i]>='J' && codigo[i]<='L') codigo[i]='5';
            if(codigo[i]>='M' && codigo[i]<='O') codigo[i]='6';
            if(codigo[i]>='P' && codigo[i]<='S') codigo[i]='7';
            if(codigo[i]>='T' && codigo[i]<='V') codigo[i]='8';
            if(codigo[i]>='W' && codigo[i]<='Z') codigo[i]='9';
            printf("%c",codigo[i]);
        }else if(isdigit(codigo[i])){ 
          printf("%c",codigo[i]);
        }else if(codigo[i]=='#' || codigo[i]=='*'){ 
          printf("%c",codigo[i]);
        }
    }
        printf("\n");
}
    return 0;
}