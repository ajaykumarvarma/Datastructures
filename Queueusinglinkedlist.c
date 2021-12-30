//Queue using linkedlist
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
}*front,*rear,*new,*temp;
void insert(int value)
{
    new=(struct node*)malloc(sizeof(struct node*));
    new->data=value;
    new->next=NULL;
    if(rear==front && front==NULL)
    {
        front=new;
        rear=new;
        
    }
    else
    {
        rear->next=new;
        rear=new;
    }
}
void delete()
{
    
    
    if(front==NULL && rear==NULL)
    {
        printf("Queue Empty");
    }
    else{
        temp=front;
    printf("Deleted element is %d\n",front->data);
    front=front->next;
    temp->next=NULL;
    free(temp);
    }
    
}
void display()
{
    while(front!=NULL)
    {
        printf("%d\t",front->data);
        front=front->next;
    }
    
}


int main()
{
    int n,k;
    
    while(1)
    {
          printf("\nEnter an option from below list:\n");
          printf("1)To Insert element into Queue\n2)To Delete element from Queue\n3)To Display\n4)To Exit\n");
         scanf("%d",&n);
      switch(n)
      {
          case 1:
          
            printf("Enter an element to Insert:-");
            scanf("%d",&k);
            insert(k);
            break;
         
          case 2:
          
              delete();
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
