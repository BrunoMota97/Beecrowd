#include <stdio.h>
 
int main() {
int n;
while(scanf("%d\n",&n)!=EOF){
    int c=1,res=1;
    while(c%n!=0){
        c=(10*c+1)%n;
        res++;
    }
    printf("%d\n",res);
}
    return 0;
}