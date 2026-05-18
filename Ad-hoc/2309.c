#include <stdio.h>
 
int main() {
 
int n,a1,a2,a3,b1,b2,b3,c,d,a=0,b=0,ar[20];
ar[4]=1,ar[5]=2,ar[6]=3,ar[7]=4,ar[12]=5,ar[11]=6,ar[13]=7,ar[1]=8,ar[2]=9,ar[3]=10;
scanf("%d\n",&n);
for(int i=1;i<=n;i++){
    c=0,d=0;
scanf("%d %d %d %d %d %d\n",&a1,&a2,&a3,&b1,&b2,&b3);
        if(ar[a1]>=ar[b1])c++;
        else d++;
        if(ar[a2]>=ar[b2]) c++;
        else d++;
        if(ar[a3]>=ar[b3]) c++;
        else d++;
        if(c>d) a++;
        else b++;
}
printf("%d %d\n",a,b);
    return 0;
}