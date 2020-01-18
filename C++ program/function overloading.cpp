#include <iostream>    
using namespace std;    
class Cal {    
    public:    
static int add(int a,int b){      
        return a + b;      
    }      
static int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) 
{    
    Cal C;   
	int n1,n2,n3;          
	cout<< "what is your n1 and n2 and n3 values:";  
	cin>>n1>>n2>>n3;                                     //     class object declaration.   
    //cout<< C.add(n1, n2)<<endl;     
    cout<< C.add(n1, n2, n3);     
   return 0;    
}    

