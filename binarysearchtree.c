#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
    
};
struct node *addnewnode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct node *insertelement(struct node *node, int data)
{
    if (node == NULL)
    {
        return addnewnode(data);
    }

    if (data < node->data)
    {
        node->left = insertelement(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insertelement(node->right, data);
    }

    return node;
}
void inorder(struct node *root) 
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root) 
{
    if (root != NULL)
    {
        inorder(root->left);
        inorder(root->right);
        printf("%d \n", root->data);
    }
}
void preorder(struct node *root) 
{
    if (root != NULL)
    {
        printf("%d \n", root->data);
        inorder(root->left);
        inorder(root->right);
        
    }
}

struct node *minimumvalue(struct node *node){

    struct node *currentvalue = node;

    while (currentvalue && currentvalue->left != NULL){
    
        currentvalue = currentvalue->left;
    }

    return currentvalue;
}
struct node *deletenode(struct node *root, int data)
{
    if (root == NULL){
        return root;
    }

    if (data < root->data){
        root->left = deletenode(root->left, data);
    }

    else if (data > root->data){
        root->right = deletenode(root->right, data);
    }

    else{
    
        if (root->left == NULL){
        
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL){
        
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node *temp = minimumvalue(root->right);
        root->data = temp->data;
        root->right = deletenode(root->right, temp->data);
    }
    return root;
}

int main()
{
    
    struct node *root = NULL;
    root = insertelement(root, 50);
    insertelement(root, 10);
    insertelement(root, 90);
    insertelement(root, 30);
    insertelement(root, 40);
    insertelement(root, 20);
    insertelement(root, 100);

    
    printf("To Delete 20:\n");
    root = deletenode(root, 20);
    printf("inorder traversal of the modified tree:\n");
    inorder(root);
    printf("Pre order is:\n");
    preorder(root);
    printf("Post order is:\n");
    postorder(root);

    

    return 0;
}
