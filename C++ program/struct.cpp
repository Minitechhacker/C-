#include<iostream>
using namespace std;
struct student
{
	int rolno;
	char gender;
	int phone[10];
}mini,durai;

int main()
{
	student maha,meena={10,'f',123456789};

   maha.gender='f';
   maha.rolno=15;
   maha.phone[10]=87891225;
   
   mini.gender='m';
   mini.phone[10]=857496123;
   mini.rolno=16;
   
   durai.gender='m';
   durai.phone[10]=45879665;
   durai.rolno=14;
   
cout<< maha.gender << endl << maha.rolno << endl << maha.phone[10] << endl;

cout<< meena.gender << endl << meena.rolno << endl << meena.phone[10] << endl;

cout<< mini.gender << endl << mini.rolno << endl << mini.phone[10] << endl;

cout<< durai.gender << endl << durai.rolno << endl << durai.phone[10] << endl;

//	cout<<"enter your rollno,gender,phone numbers:";
//	cin>> maha.rolno >> maha.gender>> maha.phone >> endl;
	
}
