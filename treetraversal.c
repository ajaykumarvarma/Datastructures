#include<stdio.h>
#include<stdlib.h>
struct node //main node creation initial
  {
int num;
struct node *left;
struct node *right;
};
struct node *create() //new node for flow tree
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->left=NULL;
temp->right=NULL;
printf("Enter value:");
scanf("%d",&temp->num);
return temp;
}
void main() //main fucntion
{
struct node *v1,*v2,*v3,*v4,*v5,*v6,*v7;
v1=create();
v2=create();
v3=create();
v4=create();
v5=create();
v6=create();
v7=create();
v1->left=v2;
v1->right=v3;
v2->left=v4;
v2->right=v5;
v3->left=v6;
v3->right=v7;
printf("\nInorder:");
inorder(v1);
printf("\nPreorder:");
preorder(v1);
printf("\nPostorder:");
postorder(v1);
getch();
}

void inorder(struct node *T) //function for inorder
{
if(T!=NULL)
{
inorder(T->left);
printf("%d ",T->num);
inorder(T->right);
}
}
void preorder(struct node *T) //function for preorder
{

if(T!=NULL)
    {
        printf("%d ",T->num);
        preorder(T->left);
        preorder(T->right);
    }	

}
void postorder(struct node *T) //function for postorder
{
if(T!=NULL)
{
postorder(T->left);
postorder(T->right);
printf("%d ",T->num);
}
}

