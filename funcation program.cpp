#include<iostream>
using namespace std;
//funcation definition
void passbyvalue (int num)
{
	num=num+10;
	cout<<"inside funcation(passbyvalue):"<<num<<endl;
}
int main()
{
	int number=5;
	cout<<"before funcation call:"<<number<<endl;
	passbyvalue(number);//passing the value
    return 0;
}