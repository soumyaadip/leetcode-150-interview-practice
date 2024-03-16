class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        vector<int> v;
        int n = nums.size();
        if(n == 1) return 1;

        int i = 0, j = 1;
        while(i < n && j < n){
            if(nums[i] == nums[j]) j++;
            else{
                v.push_back(nums[i]);
                i = j;
            }
        }

        int m = v.size();
        if(m != 0 && v[m-1] != nums[i]){
            v.push_back(nums[i]);
        }
        else{
            v.push_back(nums[i]);
        }

        int k = 0;
        for(int i = 0; i < v.size(); i++){
            nums[k++] = v[i];
        }

        return v.size();
    }
};