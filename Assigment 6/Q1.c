//Wap a c program to do a binary search tree having the following operations oand fucntionalities 
/*
i) INsert 
ii) Delete 
iii) Traverse 
*/
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
void display(struct node *root){
    if (root==NULL)
    {
        return ;
    }
    display(root->left);
    printf("%d\t",root->val);
    display(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insertVal(root,100); 
    root = insertVal(root,50); 
    root = insertVal(root,60);  
    display(root);  
    return 0;
}