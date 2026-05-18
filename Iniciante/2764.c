#include <stdio.h>
 
int main() {

int dd,mm,yy;
scanf("%d/%d/%d\n",&dd,&mm,&yy);
if(dd<10 && mm<10 && yy<10){
printf("0%d/0%d/0%d\n",mm,dd,yy);
printf("0%d/0%d/0%d\n",yy,mm,dd);
printf("0%d-0%d-0%d\n",dd,mm,yy);
}else if(dd<10 && mm<10 && yy>=10){
 printf("0%d/0%d/%d\n",mm,dd,yy);
printf("%d/0%d/0%d\n",yy,mm,dd);
printf("0%d-0%d-%d\n",dd,mm,yy); 
}else if(dd>=10 && mm<10 && yy<10){
printf("0%d/%d/0%d\n",mm,dd,yy);
printf("0%d/0%d/%d\n",yy,mm,dd);
printf("%d-0%d-0%d\n",dd,mm,yy);   
}else if(dd<10 && mm>=10 && yy<10){
printf("%d/0%d/0%d\n",mm,dd,yy);
printf("0%d/%d/0%d\n",yy,mm,dd);
printf("0%d-%d-0%d\n",dd,mm,yy); 
}else if(dd<10 && mm>=10 && yy>=10){
  printf("%d/0%d/%d\n",mm,dd,yy);
printf("%d/%d/0%d\n",yy,mm,dd);
printf("0%d-%d-%d\n",dd,mm,yy); 
}else if(dd>=10 && mm<10 && yy>=10){
printf("0%d/%d/%d\n",mm,dd,yy);
printf("%d/0%d/%d\n",yy,mm,dd);
printf("%d-0%d-%d\n",dd,mm,yy); 
}else if(dd>=10 && mm>=10 && yy<10){
printf("%d/%d/0%d\n",mm,dd,yy);
printf("0%d/%d/%d\n",yy,mm,dd);
printf("%d-%d-0%d\n",dd,mm,yy); 
}else{
  printf("%d/%d/%d\n",mm,dd,yy);
printf("%d/%d/%d\n",yy,mm,dd);
printf("%d-%d-%d\n",dd,mm,yy); 
}
    return 0;
}