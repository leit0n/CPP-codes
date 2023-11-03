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

#include <iostream>

using namespace std;

int a=10, b=12, c=9;



int main(){
    if ( a < b || b < c){
        cout << "é verdade" << endl;
    }else{
        cout << "é mentira" << endl;
    }
    return 0;
}

#include <iostream>
#include <cmath>
#include <as_minhas_contas.h>
using namespace std;



int f(int x);
{
    int resp = 2*x;
    return resp;
}




#include <iostream>

using namespace std;

int a=10, b=12, c=9;



int main(){
    if ( a < b ){
        cout << "é verdade" << endl;
    }else if (a<c){
        cout << "é verdade" << endl;
    }else{
        cout << "é mentira" << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
  
  int num;
  cout << "digite um numero";
  cin << num;

  if (num >=0){
  cout << "Positivo" << endl;

 }else{
    if (num <=0)
    cout <<"Negativo" << endl;
 }
 return 0;
}

#include <iostream>

using namespace std;

int main(){
  
  int num;
  cout << "digite um numero: ";
  cin >> num;

  switch (num)
  {
    case 1:
    cout << "o unmero é 1" << endl;
    break;
case 2:
    cout << "o numero é 2" << endl;
    break;
default:
    cout << "o numero não é 1 nem 2" << endl;
    break;
  }



return 0;

}
#include <iostream>
using namespace std;
int numSorte = 22;
int main(){

int num=0;
while(numSorte != num){
     cout << "Qual o número da sorte? ";
     cin >> num;
     if(numSorte > num){ 
     cout << "O número da sorte é maior do que: " << num << endl;
     }else if(numSorte < num){
     cout << "O número da sorte é menor do que: " << num << endl;
     }else{
     cout << "Parabéns, você acertou!" << endl;
     }

}
cout << "Acabou o jogo!" << endl;
return 0;
}             


#include <iostream>

using namespace std;
 
 int main(){

    for (int n=0; n<=1000000; n++){
        cout << n << endl;
    }

    return 0;
 }
 #include <iostream>

using namespace std;
 
int main(){

   string cars[] = {"Volco", "BMW"; "Ford", "Mazda", "Tesla"};
   cout << cars[2] << "\n";
   cars [2] = "Opel";
   cout << cars[2] << "\n";

   return 0;
}
#include <iostream>

using namespace std;
 
 int main(){
    int test [4] = { 7,8,9,7};
    for (int i=0; i<4; i++){
        cout << test[i] << endl;
    }
    
    
    
    return 0;
 }
 

 #include <iostream>
using namespace std;

int myArray [] = { 1, 2 , 3, 4, 5 };


int main(){
    
    cout << myArray[4] << endl;
    cout << sizeof(myArray)/4 << endl;

    return 0;
}





#include <iostream>
using namespace std;

int myArray [] = { 1, 2 , 3, 4, 5 };

string letras [2] [4];  //array bidimencional

string letras2[2] [4] = {
    {"A", "B", "C", "D"},
    {"E", "F", "G", "H"}
};


int main(){
    
    for (int i =0; i < 2; i++){
     for (int j =0; i < 4; j++){
        cout << letras2[i][j] << endl;
        }
    }



    return 0;
}

