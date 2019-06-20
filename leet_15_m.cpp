/*思路：固定一个一个数字，基于这个数字对其之后的数组中的数字进行遍历，
 *      将目标数字之后的数字看作一个数组，则问题转化为求2sum问题。
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > rst;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            vector<int> tmp;
            
            int j = i+1, k = nums.size()-1;
            int sum = 0 - nums[i];
            while(j < k)
            {
                if(nums[j] + nums[k] > sum)
                    k--;
                else if(nums[j] + nums[k] < sum)
                    j++;
                else
                {
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    j++;
                    k--;
                    
                    while(j - 1 > i && nums[j] == nums[j-1] && j < k)
                        j++;
                }
            
                if(tmp.size() > 0)
                {
                    rst.push_back(tmp);
                }
                tmp.clear();
                
            }
        }
        return rst;
    }
};
