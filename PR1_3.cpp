/*
3. WAP to create class to read time in seconds and convert into time in 
(HH:MM:SS) format.
Output:
Enter Seconds : 36003

11 : 0 : 3
*/
#include<iostream>
using namespace std;
class Time{
	public:
		int hour;
		int minute;
		int second;
};
int main(){
	Time t;
	cout<<"Enter Seconds : ";
	cin>>t.second;
	if(t.second>60){
		t.minute+=t.second/60;  
        t.second%=60;
	}
	if(t.minute>60){
		t.hour+=t.minute/60;  
        t.minute %= 60;
	}
	cout<<endl<<t.hour<<" : "<<t.minute<<" : "<<t.second;
	return 0;
}
