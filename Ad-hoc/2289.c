#include <stdio.h>

unsigned long long int hamming(unsigned long long int n1, unsigned long long int n2){
	unsigned long long int x = n1 ^ n2;
	int bits = 0;
	while (x > 0) {
		bits += x & 1;
		x >>= 1;
	}
	return bits;
}
int main(){
	unsigned long long int x,y;
	while(scanf("%llu %llu\n",&x,&y)){
	  if(x==0 && y==0) break;
	printf("%llu\n", hamming(x, y));
	}
	return 0;
}