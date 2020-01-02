#include<iostream>
using namespace std;
class add
{
	private:
		int a,b,c;
		public:
			void get()
			{
				cout <<"what is your a and b values:"<<endl;
				cin >>a>>b;
				c=a+b;
			}
			void display()
			{
				cout <<"your add values is:"<< c << endl;
			}
		};
			class sub
			{
			
			   public:
			   	void gets()
			{
				cout <<"what is your a and b values:"<<endl;
				cin >> a >> b >> endl;
				c=a-b;
			}
			void displays()
			{
				cout <<"your add values is:"<< c << endl;
			}
		};
			void main()
			{
				add a;
				sub s;
				a.get();
				a.display();
				s.gets();
				s.displays();
			}
			   	
}
