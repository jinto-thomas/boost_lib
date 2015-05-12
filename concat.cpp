#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <iostream>

using namespace boost::algorithm;
using namespace std;
int main()
{
	string a[] = {"Boost", "C++", "Libraries"};
	vector<string>v(a,a+3); 
	cout << join(v, " ") << '\n';
}
