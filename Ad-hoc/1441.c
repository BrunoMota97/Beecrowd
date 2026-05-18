#include <stdio.h>

int main() {
int h;
while(scanf("%d",&h)){
  if(!h) break;
  int res=h;
  while(h>1){
      if(h%2) h=3*h+1;
      else h/=2;
   res = h > res ? h:res;
  }
  printf("%d\n",res);
}
    return 0;
}