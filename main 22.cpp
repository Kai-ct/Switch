#include <iostream>

using namespace std;

int main() {

  char oper; //operator

  cout << "Enter an operator ( +, -, *, / ): ";
  cin >> oper;

  double num1, num2; //numbers
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  switch(oper){
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    case '/':
      if(num2 != 0){
        cout << num1 << " / " << num2 << " = " << num1 / num2;
      }else{
        cout << "cannot divide by zero";
      }
       break;
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
  }

  return 0;
}