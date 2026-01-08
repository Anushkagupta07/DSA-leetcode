class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m; // O(n)
        int n = nums.size();
        for(int i=0;i<n;i++){
            int first = nums[i];
            int second = target - first;
            if(m.find(second)!=m.end()){    //m.end()is a special iterator that represents "not found" in a map.
                return {i,m[second]};
            }
            m[first] =i; //It is saving the current number and the index where we saw it into the map m.
        }
        return {};
    }
};
