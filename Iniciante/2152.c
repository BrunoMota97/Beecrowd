#include <stdio.h>
 
int main() {
 
int n,h,m,o;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d %d\n",&h,&m,&o);
    if(h<10 && m>=10) printf("0%d:%d - A porta %s!\n",h,m,o==1?"abriu":"fechou");
    else if(h>=10 && m<10) printf("%d:0%d - A porta %s!\n",h,m,o==1?"abriu":"fechou");
    else if(h>=10 && m>=10) printf("%d:%d - A porta %s!\n",h,m,o==1?"abriu":"fechou");
    else printf("0%d:0%d - A porta %s!\n",h,m,o==1?"abriu":"fechou");
}
    return 0;
}