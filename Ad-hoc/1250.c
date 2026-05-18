#include <stdio.h>
 
int main() {
int n,s,v[51];
scanf("%d\n",&n);
char c[51];
while(n--){
    scanf("%d\n",&s);
    for(int i=0;i<s;i++){
        scanf("%d",&v[i]);
    }
    scanf("\n");
     for(int i=0;i<s;i++){
       scanf("%c",&c[i]);
    }
    scanf("\n");
    int h=0;
    for(int i=0;i<s;i++){
        if(c[i]=='S'){
            if(v[i]==1 || v[i]==2) h++;
        }
        if(c[i]=='J'){
          if(v[i]>2) h++;  
        }
    }
    printf("%d\n",h);
}
    return 0;
}