#include <stdio.h>
 
int main() {
 
int n,x;
scanf("%d %d\n",&n,&x);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int r=1,c=1;
for(int i=1;i<n;i++){
    if(a[i]-a[i-1]<=x){
      c++;
      if(c>r) r=c;
    }else c=1;

}
printf("%d\n",r);
 
    return 0;
}