#include <stdio.h>
 
int main() {
 
int l,v[501];

while(scanf("%d\n",&l)!=EOF){
    for(int i=0;i<l;i++){
        scanf("%d\n",&v[i]);
    }
    int max=-1;
    for(int i=0;i<l;i++){
        if(v[i]>max) max=v[i];
    }
    if(max<10) printf("1\n");
    else if(max<20) printf("2\n");
    else printf("3\n");
}
    return 0;
}