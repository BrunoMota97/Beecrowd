#include <stdio.h>
 
int main() {
char str[27];
int n,l;
while(scanf("%s",str)!=EOF){
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&l);
        printf("%c",str[l-1]);
    }
    printf("\n");
    }
    return 0;
}