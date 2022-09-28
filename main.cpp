#include <iostream>
#include <iomanip>
#include "Input_Validation_Extended-1.h" //Requests user's input and vaildates it
using namespace std;

int main() {

  //Declare Variables
  int num;

  //Process
  /*while loop under the condition that num does not equal -1,
  if num does equal -1, then the prgram will end*/
  while (num != -1){

    cout << "\n";
    cout <<"Ordinal Number Generator in C++";
    cout << "\n\n";
    
    /*Request user's input and vaildate it
    NOTE: if 0 or negative integer is entered, will not not show error but will 
    simply request user's input again
    */
    cout << "Program will continue to repeat Hello Ordinals (until user enters -1) :\n";
    num = validateInt(num);
    //for loop to test input for which ordinal to use
    for (int i = 1; i <= num; i++){
      //Special Cases for 11, 12, 13
      //Output
      if ((i % 100) == 11 || ((i % 100) == 12) || ((i % 100) == 13)){
         cout << i << "th hello\n";
      }
      //Test for 1 in 1s place
      else if ((i % 10) == 1) {
        cout << i << "st hello\n";
      }
      //Test for 2 in 1s place
      else if ((i % 10) == 2) {
        cout << i << "nd hello\n";
      }
      //Test for 3 in 1s place
      else if ((i % 10) == 3) {
        cout << i << "rd hello\n";
      }
      //for 4-9 and 0 in the 1's (excluding special cases)
      else {
        cout << i << "th hello\n";
      }
    }
  }
  return 0;
}