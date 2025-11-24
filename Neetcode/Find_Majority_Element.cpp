class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int threshold = nums.size() / 3;
        int candidate1 = nums[0];
        int candidate2 = nums[0];
        int cnt1 = 0;
        int cnt2 = 0;

        for(int numb : nums){
            if(cnt1 == 0 && candidate2 != numb){
                candidate1 = numb;
                cnt1 = 1;
            }else if(cnt2 == 0 && candidate1 != numb){
                candidate2 = numb;
                cnt2 = 1;
            }
            else if(numb == candidate1){
                cnt1++;
            }else if(numb == candidate2){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0;
        cnt2 = 0;
        for(int numb : nums){
            if(numb == candidate1){
                cnt1++;
            }
            else if(numb == candidate2){
                cnt2++;
            }
        }

        vector<int> arr;
        if(cnt1 > threshold){
            arr.push_back(candidate1);
        }
        if(cnt2 > threshold){
            arr.push_back(candidate2);
        }

        return arr;

    }
};