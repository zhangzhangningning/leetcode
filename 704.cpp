#include "head.h"

class Solution {
public:
    int search(vector<int>& nums,int target) {
        int left = 0, right = nums.size() - 1;
        int result = -1;
        while (left < right) {
            int mid = left + (right -left) / 2;
            if (nums[mid] == target) {
                result = mid;
                break;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << result << endl;
        return result;
    }
};

int main() {
    Solution so;
    vector<int> nums = {1,2,3,4,5,6};
    so.search(nums,3);
    
    return 0;
}