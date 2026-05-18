#include <stdio.h>

int verifica(int vet[], int cmp[], int tam){

	unsigned short i;
	for (i = 0; i  <  tam; i++)
		if (vet[i] != cmp[i])
			return 1;
	return 0;
}

int main() {
 
int n,tentativas,flag;
while(scanf("%d\n",&n)!=0){
  if(n==0) break;
    int ar[n],vr[n],c=0,tentativas=1,res;
    for(int i=0;i<n;i++) ar[i]=i+1;
    do{
    for(int i=0;i<n;i++){
         scanf("%d",&vr[i]);
    }
    res= verifica(vr, ar, n);
    if(res==1) tentativas++;
    }while(res!=0);
   printf("%d\n",tentativas);
}
return 0;
}