#include <stdio.h>
 
int main() {
 
int n,m;
scanf("%d %d\n",&n,&m);
int ar[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&ar[i][j]);
    }
    scanf("\n");
}
int linhas[n],colunas[m],linha,coluna,maxl=-1,maxc=-1;
for(int i=0;i<n;i++){
  linha=0;
    for(int j=0;j<m;j++){
        linha+=ar[i][j];
    }
    linhas[i]=linha;
    if(linhas[i]>maxl) maxl=linhas[i];
}

for(int j=0;j<m;j++){
  coluna=0;
    for(int i=0;i<n;i++){
        coluna+=ar[i][j];
    }
    colunas[j]=coluna;
     if(colunas[j]>maxc) maxc=colunas[j];
}

if(maxl>maxc) printf("%d\n",maxl);
else printf("%d\n",maxc);
    return 0;
}