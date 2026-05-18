#include <stdio.h>
#include<math.h>

int main(){
	int t,n, m;
	scanf("%d\n",&t);
	while(t--){
	  scanf("%d %d\n",&n,&m);
	  int r=ceil((n-2)/3.0), e=ceil((m-2)/3.0);
	  printf("%d\n",r*e);
	}
	return 0;
}