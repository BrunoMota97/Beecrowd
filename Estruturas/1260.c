#include <stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<stdbool.h>

int nos;
typedef struct tdado{
  char nome[100];
  int quantidade;
}tdado;

struct BinaryTreeNode {
    tdado dado;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode* insertNode(struct BinaryTreeNode* node, tdado value){
    if (!node) {
        node = (struct BinaryTreeNode*)malloc(sizeof(struct BinaryTreeNode));
        node->dado = value;
        node->dado.quantidade++;
        node->left = node->right = NULL;
    }
    else if (strcmp(node->dado.nome, value.nome)>0) {
        node->left = insertNode(node->left, value);
    }
    else if (strcmp(node->dado.nome,value.nome)<0) {
        node->right = insertNode(node->right, value);
    }else{
        node->dado.quantidade++;
    }
    return node;
}

void inOrder(struct BinaryTreeNode* root){
    if (root != NULL) {
        inOrder(root->left);
        printf("%s %.4lf\n", root->dado.nome,(root->dado.quantidade*100.0f)/nos);
        inOrder(root->right);
    }
}

int main() {
 int n;
 char lixo, string[100]={0};
 scanf("%d",&n);
 scanf("%c%[^\n]", &lixo, string);
 while(n--){
   nos=0;
   struct BinaryTreeNode* root = NULL;
   while(true){
     tdado dado = {0};
     scanf("%c%[^\n]", &lixo, string);
     if(strlen(string)==0) break;
     strcpy(dado.nome,string);
     root=insertNode(root,dado);
     nos++;
     for(int i=0;string[i]!='\0';i++) string[i]=0;
   }
   inOrder(root);
   if(n) printf("\n");
   
 }
    return 0;
}