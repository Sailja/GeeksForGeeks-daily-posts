#include<bits/stdc++.h>
using namespace std;
bool findPairs(int ar[], int n)
{
	map<int, pair<int,int> > Hash;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{     
			int sum=ar[i]+ar[j];
			if(Hash.find(sum)==Hash.end())
				Hash[sum]=make_pair(i, j);
			else
			{
				pair<int, int> pp=Hash[sum];
				cout<<"("<<ar[pp.first]<<","<<ar[pp.second]<<") and ("<<ar[i]<<","<<ar[j]<<")"<<endl;
				return true;
			}
		}
	}
	return false;
}
int main()
{
    int arr[] = {3, 4, 7, 1, 2, 9, 8};
    int n  =  sizeof arr / sizeof arr[0];
    findPairs(arr, n);
    return 0;
}
