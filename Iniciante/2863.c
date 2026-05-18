#include <stdio.h>
 
int main() {
int t,c;
double a[100],min;
while(scanf("%d\n",&t)!=EOF){
min=12.0;
for(int i=0;i<t;i++) scanf("%lf\n",&a[i]);

for(int i=0;i<t;i++){
    if(a[i]<min) min=a[i];
}
printf("%.2lf\n",min);
} 
    return 0;
}