#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int r;
struct BinaryTreeNode {
    int key;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode* newNodeCreate(int value){
    struct BinaryTreeNode* temp
        = (struct BinaryTreeNode*)malloc(
            sizeof(struct BinaryTreeNode));
    temp->key = value;
    temp->left = temp->right = NULL;
    return temp;
}

struct BinaryTreeNode*
searchNode(struct BinaryTreeNode* root, int target){
    if (root == NULL || root->key == target) {
        return root;
    }
    if (root->key < target) {
        return searchNode(root->right, target);
    }
    return searchNode(root->left, target);
}

struct BinaryTreeNode*
insertNode(struct BinaryTreeNode* node, int value){
    if (!node) {
        return newNodeCreate(value);
    }
    else if (value < node->key) {
        node->left = insertNode(node->left, value);
    }
    else if (value > node->key) {
        node->right = insertNode(node->right, value);
    }
    return node;
}

void postOrder(struct BinaryTreeNode* root){
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        if(r==0){
        printf("%d", root->key);
        r=1;
        }else{
          printf(" %d", root->key);
        }
    }
}

void inOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        inOrder(root->left);
        if(r==0){
        printf("%d", root->key);
        r=1;
        }else{
          printf(" %d", root->key);
        }
        inOrder(root->right);
    }
}

void preOrder(struct BinaryTreeNode* root){
    if (root != NULL) {
        if(r==0){
        printf("%d", root->key);
        r=1;
        }else{
          printf(" %d", root->key);
        }
        preOrder(root->left);
        preOrder(root->right);
    }
}


struct BinaryTreeNode* findMax(struct BinaryTreeNode* root)
{
    if (!root)  return NULL;
    else if (!root->right)
        return root;
    else return findMax(root->right);
}

struct BinaryTreeNode* delete (struct BinaryTreeNode* root, int x){
    if (root == NULL) return NULL;

    else if (x > root->key) {
        root->right = delete (root->right, x);
    }
    else if (x < root->key) {
        root->left = delete (root->left, x);
    }
    else {
      if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        else if (root->left == NULL
                 || root->right == NULL) {
            struct BinaryTreeNode* temp;
            if (root->left == NULL) {
                temp = root->right;
            }
            else {
                temp = root->left;
            }
            free(root);
            return temp;
        }
        else {
            struct BinaryTreeNode* temp
                = findMax(root->left);
            root->key = temp->key;
            root->left = delete (root->left, temp->key);
        }
    }
    return root;
}

int main(){
     
     char comando[20];
     int flag=0;
     struct BinaryTreeNode* root = NULL;
     while(scanf("%[^\n]\n",comando)!=EOF){
        int soma=0;
         for(int i=strlen(comando)-1,mult=1;i>=2;i--,mult*=10){
           soma+=(comando[i]-'0')*mult;
         }
        if(strcmp(comando,"INFIXA")==0) inOrder(root), r=0,printf("\n");
       else if(strcmp(comando,"PREFIXA")==0) preOrder(root), r=0, printf("\n");
       else if(strcmp(comando,"POSFIXA")==0) postOrder(root),r=0,printf("\n");
       else if(comando[0]=='P' && comando[1]==' '){
         if(searchNode(root,soma)==NULL) printf("%d nao existe\n",soma);
         else printf("%d existe\n",soma);
       }else if(comando[0]=='R' && comando[1]==' '){
           root=delete(root,soma);
      }else{
           root=insertNode(root,soma);
         }
      }
    return 0;
}