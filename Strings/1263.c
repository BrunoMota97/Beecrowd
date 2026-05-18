#include <stdio.h>
#include<string.h> 
#include<ctype.h>

int main() {
 
char frase[5100],p;
while(scanf("%[^\n]%*c",frase)!=EOF){
    char *termo=strtok(frase," ");
    int c=1,n=0;
    char anterior =' ';
     for(int i=0;termo!=NULL;i++){
      p=termo[0];
      if(islower(p)) p-=32;
      
      if(p==anterior){
        if(c){n++,c=0;}
      }
      else{
        c=1;
      }
      anterior=p;
      termo=strtok(NULL," ");
    }
    printf("%d\n",n);
}
    return 0;
}