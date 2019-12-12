#include<iostream>
using namespace std;
class name
{ 
private:
	int a,b,c,d;
	  
	  public:
		
			void add(int x,int y)
			{
				a=x;
				b=y;
			
				d=a+b;
				c=a-c;
			}
			void display()
			{
				cout<<"\n your values:"<<d;
		     	cout<<"\n your values:"<<c;
			}
			
			friend void print();
};
void print()
{
	cout<<"\n this is friend funtions:";
}
int main()
{
	name o;
	o.add(4,5);
	o.display();
	print();
	return 0;
	
}
