#include<vector>
#include<iostream>
#include<algorithm> //for_each
using namespace std;

#ifdef FOREACH

/*
 * for each loop in C++11
 */

int main()
{
	int array[] = {1, 2, 3, 4, 5};

	cout<<"The elements are: " <<endl;
	for(auto var : array) {
		cout <<var <<" ";
	}
	return 0;
}
#endif

#ifdef STLFOREACH

/*
 * for_each loop in C++11
 */

int main()
{
	std::vector<int> vec = {1, 2, 3, 4, 5};
	cout <<"Elements of vector are: " <<endl;
	for_each(std::begin(vec), std::end(vec), [](int x) { cout <<x <<" "; } );
	cout <<endl;
}
#endif
