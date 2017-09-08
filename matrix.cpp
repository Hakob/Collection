#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream> 

using namespace std;

void Init(int **,int ,int );
void Add(int **, int **, int, int);
void Print(int **, int, int);
void Multiply(int**, int**, int, int, int);
void PrintDiag(int ** ,int , int );
void Swap1(int**,int,int);
void Swap2(int ** ,int ,int );

int main(int argc, char** argv)
{
	ifstream file;
	file.open(argv[1], ifstream::in);
	
	if (file.is_open())
	{
    	cout << "Operation successfully performed\n";
	}
	else
	{
		cout << "Error opening file";
	}



	int r,c;
	file>>r;
	file>>c;

	int a[r][c];

	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			file>>a[i][j];


for(int i=0;i<r;i++)
    {
	cout << "|";
        for(int k =0;k<c;k++)
        {
            cout<<a[i][k]<<' ';
        }
        cout<<"|"<<endl;
    }
	cout<<endl;
			


	file.close();	

	char p[10];

	file.read(p,10);
	
	for(int i=0;i<10;i++)
		printf("%c",*(p+i));

	file.close();

    	srand(time(NULL));
    	int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	int **matrixOne = new int*[r1];
	int **matrixTwo = new int*[r2];

	Init(matrixOne,r1,c1);
    	Init(matrixTwo,r2,c2);

	Print(matrixOne,r1,c1);
	Print(matrixTwo,r2,c2);
	Swap1(matrixTwo,r2,c2);
	Print(matrixTwo,r2,c2);
	Swap2(matrixTwo,r2,c2);
	Print(matrixTwo,r2,c2);

	if(r1==c1)
		PrintDiag(matrixOne,r1,c1);
	else
		cout<<"Row != Column" << endl;


	if(r1==r2 && c1==c2)
		Add(matrixOne, matrixTwo,r1,c1);
	else
		cout<<"Chapery hamapatasxan chen" << endl;

	if(c1==r2)
		Multiply(matrixOne, matrixTwo, r1, c1, c2); // c1 = r2
	else
		cout<<"Chapery hamapatasxan chen" << endl;	
  
	
	return 0;
}

