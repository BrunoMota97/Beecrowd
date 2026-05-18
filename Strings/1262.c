#include <stdio.h>
int main() {
char processo[51];
int p;
while(scanf("%s %d\n",processo,&p)!=EOF){
    int r=0,c=0;
    for(int i=0;processo[i]!='\0';i++){
        if(processo[i]=='W') r++,c=0;
        else{
          if(c==p) c=0;
          if(c==0) r++;
          c++;
        }
    }
    printf("%d\n",r);
}
    return 0;
}