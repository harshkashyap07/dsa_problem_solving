#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n=9;
	int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
	int max_sum=INT_MIN;
	for(int st=0;st<n;st++)
	{
		int currsum=0;
		for(int end=st;end<n;end++)
		{
			currsum+=arr[end];
			max_sum=max(currsum,max_sum);
		}
	}
	cout<<max_sum<<endl;
	return 0;
}