#include <iostream>
using namespace std;
 
 class unary
 {
 	private:
 		int a;
 		public:
 			void input()
 			{
			
 			cout<<"enter a :";
 			cin>>a;
 		}
 			void operator++()
 			{
 				++a;
			 }
			 void display()
			 {
			 	cout<<"A:"<<a<<endl;
			 }
			 
 };
 int main()
 {

 	unary u;
 	u.input();
 	++u;
 	u.display();
 	return 0;
 }
