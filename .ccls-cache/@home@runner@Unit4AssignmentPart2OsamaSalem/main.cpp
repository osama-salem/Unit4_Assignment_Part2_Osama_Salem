#include <iostream>
#include <iomanip>
#include "Input_Validation_Extended-1.h" //Requests user's input and vaildates it
using namespace std;

int main() {
  
  int num;

  while (num != -1){

    cout << "\n";
    cout <<"Ordinal Number Generator in C++";
    cout << "\n\n";

    cout << "Program will continue to repeat Hello Ordinals until user enters -1) :\n";
    num = validateInt(num);

    for (int i = 1; i <= num; i++){
      
      if ((i % 100) == 11 || ((i % 100) == 12) || ((i % 100) == 13)){
         cout << i << "th hello\n";
      }
      else if ((i % 10) == 1) {
        cout << i << "st hello\n";
      }
      else if ((i % 10) == 2) {
        cout << i << "nd hello\n";
      }
      else if ((i % 10) == 3) {
        cout << i << "rd hello\n";
      }
      else {
        cout << i << "th hello\n";
      }
    }
  }
  return 0;
}