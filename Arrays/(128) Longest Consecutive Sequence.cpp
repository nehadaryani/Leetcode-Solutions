class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=0;
        unordered_set<int> m(nums.begin(),nums.end());
        for(int num:m){
            if(m.find(num-1)==m.end()){
                int currentNum=num;
                int count=1;
            
            while(m.find(currentNum+1)!=m.end()){
                currentNum++;
                count++;

            }
            longest=max(longest,count);

        }
        }

        return longest;
    }
};