#include<iostream>
using namespace std;
int Power(int x,int y)//xÎªµ× yÎªÃİ
{
	int res;
	if(y==0)
		res = 1;
	else
        res = x * Power(x,y-1);
	return res;
}

int main()
{
	cout<<"x^y"<<endl;
	int x;
	int y;
	cin>>x>>y;
	cout<<Power(x,y)<<endl;
	return 0;
}