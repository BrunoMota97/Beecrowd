#include <stdio.h>

int ar[6];

int main(){
  int hh,mm;
   char watch[15][70]={
            { " ____________________________________________" },
            { "|                                            |" },
            { "|    ____________________________________    |_" },
            { "|   |                                    |   |_)" },
            { "|   |   8         4         2         1  |   |" },
            { "|   |                                    |   |" },
            { "|   |   o         o         o         o  |   |" },
            { "|   |                                    |   |" },
            { "|   |                                    |   |" },
            { "|   |   o     o     o     o     o     o  |   |" },
            { "|   |                                    |   |" },
            { "|   |   32    16    8     4     2     1  |   |_" },
            { "|   |____________________________________|   |_)" },
            { "|                                            |" },
            { "|____________________________________________|" }
  };

   while(scanf("%d:%d\n",&hh,&mm)!=EOF){
    
     watch[6][8]=' '; watch[6][18]=' '; watch[6][28]=' '; watch[6][38]=' ';
   watch[9][8]=' ';watch[9][14]=' ';watch[9][20]=' ';watch[9][26]=' ';watch[9][32]=' ';watch[9][38]=' ';
  int i=0,q;
  /*processamento das horas*/
for(i = 3; i >= 0; i--) {
    q = hh >> i;
    if(q & 1) {
        ar[i]='1';
    } else {
        ar[i]='0';
    }
 }
 int c;
 for(int i=3;i>=0;i--){
   if(ar[i]=='1'){
     if(i==3) c=8;
     if(i==2) c=18;
     if(i==1) c=28;
     if(i==0) c=38;
     watch[6][c]='o';
   }
 }
 /**********/
   /*processamento dos minutos*/
for(i = 5; i >= 0; i--) {
    q = mm >> i;
    if(q & 1) {
        ar[i]='1';
    } else {
        ar[i]='0';
    }
 }
 for(int i=5;i>=0;i--){
   if(ar[i]=='1'){
     if(i==5) c=8;
     if(i==4) c=14;
     if(i==3) c=20;
     if(i==2) c=26;
     if(i==1) c=32;
     if(i==0) c=38;
     watch[9][c]='o';
   }
 }
 /**********/
     for(int i=0;i<15;i++){
     printf("%s\n",watch[i]);
     }
     printf("\n");

   }
   return 0;
}