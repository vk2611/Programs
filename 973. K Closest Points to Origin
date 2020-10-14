#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int Distance(int i,int j){
	return i*i+j*j;
}
vector<vector<int> > KclosedPoint(vector<vector<int> >arr,int k){
	ll n=arr.size();
	priority_queue<pair<int,pair<int,int> > ,vector<pair<int,pair<int,int> > > >pq;
	for(int i=0;i<arr.size();i++){
		int d=Distance(arr[i][0],arr[i][1]);
		if(pq.size()>=k){
			if(d<pq.top().first){
				pq.pop();
				pq.push(make_pair(d,make_pair(arr[i][0],arr[i][1])));
			}
		}
		else{
			pq.push(make_pair(d,make_pair(arr[i][0],arr[i][1])));
		}
	}
	vector<vector<int> >ans;
	while(pq.empty()==false){
		vector<int>v;
		v.push_back(pq.top().second.first);
		v.push_back(pq.top().second.second);
		ans.push_back(v);
		pq.pop();
	}
	return ans;
	
}
int main(){
	int  n;cin>>n;
	int k;cin>>k;
	vector<vector<int> >arr;
	for(int i=0;i<n;i++){
		int u,v;cin>>u>>v;
		vector<int>l;
		l.push_back(u);
		l.push_back(v);
		arr.push_back(l);
	}
	KclosedPoint(arr,k);
}
