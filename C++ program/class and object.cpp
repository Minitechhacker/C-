#include<iostream>
//#include<conio.h>
using namespace std;
class school 
{
	private:
		int a,b,c;
	public:
		void add() 
		{
			cout<<"\n the two numbers:";
			cin>>a>>b;
			c=a+b;
			
		}
		void display() 
		{
			cout<<"your total value is :"<<c;
		}


};
int main()
 {
	school o;
	o.add();
	o.display();
	return 0;
}
