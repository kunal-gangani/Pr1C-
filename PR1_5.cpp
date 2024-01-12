/*
5. WAP which illustrates the use of public and private access modifiers
Output:
Enter Integer Value for Num : 5
5 This is Value of Public Data Member of Class MyClass .
	*/
#include<iostream>
using namespace std;
class MyClass{
	int num=2;
	public:
		int num1;
};
int main(){
	MyClass m;
	cout<<"Enter Integer Value for Num : ";
	cin>>m.num1;
	cout<<m.num1<<" This is Value of Public Data Member of Class MyClass .";
	return 0;
}
