#include <stdio.h>
 
typedef struct{
  int dia,mes,ano;
}Data;

int main() {
 
int n,m,p,c,z=0,flag;
while(scanf("%d %d\n",&n,&m)!=EOF){
  Data d[m];
  flag=1,z-=1;
for(int i=0;i<m;i++){
    scanf("%d/%d/%d\n",&d[i].dia,&d[i].mes,&d[i].ano);
     c=0;
    for(int j=0;j<n;j++){
        scanf("%d",&p);
        if(p==1) c++;
    }
    if(c==n && flag){
      z=i;
      flag=0;
    }
}
if(flag==0) printf("%d/%d/%d\n",d[z].dia,d[z].mes,d[z].ano);
else printf("Pizza antes de FdI\n");
}
    return 0;
}