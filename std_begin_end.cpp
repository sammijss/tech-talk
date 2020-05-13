#include<vector>
#include<iostream>
using namespace std;

/*
 * std::begin()
 * std::end()
 */

int main()
{
	std::vector<int> vec = {1, 2, 3, 4, 5};

	/* Traditional Way To Access The STL Container */
	cout <<"Access the vector with vector container begin() and end() function." <<endl;
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		cout <<*it <<" ";
	}
	cout <<endl;

	/* Using std::begin() and std::end() functions of std::iterator<> class */
	cout <<"Access the vector with std::iterator<> class begin() and end() function." <<endl;
	for (auto it = std::begin(vec); it != std::end(vec); ++it) {
		cout <<*it <<" ";
	}
	return (0);
}
