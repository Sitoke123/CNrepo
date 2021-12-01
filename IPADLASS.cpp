#Program 5: Write a program to display the class of the IP Address entered by the user.
Sample Input: 
Enter the IP Address in Dotted Decimal Notation: 193.90.74.125
Enter the first octet: 193
Enter the second octet: 90
Enter the third octet: 74
Enter the fourth octet: 125
Sample Output: It is Class B address
A -> 1-126
B -> 128-191
C -> 192-223
D -> 224-239
E -> 240-255 
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
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
		cout<<"Invalid Address.\n";
}
