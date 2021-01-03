//  What will be the output of the following C++ code?

#include <iostream>
using namespace std;
class A{
public:
	A(){
		cout<<"Constructor called\n";
	   }
	~A(){
		cout<<"Destructor called\n";
	    }
};
int main(int argc, char const *argv[])
{
	A *a = new A[5];
	delete a;
	return 0;
}


 
//     a) “Constructor called” five times and then “Destructor called” five times
//    b) “Constructor called” five times and then “Destructor called” once
//    c) Error
//    d) Segmentation fault
  
