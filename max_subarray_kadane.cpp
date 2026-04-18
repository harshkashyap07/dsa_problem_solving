#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int max_subarray(vector<int>& nums)
{
	int currsum=0;
	int max_sum=INT_MIN;
	for(int i:nums)
	{
		currsum+=i;
		max_sum=max(currsum,max_sum);
		if(currsum<0)
		{
			currsum=0;
		}
	}
	return max_sum;
}
int main()
{
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int &i:nums)
	{
		cin>>i;
	}
	cout<<max_subarray(nums);
	return 0;
}