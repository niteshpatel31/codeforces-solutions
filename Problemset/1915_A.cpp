#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ull test{0}, a, b, c;
	std::cin >> test;
	while (test--)
	{
		std::cin >> a >> b >> c;
		if (a == b)
			std::cout << c;
		else if (b == c)
			std::cout << a;
		else
			std::cout << b;
		std::cout << endl;
	}
	exit(EXIT_SUCCESS);
}