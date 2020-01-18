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
				c=a-d;
			
				
			}
			void display()
			{
				cout<<"\n your values:"<<d;
		     	cout<<"\n your sub values:"<<c;
			}
		
};
int main()
{
	name o;
	o.add(4,5);
	o.display();
	return 0;
	
}
