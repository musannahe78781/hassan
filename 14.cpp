13.	Write a program to print the factorial of a number using a while loop
#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1,i;
    cout<<"Enter The Number:";
    cin>>n;

i=n;
    while(i>0){
	factorial=factorial*i;
	i--;
	}

   cout<<"The factorial of"<<n<<"is"<<factorial<<endl;
	return 0;
}
14.	Write a program to reverse a given number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter The value:";
    cin>>n;

    while(n>0){
	rev=rev*10+n%10;
	n=n/10;
	}
	cout<<"The reverse number is:"<<rev<<endl;
	
	return 0;
}
