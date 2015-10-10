#include<bits/stdc++.h>
using namespace std;
void findClosest(int A[], int B[], int C[],int p, int q, int r)
{
	int i=0,j=0,k=0;
	int res_i, res_j, res_k;
	int diff=INT_MAX;
	while(i<p && j<q && k<r)
	{
		int minimum=min(A[i],min(B[j],C[k]));
		int maximum=max(A[i],max(B[j],C[k]));
		int temp=maximum-minimum;
		
		if(diff>temp)
		{
			diff=temp;
			res_i=i;
			res_j=j;
			res_k=k;
		}
		if(diff<0)
			break;
		if(minimum==A[i])
			i++;
		else if(minimum==B[j])
			j++;
		else
			k++;
		
	}
	cout<<"("<<A[res_i]<<","<<B[res_j]<<","<<C[res_k]<<")";
}
// Driver program
int main()
{
    int A[] = {1, 4, 10};
    int B[] = {2, 15, 20};
    int C[] = {10, 12};
 
    int p = sizeof A / sizeof A[0];
    int q = sizeof B / sizeof B[0];
    int r = sizeof C / sizeof C[0];
 
    findClosest(A, B, C, p, q, r);
    return 0;
}
