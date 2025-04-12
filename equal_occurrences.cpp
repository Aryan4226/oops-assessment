#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> count;

        
        for (char ch : s) {
            count[ch]++;
        }

        // Get the first frequency
        int freq = count[s[0]];

        // Check if all characters have the same frequency
        for (auto it : count) {
            if (it.second != freq) {
                return false;
            }
        }

        return true;
    }
};
;
