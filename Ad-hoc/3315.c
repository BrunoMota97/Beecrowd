#include <stdio.h>
 
int main() {

int m[4][7],max=-1; 

for(int i=0;i<4;i++){
    int soma=0;
    for(int j=0;j<7;j++){
        scanf("%d",&m[i][j]);
        soma+=m[i][j];
    }
    if(soma>max) max=soma;
}


printf("%d = ",max);
binario(max);

    return 0;
}

void binario(int n) { 
	int binaryNum[1000]; 
	int i = 0; 
	while (n > 0) { 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	for (int j = i - 1; j >= 0; j--) 
		printf("%d", binaryNum[j]); 
		printf("\n");
} 