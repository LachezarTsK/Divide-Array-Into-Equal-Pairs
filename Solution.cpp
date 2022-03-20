
#include <array>
#include <vector>
using namespace std;

class Solution {
    
    inline static const int MIN_INPUT_VALUE = 1;
    inline static const int MAX_INPUT_VALUE = 500;

public:

    bool divideArray(vector<int>& input) {
        array<int, MAX_INPUT_VALUE + 1 > frequency{};
        for (const auto& n : input) {
            frequency[n]++;
        }
        for (const auto& n : frequency) {
            if (n % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};
