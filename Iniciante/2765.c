#include <stdio.h>
 
int main() {
 
char frase[128];
int i;
scanf("%[^\n]",frase);

for(i=0;frase[i]!=',';i++){
  printf("%c",frase[i]);
} 
int k=i+1;
printf("\n");
for(int i=k;frase[i]!='\0';i++) printf("%c",frase[i]);
printf("\n");
    return 0;
}