#include<iostream>
#include<vector>
using namespace std;
int moore(vector<int>&nums)
{
	int freq=0,ans=0;
	int n=nums.size();
	for(int i=0;i<n;i++)
	{
		if(freq==0)
		{
			ans=nums[i];
		}
		if(ans==nums[i])
		{
			freq++;
		}
		else
		{
			freq--;
		}
	}
	int count=0;
	for(int val:nums)
	{
		if(val==ans)
		{
			count++;
		}
	}
	if(count>n/2)
		return ans;
	else
		return -1;

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
	cout<<moore(nums);
	return 0;
}