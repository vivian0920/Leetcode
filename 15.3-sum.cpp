/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (33.22%)
 * Likes:    28390
 * Dislikes: 2555
 * Total Accepted:    2.9M
 * Total Submissions: 8.8M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an integer array nums, return all the triplets [nums[i], nums[j],
 * nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] +
 * nums[k] == 0.
 * 
 * Notice that the solution set must not contain duplicate triplets.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [-1,0,1,2,-1,-4]
 * Output: [[-1,-1,2],[-1,0,1]]
 * Explanation: 
 * nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
 * nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
 * nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
 * The distinct triplets are [-1,0,1] and [-1,-1,2].
 * Notice that the order of the output and the order of the triplets does not
 * matter.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [0,1,1]
 * Output: []
 * Explanation: The only possible triplet does not sum up to 0.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: nums = [0,0,0]
 * Output: [[0,0,0]]
 * Explanation: The only possible triplet sums up to 0.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 3 <= nums.length <= 3000
 * -10^5 <= nums[i] <= 10^5
 * 
 * 
 */

// @lc code=start
/*
原本思路:
1. 使用指針
2. 不可使用重複的位置
3. 當都不符合則回傳0
4. 想使用dp
缺點:
1. 耗費時間太長

新思路:
1. 要使用雙指針去控制變大變小
2. 事前需要先行排序
3. 停止條件是找遍了，而不是找到，因為有可能有多組
*/
#include<iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
// using std::vector;
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> results;
          std::cout << "Elements in the vector: ";
        for (int element : nums) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
        //固定一個數
        //[-2,-1,6,7,8,9]
        //[-1,0,1,2,-1,-4] [-4,-1,-1,0,1,2]
        // for(int i=0;i<nums.size();i++){
        //     int remainNums=0-nums[i];
        //     int startPointer=i+1;
        //     int endPointer=nums.size()-1;
            
        //     int tryNmus=nums[startPointer]+nums[endPointer];
        //     while (startPointer < endPointer)
        //     {
        //         while(tryNmus > remainNums && startPointer < endPointer){
        //             endPointer--;
        //             tryNmus=nums[startPointer]+nums[endPointer];
        //             if(tryNmus == remainNums){
        //                 // 找到要的數
        //                 results.push_back({nums[i],nums[startPointer],nums[endPointer]});
        //             }
        //         }
        //         if(startPointer >= endPointer){
        //             break;
        //         }
        //         while (tryNmus < remainNums && startPointer < endPointer)
        //         {
        //             startPointer++;
        //             tryNmus=nums[startPointer]+nums[endPointer];
                    
        //             if(tryNmus == remainNums){
        //                 // 找到要的數
        //                 results.push_back({nums[i],nums[startPointer],nums[endPointer]});
        //             }
        //         }

        //     }
        // }

        return results;



        // // vector<int> test;
        // unordered_map<int,unordered_map<int,int>> tmpDP;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(tmpDP[i][j]==0){
        //             tmpDP[i][j]=nums[i]+nums[j];
        //         }
        //     }
        // }

    }
};
// @lc code=end

