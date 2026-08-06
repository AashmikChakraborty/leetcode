class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorAll = 0;

        for (int num : nums) {
            xorAll ^= num;
        }
        unsigned int diffBit = (unsigned int)xorAll & (-(unsigned int)xorAll);

        int first = 0;
        int second = 0;

        
        for (int num : nums) {

            if (num & diffBit)
                first ^= num;
            else
                second ^= num;
        }

        return {first, second};
    }
};