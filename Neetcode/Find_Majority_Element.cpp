/**
 * Problem: Leetcode 169 - Majority Element
 * Link: https://neetcode.io/problems/majority-element-ii/question
 * Approach: Boyer-Moore Voting Algorithm
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * * Intuition:
 * Since the majority element appears more than n/2 times, we can consider it as having "+1 vote"
 * and all other elements as having "-1 vote". By canceling them out against each other,
 * the element that remains is guaranteed to be the majority element.
 */

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