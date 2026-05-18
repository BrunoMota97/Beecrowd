#include <string.h> 

#define MAX_SIZE 100 

int size = 0; 
char keys[MAX_SIZE][100]; 
char values[MAX_SIZE][100]; 

int getIndex(char key[]) { 
	for (int i = 0; i < size; i++) { 
		if (strcmp(keys[i], key) == 0) { 
			return i; 
		} 
	} 
	return -1; 
} 

void insert(char key[], char value[]) { 
	int index = getIndex(key); 
	if (index == -1) { 
		strcpy(keys[size], key); 
		strcpy(values[size],value); 
		size++; 
	} 
	else strcpy(values[index],value); 
	
} 
int main() { 
  int l,n;
  char s[30],p[30],r[30];
  scanf("%d %d\n",&l,&n);
  for(int i=0;i<l;i++){
    scanf("%s %s\n",s,p);
    insert(s, p); 
  }
  for(int i=0;i<n;i++){
    scanf("%s\n",r);
    
    if(getIndex(r)!=-1) printf("%s\n",values[getIndex(r)]);
    else if((r[strlen(r)-2]!='a' && r[strlen(r)-2]!='e' && r[strlen(r)-2]!='i' &&
    r[strlen(r)-2]!='o' && r[strlen(r)-2]!='u') && r[strlen(r)-1]=='y'){
       for(int i=0;i<strlen(r)-1;i++) printf("%c",r[i]);
       printf("ies\n");
    } 
    else if(r[strlen(r)-1]=='o' || (r[strlen(r)-1]=='s') || (r[strlen(r)-2]=='c' && r[strlen(r)-1]=='h')
    || (r[strlen(r)-2]=='s' && r[strlen(r)-1]=='h') || r[strlen(r)-1]=='x'){
      printf("%ses\n",r);
    }
    else printf("%ss\n",r);
  }

	return 0; 
}
