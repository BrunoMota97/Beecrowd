#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int r;
struct BinaryTreeNode {
    char key;
    struct BinaryTreeNode *left, *right;
};

struct BinaryTreeNode* newNodeCreate(char value){
    struct BinaryTreeNode* temp
        = (struct BinaryTreeNode*)malloc(
            sizeof(struct BinaryTreeNode));
    temp->key = value;
    temp->left = temp->right = NULL;
    return temp;
}

struct BinaryTreeNode*
searchNode(struct BinaryTreeNode* root, char target){
    if (root == NULL || root->key == target) {
        return root;
    }
    if (root->key < target) {
        return searchNode(root->right, target);
    }
    return searchNode(root->left, target);
}

struct BinaryTreeNode*
insertNode(struct BinaryTreeNode* node, char value){
    if (node == NULL) {
        return newNodeCreate(value);
    }
    if (value < node->key) {
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
        printf("%c", root->key);
        r=1;
        }else{
          printf(" %c", root->key);
        }
    }
}

void inOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        inOrder(root->left);
        if(r==0){
        printf("%c", root->key);
        r=1;
        }else{
          printf(" %c", root->key);
        }
        inOrder(root->right);
    }
}

void preOrder(struct BinaryTreeNode* root){
    if (root != NULL) {
        if(r==0){
        printf("%c", root->key);
        r=1;
        }else{
          printf(" %c", root->key);
        }
        preOrder(root->left);
        preOrder(root->right);
    }
}

struct BinaryTreeNode* findMin(struct BinaryTreeNode* root)
{
    if (root == NULL) {
        return NULL;
    }
    else if (root->left != NULL) {
        return findMin(root->left);
    }
    return root;
}

struct BinaryTreeNode* delete (struct BinaryTreeNode* root, char x){
    if (root == NULL) return NULL;

    if (x > root->key) {
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
                = findMin(root->right);
            root->key = temp->key;
            root->right = delete (root->right, temp->key);
        }
    }
    return root;
}

int main(){
     
     char comando[20];
     int flag=0;
     struct BinaryTreeNode* root = NULL;
     while(scanf("%[^\n]\n",comando)!=EOF){
        
        if(strcmp(comando,"INFIXA")==0) inOrder(root), r=0,printf("\n");
       else if(strcmp(comando,"PREFIXA")==0) preOrder(root), r=0, printf("\n");
       else if(strcmp(comando,"POSFIXA")==0) postOrder(root),r=0,printf("\n");
       else if(comando[0]=='P' && comando[1]==' '){
         if(searchNode(root,comando[2])==NULL) printf("%c nao existe\n",comando[2]);
         else printf("%c existe\n",comando[2]);
      }else{
         if(flag==0){
           root=insertNode(root,comando[2]);
           flag=1;
         } else{ 
           insertNode(root,comando[2]);
           
         }
      }
     }
   
    return 0;
}