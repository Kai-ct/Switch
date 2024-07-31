#include <iostream>

using namespace std;

int main() {

  char grade;

  cout << "Enter your grade from your Math Exam: ";
  cin >> grade;

  switch (grade){
    case 'A':
      cout << "Excellent" << endl;
      break;
    case 'B':
      cout << "Well done" << endl;
      break;
    case 'C':
      cout << "You passed" << endl;
      break;
    case 'D': 
      cout << "Lowkey bad" << endl;
      break;
    case 'E':
      cout << "unteachable" << endl;
      break;
  }
  return 0;
}