#include <stdio.h>
 
int main() {
 
int n;
scanf("%d\n",&n);
int step[n];
for(int i=0;i<n;i++) scanf("%d",&step[i]);
if(n==1 || n==2) printf("1\n");
else{
int j=0,dif;
dif=step[1]-step[0];

for(int i=1;i<n;i++){
    if(step[i]-step[i-1]!=dif) j++;
    dif=step[i]-step[i-1];
}
printf("%d\n",j+1);
}
    return 0;
}