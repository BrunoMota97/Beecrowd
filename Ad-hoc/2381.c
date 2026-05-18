#include<stdio.h>
#include<string.h>

#define MAXCHAR 21
int main(){
    int i=0,j=0,n,k;
   scanf("%d %d\n",&n,&k);
   char string[n][MAXCHAR], nova[MAXCHAR];
    while(i<n) scanf("%s",string[i++]);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j++){
            if(strcmp(string[j-1],string[j])>0){
                strcpy(nova,string[j-1]);
                strcpy(string[j-1],string[j]);
                strcpy(string[j],nova);
            }
        }
    }
    printf("%s\n",string[k-1]);
        return 0;
}