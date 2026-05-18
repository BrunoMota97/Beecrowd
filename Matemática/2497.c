#include <stdio.h>
 
int main() {
 
int n,i=0;
while(n!=-1){
    scanf("%d",&n);
    if(n==-1) break;
    printf("Experiment %d: %d full cycle(s)\n",++i,n/2);
}
 
    return 0;
}