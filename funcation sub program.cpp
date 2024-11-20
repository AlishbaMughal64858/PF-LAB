#include<iostream>
using namespace std;
//funcation definition
int passbyvalue (int num)
{
	num=num+10;
	cout<<"inside funcation(passbyvalue):"<<num<<endl;
	return num;
}
void passbysb(int sub)
{
	sub=sub-5;
	cout<<"sub in funcation(passbyvalue):"<<sub;
}
void passbydiv(int div)
{
	div=div/5;
	cout<<"div in funcation(passbyvalue):"<<div;
}
int main()
{
	int number=5;
	cout<<"before funcation call:"<<number<<endl;
	int g=passbyvalue(number);
	cout<<"after funcation call:"<<number<<endl;
	cout<<"before sb:"<<number<<endl;
	passbysb(number);
	cout<<"before div:"<<number<<endl;
	passbydiv(number);
	return 0;
}


