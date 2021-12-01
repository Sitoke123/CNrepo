#Program 7: Write a menu based program to
	i) Convert Dotted Decimal Notation IP to Binary Notation IP
	ii) Convert Binary Notation IP to Dotted Decimal Notation IP
	iii) Display the class of the IP Address
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int bin_to_dec(string add)
{
	int num = 0;
	int base = 0;
	int i = add.length()-1;
	while( i >= 0 )
	{
	 	if( add[i] == '1')
		 	num = num + pow(2,base);
        base++;	
        i--;
	}
	return num;
}

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

void Bin_to_DDN()
{
	string first , second , third , fourth ;
	cout<<"Enter the IP Address in Dotted Decimal Notation\nEnter the Binary for first octet:";
	getline( cin>> ws, first);
	cout<<"\nEnter the Binary for second octet:";
	getline( cin>> ws, second);
	cout<<"\nEnter the Binary for third octet:";
	getline( cin>> ws, third);
	cout<<"\nEnter the Binary for fourth octet:";
	getline( cin>> ws, fourth);
	
	if( first.length()== 8 && second.length()== 8 && third.length()== 8 && fourth.length()== 8)
	{
		int f = bin_to_dec(first) ;
		int s = bin_to_dec(second) ;
		int t = bin_to_dec(third) ;
		int fth = bin_to_dec(fourth) ;
		
        cout<<"\nDecimal address is :\n"<<f<<"."<<s<<"."<<t<<"."<<fth<<"\n";
	}
	else cout<<"Invalid Address\n";

}

void DDN_to_Bin()
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

void IP_Class()
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
	
	if( binary[0][0] >= 1 && binary[0][0] <= 126 )	
		cout<<"It is Class A address.\n";
	else if( binary[0][0] >= 128 && binary[0][0] <= 191 )
		cout<<"It is Class B address.\n";	
	else if( binary[0][0] >= 192 && binary[0][0] <= 223 )
		cout<<"It is Class C address.\n";
	else if( binary[0][0] >= 224 && binary[0][0] <= 2399 )
		cout<<"It is Class D address.\n";
	else if( binary[0][0] >= 240 && binary[0][0] <= 255 )
		cout<<"It is Class E address.\n";
	else 
		cout<<"Invalid IP Addredd.\n";
}

int main()
{
	int choice;
	cout<< " Please Enter you Choice:\n1. Convert Dotted Decimal Notation IP to Binary Notation IP.\n2. Convert Binary Notation IP to Dotted Decimal Notation IP.\n3. Display the class of the IP Address.\n " ;
	cin>>choice;
	do
	{
		cout<< " Please Enter you Choice:\n1. Convert Dotted Decimal Notation IP to Binary Notation IP.\n2. Convert Binary Notation IP to Dotted Decimal Notation IP.\n3. Display the class of the IP Address.\n " ;
		cin>>choice;
		switch(choice)
		{
			case 1: DDN_to_Bin(); break;
			case 2:	Bin_to_DDN() ; break;
			case 3: IP_Class() ; break;
			default: cout<<"Wrong Choice.\n"; break;
		}
	}while(choice!=0)   
}
