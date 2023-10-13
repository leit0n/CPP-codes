#include <iostream>

using namespace std;


// area do circulo é PI
// PI * raio * raio
// calcla a area do circlo com raio 10
// área de um círculo é dada pela seguinte fórmula a = πr2

int main()

{
const double PI = 3,1415;
double raio;

cout << "qual o valor do raio?\n";
cin >> raio;
double area = PI * raio * raio;
cout << area << endl;
return 0;
}



