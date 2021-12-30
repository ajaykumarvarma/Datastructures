//STACK USING LINKEDLIST

//stack using linkedlist
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
}*tos,*new,*temp;
void push(int value)
{
    new=(struct node*)malloc(sizeof(struct node*));
    new->data=value;
    new->next=NULL;
    if(tos==NULL)
    {
        
        tos=new;
    }
    else
    {
        new->next=tos;
        tos=new;
    }
}
void pop()
{
    
    
    temp=tos;
    printf("Popped element is %d\n",tos->data);
    tos=tos->next;
    temp->next=NULL;
    free(temp);
    
}
void display()
{
    while(tos!=NULL)
    {
        printf("%d\t",tos->data);
        tos=tos->next;
    }
    
}


int main()
{
    int n,k;
    
    while(1)
    {
          printf("\nEnter an option from below list:\n");
          printf("1)To Push element into stack\n2)To Pop element from stack\n3)To Display\n4)To Exit\n");
         scanf("%d",&n);
      switch(n)
      {
          case 1:
          
            printf("Enter an element to push:-");
            scanf("%d",&k);
            push(k);
            break;
         
          case 2:
          
              pop();
              break;
          
          case 3:
              display();
              break;
          
          case 4:
          
              exit(0);
              break;
          
      }
    }
    

    return 0;
}
