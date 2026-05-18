#include <stdio.h>
#include <stdlib.h>
#include<string.h>
  short indice;
struct BinaryTreeNode {
    char key;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode* newNodeCreate(char value){
    struct BinaryTreeNode* temp = (struct BinaryTreeNode*)malloc( sizeof(struct BinaryTreeNode));
    temp->key = value;
    temp->left = temp->right = NULL;
    return temp;
}

int searchNode(char *str,int start,int end, char letra){
   int i;
	for (i = start; i <= end; ++i)
		if (str[i] == letra)	return i;

	return -1;
}

struct BinaryTreeNode* arvore(char *inorder, char *preorder, int start, int end){
  int infixaIndice;
	if (start> end)	return NULL;

	struct BinaryTreeNode* root = newNodeCreate(preorder[indice++]);
	if (start == end)	return root;

	infixaIndice = searchNode(inorder, start, end, root->key);
	root->left = arvore(inorder, preorder, start, infixaIndice - 1);
	root->right = arvore(inorder, preorder, infixaIndice + 1, end);
	return root;
}

void postOrder(struct BinaryTreeNode* root){
  if(root==NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        printf("%c", root->key);
}

int main(){
    int n,qt;
    char inorder[1001],preorder[1001];

    while(scanf("%s %s\n",preorder,inorder)!=EOF){
      indice=0;
      struct BinaryTreeNode* root = arvore(inorder,preorder,0,strlen(inorder)-1);
     postOrder(root);
     printf("\n");
    }
    return 0;
}