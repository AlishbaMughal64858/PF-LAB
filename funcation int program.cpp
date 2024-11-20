#include<iostream>
using namespace std;
//funcation definition
int passbyvalue (int num)
{
	num=num+10;
	cout<<"inside funcation(passbyvalue):"<<num<<endl;
	return num;
}
int main()
{
	int number=5;
	cout<<"before funcation call:"<<number<<endl;
    int g=passbyvalue(number);//passing the value
    return 0;
}