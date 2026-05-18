#include <stdio.h>
 
int main() {
 
int n,c;
scanf("%d\n",&c);
while(c--){
    scanf("%d",&n);
    double soma=0;
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
        soma+=v[i];
    }
    double media=soma/n;
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i]>media) c++;
    }
    printf("%.3lf%\n",(double)c/n *100);
}
    return 0;
}