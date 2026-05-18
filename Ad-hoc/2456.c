#include <stdio.h>
 
int main() {
 
int a[5],c=0,d=0;

for(int i=0;i<5;i++) scanf("%d",&a[i]);

for(int i=0;i<5;i++){
    if(a[i]<a[i+1] && i!=4) c++;
    if(a[i]>a[i+1] && i!=4) d++;
}
 if(c==4) printf("C\n");
 else if(d==4) printf("D\n");
 else printf("N\n");
    return 0;
}