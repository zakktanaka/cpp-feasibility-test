#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace boost::gregorian;

int main() {
	const date d1(2011, Apr, 1);
	const date d2 = d1 + months(1) - days(1);

	std::cout << to_simple_string(d2) << std::endl;
}
