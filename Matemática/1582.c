#include <stdio.h>
#include <stdio.h>

int gdc(int a, int b){

    int result = ((a < b) ? a : b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}

int main() {
 
int x,y,z,max,c;
while(scanf("%d %d %d\n",&x,&y,&z)!=EOF){

max=fmax(fmax(x,y),z);

if(max==x){
   c=y*y +z*z; 
}else if(max==y){
  c=x*x +z*z;  
}else{
  c=x*x +y*y;  
}
if((max*max)==c){ 
    if(gdc(x,y)==1 && gdc(y,z)==1 && gdc(x,z)==1) printf("tripla pitagorica primitiva\n");
    else printf("tripla pitagorica\n");
}else printf("tripla\n");
}
    return 0;
}