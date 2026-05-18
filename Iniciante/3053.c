#include <stdio.h>

int main() {
    int n, v;
    char c;
    scanf("%d %c", &n, &c);
    for(int i=1;i<=n;i++){
        scanf("%d", &v);
        if (v == 1 && (c == 'A' || c == 'B'))
            c = (c == 'A'? 'B' : 'A');
        else if (v == 2 && (c == 'B' || c == 'C'))
            c = (c == 'B'? 'C' : 'B');
        else if (v == 3 && (c == 'A' || c == 'C'))
            c = (c == 'C'? 'A' : 'C');
    }
    printf("%c\n", c);
    return 0;
}