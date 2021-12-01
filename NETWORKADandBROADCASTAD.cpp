#Program 8: Write a program to find out the Class, Network Address and Broadcast Address of the IP address provided by the user
(in classful Addressing)
*/
#include<iostream>
using namespace std;

char IP_Class(int binary)
{
	if( binary >= 1 && binary <= 126 )	
		return('A') ;//cout<<"It is Class A address.\n";
	else if( binary >= 128 && binary <= 191 )
		return('B') ;//cout<<"It is Class B address.\n";	
	else if( binary >= 192 && binary <= 223 )
		return('C') ;//cout<<"It is Class C address.\n";
	else if( binary >= 224 && binary <= 239 )
		return('D') ;//cout<<"It is Class D address.\n";
	else if( binary >= 240 && binary <= 255 )
		return('E') ;//cout<<"It is Class E address.\n";
	else
		return('0');
}

int main()
{
	int decimal[4][1] ;
	
	cout<<"Enter the IP in Dotted Decimal Notation:\nEnter first octet:";
	cin>>decimal[0][0];
	cout<<"Enter second octet:";
	cin>>decimal[1][0];
	cout<<"Enter third octet:";
	cin>>decimal[2][0];
	cout<<"Enter fourth octet:";
	cin>>decimal[3][0];
	
	char ip_class = IP_Class(decimal[0][0]) ;
	
	int network_add[4][1] , broadcast_add[4][1] ;
	if(ip_class == 'A')
	{
		network_add[0][0] = decimal[0][0] ;
		network_add[1][0] = 0 ;
		network_add[2][0] = 0 ; 
		network_add[3][0] = 0 ;
		
		broadcast_add[0][0] = decimal[0][0] ;
		broadcast_add[1][0] = broadcast_add[2][0] = broadcast_add[3][0] = 255;
	}
	
	else if(ip_class == 'B')
	{
		network_add[0][0] = decimal[0][0] ;
		network_add[1][0] = decimal[1][0] ;
		network_add[2][0] = 0 ;
		network_add[3][0] = 0 ;
		
		broadcast_add[0][0] = decimal[0][0] ;
		broadcast_add[1][0] = decimal[1][0] ;
		broadcast_add[2][0] = broadcast_add[3][0] = 255 ;
	}
	
	else if(ip_class == 'C')
	{
		network_add[0][0] = decimal[0][0] ;
		network_add[1][0] = decimal[1][0] ;
		network_add[2][0] = decimal[2][0] ;
		network_add[3][0] = 0 ;
		
		broadcast_add[0][0] = decimal[0][0] ;
		broadcast_add[1][0] = decimal[1][0] ;
		broadcast_add[2][0] = decimal[2][0] ;
		broadcast_add[3][0] = 255 ;
	}
	
	cout<<"\nClass of IP Address "<<decimal[0][0]<<"."<<decimal[1][0]<<"."<<decimal[2][0]<<"."<<decimal[3][0]<<": "<<ip_class;
	cout<<"\n Address of IP Address "<<network_add[0][0]<<"."<<network_add[1][0]<<"."<<network_add[2][0]<<"."<<network_add[3][0];
	cout<<"\nBroadcast Address of IP Address "<<broadcast_add[0][0]<<"."<<broadcast_add[1][0]<<"."<<broadcast_add[2][0]<<"."<<broadcast_add[3][0];
