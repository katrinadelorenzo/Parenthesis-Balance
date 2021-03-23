/* 
  The purpose of this program is to test string expressions for their balance of parenthesis using stack implementation.
  Author: Katrina DeLorenzo
  Last Modified: 10/19
  Known bug: none
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;




/*isBalanced: This function takes a string type argument of characters and tests the balance of parenthesis.
@param expression: string argument of characters being tested
@return: true if balanced, if else false
@pre: string argument to be tested.
@post: stack of characters that will be empty if the string is balanced.  
*/
bool isBalanced(string expression) {
  stack <char> e;
  for (int i = 0; i < expression.length(); i++) {
    if (expression.at(i) == '[' || expression.at(i) == '{' || expression.at(i) == '(')
      e.push(expression.at(i));
    else if ( expression.at(i) == ']' || expression.at(i) == '}' || expression.at(i) == ')')
      if (e.empty())
	return false;
      else if (e.top() == '[' || e.top() == '{' || e.top() == '(')
	e.pop();
    

  }
  if (!e.empty())
    return false;
  else
    return true;
}

int main()
{
  bool t1, t2,t3,t4;//truth values for string expressions. match up by number.
  //Expression 1
  string p1( "( ) ( ) ]");
  //Expression 2
  string p2("{ [ ( ) ( } ) ");
  //Expression 3
  string p3("[ () ]{ }");
  //Expression 4
  string p4("{ [ ( )( ) ] { } }");

  
  cout << "EXPRESSION: ( ) ( ) ] " << endl;
  cout << "TESTING FOR BALANCE..." << endl;
  if (isBalanced(p1) == true)
    cout << "BALANCED" << endl;
  else if (isBalanced(p1) == false)
    cout << "UNBALANCED" << endl;
  cout << endl;
  cout << endl;
  
  cout << "EXPRESSION:{ [ ( ) ( } ) " << endl;
  cout << "TESTING FOR BALANCE..." << endl;
  if (isBalanced(p2) == true)
    cout << "BALANCED" << endl;
  else if (isBalanced(p2) == false)
    cout << "UNBALANCED" << endl;
  cout << endl;
  cout << endl;
  
  cout << "EXPRESSION:[ () ]{ } " << endl;
  cout << "TESTING FOR BALANCE..." << endl;
  if (isBalanced(p3) == true)
    cout << "BALANCED" << endl;
  else if (isBalanced(p3) == false)
    cout << "UNBALANCED" << endl;
  cout << endl;
  cout << endl;
  cout << "EXPRESSION:{ [ ( )( ) ] { } } " << endl;
  cout << "TESTING FOR BALANCE..." << endl;
  if (isBalanced(p4) == true)
    cout << "BALANCED" << endl;
  else if (isBalanced(p4) == false)
    cout << "UNBALANCED" << endl;
 
}
