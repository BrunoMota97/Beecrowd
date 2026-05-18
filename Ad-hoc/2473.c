#include <stdio.h>
 
int main() {
 
int a[6],b[6],c=0;
for(int i=0;i<6;i++) scanf("%d ",&a[i]);
scanf("\n");
for(int i=0;i<6;i++) scanf("%d ",&b[i]);
scanf("\n");

for(int i=0;i<6;i++){
  for(int j=0;j<6;j++){
      if(b[i]==a[j]) c++;
  }
}
if(c<3) printf("azar\n");
else if(c==3) printf("terno\n");
else if(c==4)printf("quadra\n");
else if(c==5) printf("quina\n");
else printf("sena\n");
 
    return 0;
}