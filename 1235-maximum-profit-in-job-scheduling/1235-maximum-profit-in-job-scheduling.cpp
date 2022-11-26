class Solution {
private:
	int dfs(vector<vector<int>> &nums, vector<int> &memo, int index){
		if(index == nums.size()) return 0;
		if(memo[index] != -1) return memo[index];

		int lo = 0, hi = nums.size() - 1, UB = nums.size() ;
		while(lo <= hi){
			int mid = ( lo + hi )>> 1;              
			if(nums[index][1] <= nums[mid][0]){
				UB = mid;
				hi = mid - 1;
			}
			else lo = mid + 1;
		}

		int skipit = dfs(nums, memo, index + 1);         
		int pickit = nums[index][2] + dfs(nums, memo, UB);  
		return memo[index] = max(skipit, pickit);
	}
public:
	int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
		vector<vector<int>> nums;
		for(int i = 0; i < startTime.size(); i++) nums.push_back({startTime[i], endTime[i], profit[i]});
		sort(nums.begin(), nums.end());
		vector<int> memo(1e6, -1);
		return dfs(nums, memo, 0);
	}
};