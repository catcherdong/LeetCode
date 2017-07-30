//476
//Given a positive integer, output its complement number.
//2017.07.30
//Author : catcherdong

#include "iostream"

class Solution {
public:
    int findComplement(int num) {
		int mask = num;
		mask |= mask >> 1;
		mask |= mask >> 2;
		mask |= mask >> 4;
		mask |= mask >> 8;
		mask |= mask >> 16;
		return num ^ mask;
    }
};

int main()
{
	Solution * sol = new Solution;

	int num = 0;
	std::cout << "input a number" << std::endl;
	std::cin >> num;

	int res = sol->findComplement(num);

	std::cout << "the complement is : " << res << std::endl;

	delete sol;

	return 0;
}
