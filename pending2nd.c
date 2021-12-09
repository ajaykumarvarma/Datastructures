#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void push(int );
void pop();
void palindrome(char );
int tos=0;
int max_size=10;
char a[10];
char b[10];
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
        b[tos]=a[tos];
        tos--;
        
        
    }
    
}
void palindrome(char x)

{
  
  
    int i,j;
    if(tos<=0)
    {
        printf("Stack overflow");
    }
    for(i=1;i<=tos;i++)
    {
    printf("%s ",a[tos]);
    }
    for(j=1;i<=tos;j++)
    {
    printf("%s ",b[tos]);
    }
    for(i=1;i<=tos;i++)
    {
        for(j=1;j<=tos;j++)
        {
            if (a[tos]=b[tos])
            {
                printf("%s is a palindrome",x);
            }
            else
            {
                printf("%s is a not palindrome",x);
            }
        }
    }
}
int main()
{
    int dec,x;
    while(1)
    {
        printf("\nSelect any one option from below options:\n");
        printf("1)To chk palindrome\n2)Exit\n");
        scanf("%d",&dec);
        switch(dec)
        {
            case 1:
            {
                printf("Enter a letter to chk palindrome:");
                scanf("%s",x);
                push(x);
                pop();
                palindrome(x);
                break;
            }
            case 2:
            {
                exit(0);
                break;
            }
        }
        
    
   }
   return 0;
}
