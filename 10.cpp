#include <iostream> 
using std::cout; 
using std::endl; 
#include <iomanip> 
using std::setw; 
#include <cstdlib> // �������� �������� ��� ������� rand 
using std::rand; 
 
 int main() 
 { 
 // ��������� 20 pas 
 for ( int counter = 1; counter <= 20; counter++ )
 { 
 // �������� ��������� ����� �� 1 �� 6 � ������� ��� 
 cout << setw(20) << ( 1 + rand() % 6 ); 
 
 // ���� counter ������� �� 5, ������ ����� ������ ������ 
 if ( counter % 5 == 0 ) 
 cout << endl; 
 } // ����� for 

 return 0; // �������� ���������� 
 } // ����� main 