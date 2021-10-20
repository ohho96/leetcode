#include <iostream>
#include <vector>
using namespace std;

//singly linked list
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		while (l1->next == NULL && l2->next == NULL) {

		}
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

