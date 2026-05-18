#include <stdio.h>
 
int main() {
 
int n,t1,t2,c1,c2;
scanf("%d\n",&n);
while(n--){
    scanf("%d x %d\n%d x %d\n",&t1,&c1,&c2,&t2);
    int s1=t1+t2,s2=c1+c2;
    if((s1 > s2) || (s1==s2 && t2>c1)) printf("Time 1\n");
    else if((s1<s2) || (s1==s2 && c1>t2)) printf("Time 2\n");
    else printf("Penaltis\n");
}
    return 0;
}