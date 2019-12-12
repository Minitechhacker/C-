#include<iostream>
using namespace std;
template<class t>
class test
{
	t a;
	public:
		test(t b )
		{
			a=b;
		}
		void show()
		{
			cout<<a;
		}
};
int main()
{
	test<int> o(100);
	o.show();
	return 0;
}
