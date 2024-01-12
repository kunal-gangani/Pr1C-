/*
4. WAP to create a class which Read and Print House details along with Room details.
Output:
Enter The Type of House : Bunglow
Enter The City Location of House : Surat
Enter The Price of House : 25600
Enter The BHK for House : 3
Enter The Price of House : 5
You are getting Bunglow At Surat road  For Rupees 25600 Which gives you 3 BHK and it
 got 5 star Customer Reviews.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Room{
	public:
	int bhk;
	int price;
	char city[20];
	char type[20];
	int customer_reviews;
};
int main(){
	Room r;
	char utype[20];
	char ucity[20];
	cout<<"Enter The Type of House : ";
	gets(utype);
	cout<<"Enter The City Location of House : ";
	gets(ucity);
	cout<<"Enter The Price of House : ";
	cin>>r.price;
	cout<<"Enter The BHK for House : ";
	cin>>r.bhk;
	cout<<"Enter The Customer Reviews of House : ";
	cin>>r.customer_reviews;
	
	strcpy(r.type,utype);
	strcpy(r.city,ucity);
	
	cout<<"You are getting "<<r.type<<" At "<<r.city<<" road "<<" For Rupees "<<r.price;
	cout<<" Which gives you "<<r.bhk<<" BHK "<<"and it got "<<r.customer_reviews;
	cout<<" star Customer Reviews.";
}
