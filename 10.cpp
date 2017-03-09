#include <iostream> 
using std::cout; 
using std::endl; 
#include <iomanip> 
using std::setw; 
#include <cstdlib> // содержит прототип для функции rand 
using std::rand; 
 
 int main() 
 { 
 // повторить 20 pas 
 for ( int counter = 1; counter <= 20; counter++ )
 { 
 // получить случайное число от 1 до 6 и вывести его 
 cout << setw(20) << ( 1 + rand() % 6 ); 
 
 // если counter делится на 5, начать новую строку вывода 
 if ( counter % 5 == 0 ) 
 cout << endl; 
 } // конец for 

 return 0; // успешное завершение 
 } // конец main 