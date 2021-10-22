#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
		int n = nums.size();
		int val;
		std::vector<int> ans;
		bool breakl = false;
		ans.clear();
		for (int i = 0; i < n-1 || breakl; i++) {
			for (int j = i + 1; j < n; j++) {
				val = nums.operator[](i) + nums.operator[](j);
				if (val == target) {
					ans.push_back(i);
					ans.push_back(j);
					return ans;
				}
			}
		}
		std::cout << "there is no right sums for the target value.\n";
		return ans;
    }
};

int main() {
	std::vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	std::vector<int> ans;
	Solution myVal;
	ans = myVal.twoSum(nums, target);

	std::cout << "[" << ans.operator[](0) << "," << ans.operator[](1) << "]\n";
	return 0;
}