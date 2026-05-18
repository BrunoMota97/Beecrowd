#include <stdio.h>
int main() {
    int n;
        int casa = 0, ec = 0,trabalho = 0,nt = 0;
        char str1[6], str2[6];
        scanf("%d\n",&n);
        while (n--) {
            scanf("%s %s", str1, str2);
        	if (str1[0] == 'c' && !ec)	casa++,nt++;
        	else if (str1[0] == 'c' && ec > 0) nt++,ec--;
        	if (str2[0] == 'c' && !nt) trabalho++, ec++;
        	else if (str2[0] == 'c' && nt > 0)ec++,	nt--;
        }
        printf("%d %d\n", casa, trabalho);
    return 0;
}