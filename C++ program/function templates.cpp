#include<iostream>
using namespace std;
template<class T>
	void swap(T &a,T &b)
	{
		T t;
		t=a;
		a=b;
		b=t;
	}
	
int main()
{
	int a,b;
	a=52;
	b=86;
	cout<<"before swap:"<<a<<"\nb"<<b;
	swap(a,b);
	cout<<"after swap:"<<a<<"\nb"<<b;
    return 0;
}
