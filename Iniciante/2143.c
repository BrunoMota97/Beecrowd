#include <stdio.h>
 
int main() {
int t,n;
scanf("%d\n",&t);
while(t!=0){
    for(int i=0;i<t;i++){
        scanf("%d\n",&n);
        if(n%2!=0) printf("%d\n",((n-1)*2)+1);
        else printf("%d\n",((n-1)*2));
    }
    scanf("%d\n",&t);
}
    return 0;
}