//Wap a c program to traverse a binary search tree 
/*
i) in order traveral 
ii) pre order traveral
iii) post order traversal */
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *left;
    struct node *right; // INitialtes the tree
};
struct node *newNode(int x)
{
    struct node *newNode = malloc(sizeof(struct node)); //Creates a new dynamic node with the required value and no leaves
    newNode->val=x;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct node *insertVal(struct node *root,int x)  
{
    if(root==NULL){
        return newNode(x); //If traversal reachers NULL returns newnode or if tree is empty then root= newnode
    }
    if(root->val <x){
        root->right=insertVal(root->right,x); // If the element is greated than val then go to right.and again call insert val function and again check for bigger or smaller.
    }
    else if (root->val>x)
    {
        root->left=insertVal(root->left,x); //Vice versa go for left.
    }
    return root;
};
void inOrder(struct node *root){
    if (root==NULL)
    {
        return ;
    }
    inOrder(root->left);
    printf("%d\t",root->val);
    inOrder(root->right);
}
void preOrder(struct node *root){
    if (root==NULL)
    {
        return ;
    }
    printf("%d\t",root->val);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node *root){
    if (root==NULL)
    {
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d\t",root->val);
}
int main()
{
    struct node *root = NULL;
    root = insertVal(root,120); 
    root = insertVal(root,34); 
    root = insertVal(root,56); 
    inOrder(root); 
    preOrder(root);
    postOrder(root); 
    return 0;
}