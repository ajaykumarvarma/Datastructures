#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void push(int );
void pop();
int tos=0;
int max_size=5;
int a[5];
void push(int x)
{
    
    if(tos>max_size)
    {
        printf("Stack Overflow");
    }
    else
    {
     
     tos++;
     a[tos]=x;
    }
}
void pop()
{
    int x;
    if (tos<=0)
    {
        printf("Stack Empty");
        
    }
    else
    {
        
        x=a[tos];
        tos--;
        
    }
    
}
void display()
{
    int i;
    if(tos<=0)
    {
        printf("Stack overflow");
    }
    for(i=1;i<=tos;i++)
    {
    printf("%d ",a[i]);
    }
}
int main()
{
    int dec,x; 
    
    
    
    while(1)
    {
        printf("\nSelect any one option from below options:\n");
        printf("1)Add Element to stack\n2)Delete an Element\n3)Display an Element\n4)exit\n");
        scanf("%d",&dec);
        switch(dec)
        {
            case 1:
            {
               printf("Enter an element to push:");
               scanf("%d",&x);   
               push(x);
               break;
            }
            case 2:
            {   
                
                pop();
                
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
