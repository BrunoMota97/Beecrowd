#include <stdio.h> 
#include <string.h> 

int main() { 
	int n,c,d,quantidade;
	char fruta[150][50],fruta1[50];
	double preco[120];
	scanf("%d\n",&n);
	while(n--){
	  scanf("%d\n",&c);
	  for(int i=0;i<c;i++){
	    scanf("%s %lf\n",fruta[i],&preco[i]);
	  }
	  scanf("%d\n",&d);
	  double soma=0;
	  for(int i=0;i<d;i++){
	    scanf("%s %d\n",fruta1,&quantidade);
	    for(int j=0;j<c;j++){
	      if(strcmp(fruta1,fruta[j])==0){
		     soma+=(quantidade*preco[j]);
		     break;
	   	}
	    }
	  }
	printf("R$ %.2lf\n",soma);
}
	return 0; 
}
