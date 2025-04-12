#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        set<double> averages;           
        
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            double avg = (nums[i] + nums[j]) / 2.0;
            averages.insert(avg);
            i++;
            j--;
        }

        return averages.size(); 
    }
};

