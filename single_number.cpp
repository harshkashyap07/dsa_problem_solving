#include<iostream>
#include<vector>
using namespace std;
int singlenumber(vector<int>& nums)
{
	int sin=0;
	for(int val:nums)
	{
		sin^=val;
	}
	return sin;
}
int main()
{
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<=n-1;i++)
	{
		int x;
		cin>>x;
		nums.push_back(x);
	}
	cout<<singlenumber(nums);
	return 0;
}