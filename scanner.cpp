#include <iostream>										//#include <iostream>
using namespace std;									//	int string_length(char *string)
														//		{ 
void show_string(char *string)							//									
{														//	int length = 0; 
														//	while (*string != '\0')
while (*string!='\0')	 /*while(*string) | \0-n kam*/	//	 {
		{			/*nuyn NULL-@ ASCII-um = e 0-i */	//		length++;
      cout << *string;									//		string++;
      string++;											//
    } 													//   } 
}														//		return(length);  
void main()												//	}			 
{														//
														//		void main()
														//		{
	show_string( "Start learning C++");}				//
														//		   char title[] = "Учимся программировать на языке C++"; 
														//	   cout << title << " содержит " << string_length(title) << " символов"; 
														//		}
