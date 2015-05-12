#include <boost/algorithm/string.hpp>
#include <string>
#include <iostream>

using namespace boost::algorithm;
using namespace std;
int main()
{
	string s = "Boost C++ Libraries";
	boost::iterator_range<string::iterator> r = find_first(s, "C++");
	cout << r << '\n';
	r = find_first(s, "Lib");
	cout << r << '\n';
}
