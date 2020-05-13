#include<iostream>
using namespace std;

#ifdef MOVE
/*
 * std::move()
 */
int main()
{
	std::string str = "Hello";
	std::string str2 = std::move(str); // str is now valid but unspecified

	cout <<"str: " <<str <<endl;
	cout <<"str2: " <<str2 <<endl;

	str.back(); // undefined behavior if size() == 0: back() has a precondition !empty()
	str.clear(); // OK, clear() has no preconditions
	return(0);
}
#endif

#ifdef MOVECONSTRUCTOR

/*
 * std::move()
 */

class Test {
	public:
		Test(std::string s) {
			str = s;
			cout <<"Constructor called, str: " <<str <<endl;
		}

		Test(const Test& obj) {
			str = obj.str;
			cout <<"Copy constructor called, str: " <<str <<endl;
		}

		Test(Test&& obj) : str(std::move(obj.str)){
			cout <<"Move constructor called, str: " <<str <<endl;
		}

		~Test() {
			cout <<"Destructor called, str: " <<str <<endl;
		}

		void Display() {
			cout <<"str: " <<str <<endl;
		}
	private:
		std::string str;
};

int main()
{
	Test obj("Hello");

	{
		Test obj2 = obj;
		Test obj3 = std::move(obj);

		obj2.Display();
		obj3.Display();
	}

	obj.Display();
	return(0);
}
#endif
