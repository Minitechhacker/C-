#include<iostream>
using namespace std;

class employee
{
	private:
		int no,age,sal;
		char name[10];
	
	public:
		void get()
		{
			cout<<"\nenter your no:";
			cin>>no;
			cout<<"\nenter your age:";
			cin>>age;
			cout<<"\nenter your sal:";
			cin>>sal;
			cout<<"\nenter your name:";
			cin>>name;
		}
		void display()
		{
			cout<<"\nyour employee details:";
			cout<<"employee name:"<<name<<"\n";
			cout<<"employee no:"<<no<<"\n";
			cout<<"employee age:"<<age<<"\n";
			cout<<"employee salary:"<<sal<<"\n";
		}
};
int main()
{
	employee o[10];
	o[10].get();
	o[10].display();
	return 0;
}
