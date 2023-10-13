int main()

{
    int a = 1;
    int b = 2;

    cout << a+b << endl;     //imprime no ecrã
    //cin >> numero;              //lê no teclado
    //cout << "o numero que digitaste foi: << numero << endl"
    return 0;
}



// area do circulo é PI
// PI * raio * raio
// calcla a area do circlo com raio 10
#include <iostream>

using namespace std;

int O_MEU_NUMERO = 10;                       //nº inteiro
double O_MEU_NUMERO = 10.5;                  //nº reais
char O_MEU_CARACTER = 'a';                   //caratceres
string O_MEU_TEXTO = "isto é um texto";      //texto
bool O_MEU_BOOLEANO = true;                 //booleamento

int main() 
{
   cout << ("Hello \\ World!\t");
   cout << ("I'm a C++ program");
   cout << O_MEU_NUMERO; 
   cout <<endl;
 
   return 0;
}

//int representa nº inteuros
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


#include <iostream>

using namespace std;


int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a-=6;
    cout << resultado  << endl;
    return 0;
}


