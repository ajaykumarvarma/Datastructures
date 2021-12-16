#task2

Q1:-We have discussed Queue operations called insert() and delete() in the class. 
Also illustrated with examples. Design and implement menu driven C program with 4 operations. 
(1) Add element to Queue (2) Delete element from Queue (3) Traverse elements and (4) Exit. 
Write all possible examples supported by relevant test cases. 

  
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void insert(int );
void delete();
int front=0;
int rear=0;
int max_size=10;
int a[10];
void insert(int x)
{
    
    if(rear>max_size)
    {
        printf("Queue Overflow");
    }
    else
    {
     
     rear++;
     a[rear]=x;
    }
}
void delete()
{
    int x;
    if (front==rear || rear==0)
    {
        printf("Queue Empty");
        
    }
    else
    {
        front++;
        x=a[front];
        printf("Deleted element is:%d",x);
        a[front]='\0';
        free(a[x]);
       
        
    }
    
}
void display()
{
    int i;
    if(rear<=0)
    {
        printf("Queue empty");
    }
    else{
    for(i=1;i<=rear;i++)
    {
    printf("%d ",a[i]);
    }
}
}
int main()
{
    int dec,x; 
    
    
    
    while(1)
    {
        printf("\n\t\t\tWELCOME TO AJAY MENU DRIVEN PROGRAM\t\t\t");
        printf("\nSelect any one option from below options:\n");
        printf("1)insert Element to queue\n2)Delete an Element\n3)Display an Element\n4)exit\n");
        scanf("%d",&dec);
        switch(dec)
        {
            case 1:
            {
               printf("Enter an element to Insert:");
               scanf("%d",&x);   
               insert(x);
               break;
            }
            case 2:
            {   
                
                delete();
                
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
        }
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------
  
prob2


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void push(int );
void pop();
int tos = 0;
char arr[10] ;
int arr[10];
int max_size=10;
void push(int x)

{
    if (tos>=max_size)
    {
        printf("Stack Overflow");
    }
    else
    {
        tos++;
        arr[tos] = x;
    }
}
void pop()
{
    int x;
     if(tos<=0)
     {
        printf("Stack empty");
     }
    else
    {
        x = arr[tos];
        tos--;
       
    }
}


int main()
{
    char word[10];
    int ans;
    printf("Enter a word:")
    scanf("%s", word);
    int length = strlen(word);
    for(int i=0;i<length;i++)
    {
        if(a[i]=="+" || a[i]=="-" || a[i] == "*" || a[i]=="/")
        {
            p1=pop();
            p2=pop();
        }
    }
    
    
    


    return 0;
}
