#include <stdio.h>
int main() {
for(int j=0;j<39;j++) printf("-");
printf("\n");
for(int i=0;i<5;i++){
    printf("|");
    for(int j=0;j<37;j++) printf(" ");
    printf("|");
    printf("\n");
}
for(int j=0;j<39;j++) printf("-");
printf("\n");
    return 0;
}