/*
2. WAP to create a class to read and add two times.
Output:
Enter Hour for 0 : 1
Enter Minute for 0 : 36
Enter Second for 0 : 45
Enter Hour for 1 : 2
Enter Minute for 1 : 14
Enter Second for 1 : 15
1 Hour 36 Minute 45 Second + 2 Hour 14 Minute 15 Second = 3 Hour 51 Minute 0 Second
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
		Time t[2];
		int i;
		for(i=0;i<2;i++){
			cout<<"Enter Hour for "<<i<<" : ";
			cin>>t[i].hour;
			cout<<"Enter Minute for "<<i<<" : ";
			cin>>t[i].minute;
			cout<<"Enter Second for "<<i<<" : ";
			cin>>t[i].second;
		}
		
		int ssum = t[0].second+t[1].second;
		int msum = t[0].minute+t[1].minute;
		int hsum = t[0].hour+t[1].hour;
		if (ssum>=60) {
    		msum+=1;  
    		ssum-=60;
		}
		if (msum>=60) {
    		hsum+=1; 
    		msum-=60;
		}
		cout<<t[0].hour<<" Hour "<<t[0].minute<<" Minute "<<t[0].second<<" Second";
		cout<<" + "<<t[1].hour<<" Hour "<<t[1].minute<<" Minute "<<t[1].second<<" Second";
		cout<<" = "<<hsum<<" Hour "<<msum<<" Minute "<<ssum<<" Second ";
	}
