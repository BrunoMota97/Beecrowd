#include <stdio.h>
 
int main() {
 
int h,m;
while(scanf("%d %d\n",&h,&m)!=EOF){
h=h/30; m=m/6;
if(h<10 && m<10) printf("0%d:0%d\n",h,m);
else if(h<10 && m>=10) printf("0%d:%d\n",h,m);  
else if(h>=10 && m<10) printf("%d:0%d\n",h,m);
else printf("%d:%d\n",h,m);
}
    return 0;
}