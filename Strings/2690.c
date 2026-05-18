#include <stdio.h>
int main() {
 
char codigo[1000];
int n;
scanf("%d\n",&n);
while(n--){
    scanf("%[^\n]\n",codigo);
    for(int i=0,j=0;codigo[i]!='\0';i++){
            if(codigo[i]==' ') continue;
            else{
            if(codigo[i]=='G' || codigo[i]=='Q' || codigo[i]=='a' || codigo[i]=='k' || codigo[i]=='u') codigo[j]='0';
            else if(codigo[i]=='I' || codigo[i]=='S' || codigo[i]=='b' || codigo[i]=='l' || codigo[i]=='v') codigo[j]='1';
            else if(codigo[i]=='E' || codigo[i]=='O' || codigo[i]=='Y' || codigo[i]=='c' || codigo[i]=='m' || codigo[i]=='w') codigo[j]='2';
            else if(codigo[i]=='F' || codigo[i]=='P' || codigo[i]=='Z' || codigo[i]=='d' || codigo[i]=='n' || codigo[i]=='x') codigo[j]='3';
            else if(codigo[i]=='J' || codigo[i]=='T' || codigo[i]=='e' || codigo[i]=='o' || codigo[i]=='y') codigo[j]='4';
            else if(codigo[i]=='D' || codigo[i]=='N' || codigo[i]=='X' || codigo[i]=='f' || codigo[i]=='p' || codigo[i]=='z') codigo[j]='5';
            else if(codigo[i]=='A' || codigo[i]=='K' || codigo[i]=='U' || codigo[i]=='g' || codigo[i]=='q') codigo[j]='6';
            else if(codigo[i]=='C' || codigo[i]=='M' || codigo[i]=='W' || codigo[i]=='h' || codigo[i]=='r') codigo[j]='7';
            else if(codigo[i]=='B' || codigo[i]=='L' || codigo[i]=='V' || codigo[i]=='i' || codigo[i]=='s') codigo[j]='8';
            else codigo[j]='9';
            j++;
            }
            if(j==12) break;
        }
        for(int i=0;i<12;i++){
          if(i!=11) printf("%c",codigo[i]);
          else printf("%c\n",codigo[i]);
          }
    }
    return 0;
}