11.	Write a program to find the sum of the first n natural numbers using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"Enter the number:";
    cin>>n;
for(int i=1; i<=n;i++){
	cout<<i<<endl;
	sum+=n;
	}
	cout<<"The sum of natural number is:"<<sum<<endl;
	return 0;
}
