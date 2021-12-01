#Program 4: Write a program to convert Dotted Decimal Notation IP to Binary Notation IP
	Sample input by user: 
	Enter the IP in Dotted Decimal Notation:
	Enter first octet: 126
	Enter second octet: 7
	Enter third octet: 89
	Enter fourth octet: 76
	You entered in Dotted Decimal Notation: 126.7.89.76
	Sample output:
	IP in Binary Decimal Notation: 
	01111110 00000111 01011001 01001100 
*/
//LRC Check
#include<iostream>
#include<stdlib.h>
using namespace std;

void decToBin( int binArr[][8] , int row )
{
	int num = binArr[row][0];
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
	int binary[4][8] ;
	
	cout<<"Enter the IP in Dotted Decimal Notation:\nEnter first octet:";
	cin>>binary[0][0];
	cout<<"Enter second octet:";
	cin>>binary[1][0];
	cout<<"Enter third octet:";
	cin>>binary[2][0];
	cout<<"Enter fourth octet:";
	cin>>binary[3][0];
	
	for( int row = 0 ; row<4 ; row++ )
	{
		decToBin( binary , row ) ;
	}
	
	cout<<"IP in Binary Decimal Notation: ";
	for( int row = 0 ; row < 4 ; row++ )
	{
		for( int column = 0 ; column < 8 ; column++ )
			cout<<binary[row][column];
		
		cout<<" ";
	}	
		
}
