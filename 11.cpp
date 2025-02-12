9.	Write a program to determine the eligibility of a person to vote based on their age (age ≥ 18 is eligible).
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	
	if(num>=18){
		cout<<"You are eligible to vote";
	}else{
		cout<<"You are not eligible to vote";
	}
	return 0;
}
10.	Write a program to print numbers from 1 to 10 using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int x;
    for(x=0;x<=10;x++){
	cout<<x<<endl;
	}
	return 0;
}
