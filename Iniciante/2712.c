#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
 
int n;
char matricula[110],ultimo;
scanf("%d\n",&n);

while(n--){
    scanf("%[^\n]%*c",matricula);
    if(strlen(matricula)!=8) printf("FAILURE\n");
    else{
        if(isupper(matricula[0]) && isupper(matricula[1]) &&  isupper(matricula[2])){
            if(matricula[3]=='-'){
                if(isdigit(matricula[4]) && isdigit(matricula[5]) && isdigit(matricula[6]) && isdigit(matricula[7])){
                ultimo=matricula[strlen(matricula)-1];
                if(ultimo=='1' || ultimo=='2') printf("MONDAY\n");
                if(ultimo=='3' || ultimo=='4') printf("TUESDAY\n");
                if(ultimo=='5' || ultimo=='6') printf("WEDNESDAY\n");
                if(ultimo=='7' || ultimo=='8') printf("THURSDAY\n");
                if(ultimo=='9' || ultimo=='0') printf("FRIDAY\n");
            }else{
              printf("FAILURE\n");
            }
          }else{
            printf("FAILURE\n");
            }
        }else{
          printf("FAILURE\n");
        }
    }
}
    return 0;
}