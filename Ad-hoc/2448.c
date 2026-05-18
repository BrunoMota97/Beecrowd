#include <stdio.h>
#include <stdlib.h>

#define MAX 45100
int casas[MAX];

int binarySearch(int arr[], int n, int x) {
    int low = 1,high = n;
    while (low <= high) {
        int mid = (low +high) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main (){
	int tmp, i, x, n, m,tempo=0,z=1;

	scanf("%d %d\n", &n, &m);
	for (i = 1; i  <=n; ++i)	scanf("%d", &casas[i]);

	for (i = 1; i  <=m; ++i){
		scanf("%d", &tmp);
		x = binarySearch(casas, n, tmp);
		tempo += abs(x - z);
		z = x;
	}
	printf("%d\n", tempo);
}