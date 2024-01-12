/*
1. WAP to create a class to read and add two distance.
(e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
Output:
Enter the Feet for 1 : 8
Enter the Inch for 1 : 16
Enter the Feet for 2 : 4
Enter the Inch for 2 : 14

8 Feet 16 Inch + 4 Feet 6 Inch = 14 Feet 6 Inch
*/
#include<iostream>
using namespace std;
class Distance{
	public:
		int feet;
		int inch;
};
int main(){
	int i;
	Distance d[2];
	for(i=1;i<3;i++){
		cout<<"Enter the Feet for "<<i<<" : ";
		cin>>d[i].feet;
		cout<<"Enter the Inch for "<<i<<" : ";
		cin>>d[i].inch;
	}
	int fsum = d[1].feet+d[2].feet;
	int isum = d[1].inch+d[2].inch;
	if(isum>=12){
		fsum+=isum/12;
		isum%=12;
	}
	cout<<endl<<d[1].feet<<" Feet "<<d[1].inch<<" Inch + ";
	cout<<d[2].feet<<" Feet "<<d[2].inch<<" Inch = ";
	cout<<fsum<<" Feet "<<isum<<" Inch ";
	return 0;
}
