#include <utecdf/sample/two_sum.hpp>
#include <vector>
#include <map>
#include <algorithm>

// std::vector<int> two_sum(std::vector<int> & nums, int target) {
//     std::sort(nums.begin(), nums.end());
//     auto i = 0;
//     auto j = nums.size() - 1;
//     while( i < j) {
//         if (nums[i] + nums[j] == target) {
//             return std::vector<int>{i, j}; 
//         }
//         if (nums[i] + nums[j] > target) {
//             j--;
//         } else {
//             i++;
//         }
//     }
//     return std::vector<int>{};
// }

std::vector<int> two_sum(std::vector<int> & nums, int target) {
    std::map<int, int> complements;
    for (int j = 0; j < nums.size(); j++) {
        complements[nums[j]] = j; 
    }
    for (int i = 0; i < nums.size(); i++) {
        auto c = target - nums[i];
        auto iter = complements.find(c); // log(n)
        if (i != iter->second && iter != complements.end()) {
            return std::vector<int>{i, iter->second};  
        }
    }
    return std::vector<int>{};
}
