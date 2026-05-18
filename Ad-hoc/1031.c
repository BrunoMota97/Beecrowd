#include <stdio.h>

int find(int n, int k){
	 int sum = 0, i;

	for (i = 1; i < n; i++)
		sum = (sum + k) % i;

	return sum ;
}

int main(){
	int n, k;
	while(scanf("%d\n",&n)!=0){
	  if(n==0) break;
	  int y=0;
	     for(;;){
        if(find(n,y) != 11) y++;
          else break;
           }

	printf("%d\n",y);
	}
	return 0;
}