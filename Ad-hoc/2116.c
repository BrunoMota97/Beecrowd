#include <stdio.h>
 
int primo(int n){
	int i, divisores = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0) divisores++;
	if (divisores == 2)	return 1;
	else	return 0;
}
 
int main(){
int n,m,i,pos1,pos2;
scanf("%d %d\n",&n,&m);
	for (i = 1; i <= n; i++){
		if (primo(i) == 1) pos1=i;
	}
  for (i = 1; i <= m; i++){
		if (primo(i) == 1) pos2=i;
  }
printf("%d\n",pos1*pos2);
	return 0;
}