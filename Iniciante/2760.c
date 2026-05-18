#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
 
char a[101],b[101],c[101],i;
setbuf(stdin, NULL);
scanf(" %[^\n]",a);
setbuf(stdin, NULL);
scanf(" %[^\n]",b);
setbuf(stdin, NULL);
scanf(" %[^\n]",c);
printf("%s%s%s\n",a,b,c);
printf("%s%s%s\n",b,c,a);
printf("%s%s%s\n",c,a,b);

for(i=0;a[i]!='\0' && i<10;i++) printf("%c",a[i]);
for(i=0;b[i]!='\0' && i<10;i++) printf("%c",b[i]);
for(i=0;c[i]!='\0' && i<10;i++) printf("%c",c[i]);
printf("\n");
    return 0;
}