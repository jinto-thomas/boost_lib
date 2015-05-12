#include <boost/algorithm/string.hpp>
#include <string>
#include <iostream>

using namespace boost::algorithm;
using namespace std;
int main()
{
	string s = "Boosts C++ Libraries";
	cout << erase_first_copy(s, "s") << '\n';
	cout << erase_nth_copy(s, "s", 0) << '\n';
	cout << erase_last_copy(s, "s") << '\n';
	cout << erase_all_copy(s, "s") << '\n';
	cout << erase_head_copy(s, 5) << '\n';
	cout << erase_tail_copy(s, 5) << '\n';
}
