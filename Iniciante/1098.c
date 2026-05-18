#include <stdio.h>
 
int main() {
for(float i=0.0,c=1.0;i<=2.2;i+=0.2,c+=0.2){
    for(float j=c,c=0;c<=2;j++,c++){
     printf("I=%g J=%g\n",i,j);
    }
}
    return 0;
}