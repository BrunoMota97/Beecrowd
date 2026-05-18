#include <stdio.h>
 
int main() {
 
int p1,p2;
scanf("%d %d\n",&p1,&p2);

if(p2>=0 && p2<=2) printf("nova\n");
else if(p2>=97 && p2<=100) printf("cheia\n");
else{
    if(p1<p2) printf("crescente\n");
    else printf("minguante\n");
}
    return 0;
}