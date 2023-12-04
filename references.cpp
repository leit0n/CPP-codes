#include <iostream>
using namespace std;


//reference is an alias for a variavle
string food = "Pizza";

//create a reference variable
string  *ptr = &food;

int main(){
   cout << food << endl;
cout << &food << endl;
cout << ptr << endl;
cout << *ptr << endl;
cout << &ptr << endl;

  return 0;

}