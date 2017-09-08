#ifndef HEADERS
#define HEADERS
#include <iostream>
#include <stdlib.h>
#define RAND_CONST 10
#endif
using namespace std;

void Print(int ** temp,int r, int c)
{
    for(int i=0;i<r;i++)
    {
        cout << "|";
        for(int k =0;k<c;k++)
        {
            cout<<temp[i][k]<<' ';
        }
        cout<<"|"<<endl;
    }
    cout<<endl;
}


void Init(int** matrix,int r, int c)
{
	for(int i=0;i<r;i++)
	{
		matrix[i] = new int[c];
        for(int k =0;k<c;k++)
        {
            matrix[i][k] = rand()%RAND_CONST;
        }
    }
}


void Add(int** matrixOne,int** matrixTwo, int r, int c)
{
	int** matrixSum = new int* [r];
    for(int i=0;i<r;i++)
    {	   			
        matrixSum[i] = new int[c];
        for(int j = 0; j < c; j++) {
            matrixSum[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    }
	Print(matrixSum,r,c);
}


void Multiply(int** matrixOne,int** matrixTwo, int r1, int c1_r2, int c2)
{
	int **matrixMul = new int* [r1];

	for(int i = 0; i < r1; i++) {
		matrixMul[j] = new int[c2];
		for(int j = 0;j < c2; j++)
			for(int k = 0; k < c1_r2; k++)
				matrixMul[i][j]+= matrixOne[i][k]*matrixTwo[k][j];
    }
	Print(matrixMul,r1,c2);
}



void PrintDiag(int ** temp,int r, int c)

{                 

for(int i=0;i<r;i++)
    {
	cout << "|";
        for(int k = 0; k < c; k++)
        {
			if(k<i)
				cout << "  ";

			else
            	cout<<temp[i][k] << ' ';

        }
        cout<<"|"<<endl;
   }
	cout<<endl;
}

void Swap1(int **matrix,int r,int c)
{
		int temp;

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(j<i)
			{
				temp =matrix[i][j] ;
				matrix[i][j] =matrix[j][i];
				matrix[j][i] = temp;
			}
					
		}
	}	
}

void Swap2(int **matrix,int r,int c)
{
		int temp;

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i+j<r+c-i-j-2)
			{
				temp = matrix[i][j] ;
				matrix[i][j] = matrix[r-i-1][c-j-1];
				matrix[r-i-1][c-j-1] = temp;
			}
					
		}
	}	
}






