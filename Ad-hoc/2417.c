#include <stdio.h>
 
int main() {
int cv,ce,cs,fv,fe,fs,c,e;
scanf("%d %d %d %d %d %d\n",&cv,&ce,&cs,&fv,&fe,&fs);
c=cv*3 + ce;
e=fv*3 + fe;
 if (c>e || (c==e && cs>fs)) printf("C\n");
 else if (c < e || (c == e && cs < fs)) printf("F\n");
 else printf("=\n");
    return 0;
}