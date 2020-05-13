#include<vector>
#include<iostream>
#include<functional>   // std::function
using namespace std;

/*
 * std::function<return-type(argument-types)>;
 * This is a wrapper class to constructs a function object/pointer.
 */

int sum(int a, int b) {
	return (a + b);
}

int main()
{
	/* Traditional way of using function pointer */
	int(*funcptr)(int, int) = sum;
	cout <<"Sum of (1+2): " <<funcptr(1, 2) <<endl;

	/* C++11 way of using std::function<> for function pointer */
	std::function<int(int, int)> funcptr2 = sum;
	cout <<"Sum of (1+2): " <<funcptr2(1, 2) <<endl;
	return(0);
}
