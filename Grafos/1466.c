#in#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

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
        printf(" %d", root->key);
    }
}

void inOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        inOrder(root->left);
        printf(" %d", root->key);
        inOrder(root->right);
    }
}

void preOrder(struct BinaryTreeNode* root){
    if (root != NULL) {
        printf(" %d", root->key);
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

struct BinaryTreeNode* delete (struct BinaryTreeNode* root, int x){
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
typedef struct {
    struct BinaryTreeNode** data;
    int front, rear, capacity;
} Queue;

Queue* createQueue(int initialSize) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->data = (struct BinaryTreeNode**)malloc(initialSize * sizeof(struct BinaryTreeNode*));
    q->front = q->rear = 0;
    q->capacity = initialSize;
    return q;
}

void enqueue(Queue* q, struct BinaryTreeNode* node) {
    if (q->rear == q->capacity) {
        q->capacity *= 2;
        q->data = (struct BinaryTreeNode**)realloc(q->data, q->capacity * sizeof(struct BinaryTreeNode*));
    }
    q->data[q->rear++] = node;
}

struct TreeNode* dequeue(Queue* q) {
    return q->data[q->front++];
}

int queueSize(Queue* q) {
    return q->rear - q->front;
}

void freeQueue(Queue* q) {
    free(q->data);
    free(q);
}

void levelOrder(struct BinaryTreeNode* root,int tamanho) {
    

    int capacity = 1001;

    Queue* q = createQueue(1001);
    enqueue(q, root);
int c=0;
    while (queueSize(q) > 0) {
       
            struct BinaryTreeNode* node = dequeue(q);
              if(c==tamanho-1) printf("%d",node->key);
             else printf("%d ",node->key);
            if (node->left) enqueue(q, node->left);
            if (node->right) enqueue(q, node->right);
            c++;
        }
        
    freeQueue(q);
}

int main(){
    int n,qt,k=0,p,tamanho;
    scanf("%d\n",&n);
    while(n--){
      tamanho=0;
      struct BinaryTreeNode* root = NULL;
      scanf("%d\n",&qt);
      scanf("%d",&p);
       root = insertNode(root,p);
       tamanho++;
      for(int i=1;i<qt;i++){
              scanf("%d",&p);
         insertNode(root, p);
         tamanho++;
      }
      printf("Case %d:\n",++k);
        levelOrder(root,tamanho);
        printf("\n\n");
    }
    return 0;
}