// Checking person is eligible or not for voting
#include <iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter your age :";
	cin>>age;
	if (age>=18)
	{
		cout<<"Yes you are eligible"<<endl;
	}
	else
	{
		cout<<"Oops ! you are not eligible"<<endl;
	}
	
	return 0;
}
