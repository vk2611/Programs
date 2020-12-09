class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
    int n=arr.size();
	map<int,int>mp;
    vector<int>ans;
	for(int i=0;i<n;i++){
		int r=t-arr[i];
		if(mp.find(r)!=mp.end()){
			cout<<i<<" "<<mp[r]<<endl;
            ans.push_back(mp[r]);
            ans.push_back(i);
			break;
		}
		mp[arr[i]]=i;
	}
        return ans;
    }
};
