#include <stdio.h>
 
int main() {
 
int a,b,c;
char res;
while(scanf("%d %d %d\n",&a,&b,&c)!=EOF){
    if(a!=b && a!=c) res='A';
    if(b!=a && b!=c) res='B';
    if(c!=a && c!=b) res='C';
    if(a==b && b==c) res='*';
    printf("%c\n",res);
}
 
    return 0;
}