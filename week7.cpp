// In a class room we have discussed the stack operations called push() and pop(). Based on these operations design and implement the solution to identify the balanced and un-balanced expressions.

#include <iostream>
#include<stack>
using namespace std;
bool
isbalanced (string exp)
{
  stack < char >stack;
for (char ch:exp)
    {
      if (ch == '(' || ch == '{' || ch == '[')
	{
	  stack.push (ch);
	}

      if (ch == ')' || ch == '}' || ch == ']')
	{
	  if (stack.empty ())
	    {
	      return false;
	    }

	  char top = stack.top ();
	  stack.pop ();
	  if ((top == '(' && ch != ')') || (top == '{' && ch != '}')
	      || (top == '[' && ch != ']'))
	    {

	      return false;
	    }


	}
    }
  return stack.empty ();

}

int
main ()
{
  string exp;
  cout << "Enter a expression:";
  cin >> exp;
  if (isbalanced (exp))
    {
      cout << "Expression Balanced" << endl;
    }
  else
    {
      cout << "Expression Not Balanced" << endl;
    }
  return 0;
}
