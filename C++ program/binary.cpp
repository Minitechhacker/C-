#include <iostream>
using namespace std;
 
 class binary
 {
 	private:
 		int a;
 		public:
 			void input()
 			{
			
 			cout<<"enter a :";
 			cin>>a;
 		}
 		    binary operator-(binary c)
 		    {
 		    	binary t;
 		    	t.a=a-c.a;
 		    	return t;
			 }
			 void display()
			 {
			 	cout<<"results:"<<a;
			 }
 	};
int main()
{
	binary b1,b2,b3;
	b1.input();
	b2.input();
	b3=b1-b2;
	b3.display();
	return 0;
		 } 	
 	
