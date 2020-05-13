#include<assert.h>     /* assert */
#include<stdlib.h>
#include<iostream>
using namespace std;

#ifdef TRADITIONAL
/* 
 * Traditional way of validating vital arguments
 */
void func(int* ptr) {
	if (ptr == NULL) {
		cout <<"Ptr is NULL" <<endl;
		exit(0);
	}
}

int main()
{
	cout <<"Calling func2..." <<endl;
	func(NULL);
	return(0);
}
#endif

#ifdef ASSERT 
/* 
 * Use of assert() function: Runtime Validation
 */
void func(int* ptr) {
	assert(ptr);
}

int main()
{
	cout <<"Calling func..." <<endl;
	func(NULL);
	return(0);
}
#endif

#ifdef STATICASSERT 
/* 
 * std::static_assert( constant_expression, string_literal );
 */
template<typename T>
void func(const T size) {
	std::static_assert(std::is_integral<T>::value, "Array size is not an integral value.");
	unsigned char array[size];
}

int main()
{
	//func<int>(2);
	func<std::string>("Hello");
	return(0);
}
#endif
