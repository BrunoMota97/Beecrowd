#include <stdio.h>
 
int main() {
 
char text[501];
scanf("%[^\n]",text);
if(strlen(text)<=140) printf("TWEET\n");
else printf("MUTE\n");
    return 0;
}