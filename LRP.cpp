#LRC Check
#include<iostream>
#include<stdlib.h>
using namespace std;

void decToBin( char charAr , int numberOfchar ,int binArr[][8] , int row )
{
	int num = int(charAr) ;
	int index = 7 ;
    while (index >= 0 ) 
	{
        binArr[row][index] = num % 2 ;
        num = num / 2 ;
        index-- ;
    }
}

int main()
{
	int numberOfchar ;
	
	cin>>numberOfchar ;
	
	char charArray[numberOfchar] ;
	
	for( int i = 0 ; i<numberOfchar ; i++ )
		cin>>charArray[i] ;
	
	int binOfchar[numberOfchar][8] ;
	
	for( int row = 0 ; row<numberOfchar ; row++ )
	{
		decToBin( charArray[row] , numberOfchar , binOfchar , row ) ;
		
	}
	
	for( int row = 0 ; row < numberOfchar ; row++ )
	{
		for( int column = 0 ; column < 8 ; column++ )
			cout<<binOfchar[row][column];
		cout<<" ";
	}	
	
	int parityArry[8] ;
	
	for( int column = 0 ; column < 8 ; column++ )
	{	
		int bitCount = 0 ;
		
		for( int row = 0 ; row < numberOfchar ; row++ )	
		{
			if(binOfchar[row][column] == 1)
				bitCount++;
		}
		
		if( bitCount%2 == 0)
			parityArry[column] = 0 ;
		else
			parityArry[column] = 1 ;
	}
	
	for( int column = 0 ; column < 8 ; column++ )
		cout<<parityArry[column];	
}
