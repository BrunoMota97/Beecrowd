#include <stdio.h>
#include<string.h>
int main() {
 
int n;
char passe[101];
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%s\n",passe);
    if(strlen(passe)<20) printf("INVALID DATA");
    else if(passe[0]!='R' && passe[1]!='A') printf("INVALID DATA");
    else
    for(int i=2,flag=0;passe[i]!='\0';i++){
        if(flag==0){
        while(passe[i]=='0'){
        i++;
        }
        flag=1;
        }
        if(passe[i]=='0') printf("0");
        else printf("%c",passe[i]);
    }
    printf("\n");
}
    return 0;
}