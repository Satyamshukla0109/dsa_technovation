class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 0;
        int current_majority = 0;

        for(int num:nums) {

            if(count == 0) {
                current_majority = num;
            }

            if(num==current_majority) {
                count++;
            }
            else {
                count--;
            }
        }

        return current_majority;
    }
};