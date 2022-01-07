//STACK OPERATIONS USING CPP 
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,num;
    stack<int> stack;
    cout<<"Welcome to menu driven program on stack\n";
    
    while(1)
    {
    cout<<"1)Push\n2)Pop\n3)Display\n4)Exit\n";
    cout<<"Enter a choice:";
    cin>>n;
    switch(n)
    {
        case 1:
           cout<<"Enter an element to push:-";
           cin>>num;
           stack.push(num);
           break;
        case 2:
           stack.pop();
           break;
        case 3:
           for(std::stack<int> dump=stack;!dump.empty();dump.pop())
           {
               std::cout<<dump.top()<<" ";
               
           }
           cout<<endl;
           break;
          case 4:
             exit(0);
             break;
          default:
             cout<<"Enter a valid choice:";
    }
    
    }
    return 0;
}
