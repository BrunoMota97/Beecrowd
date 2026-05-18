#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
 
int n,qt,s,a;
scanf("%d\n",&n);
while(n--){
    scanf("%d %d\n",&qt,&s);
    int dif[qt];
    for(int i=0;i<qt;i++){
        scanf("%d",&a);
        dif[i]=abs(s-a);
    }
    scanf("\n");
    int min=dif[0],pos=0;
    for(int i=1;i<qt;i++){
        if(dif[i]<min){
            min=dif[i];
            pos=i;
        }
    }
    printf("%d\n",pos+1);
}
    return 0;
}