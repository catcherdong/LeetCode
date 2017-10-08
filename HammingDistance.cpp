//calculate the hamming distance of two number
//2017.07.29
//Author : catcherdong

//update
//2017.07.29
//dicrease loops times

//test github

#include <iostream>

class Solution {
public:
    int hammingDistance(int x, int y) {
        
        //int temp = x ^ y;

        //int i = 0, t = 0;

        //for(t = 0; t < 32; t++)
        //if(((temp >> t) & 1) == 1){
        //    i++;
        //}

        //return i;

	int n = x ^ y;
	int dist = 0;

	while (n){
		++dist;
		n &= n - 1;
	}

	return dist;
    }
};

int main(){

  int a = 0, b = 0;
  int res = 0;

  Solution * sol = new Solution;
  
  std::cout << "input two number" << std::endl;  
  std::cin >> a >> b;
  
  res = sol->hammingDistance(a,b);
  
  std::cout << "the hammming distance is : " << res << std::endl;
  
  delete sol;

  return 0;
}
