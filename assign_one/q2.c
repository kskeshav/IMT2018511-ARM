#include<stdio.h>
int main(int argc, char const *argv[])
{
	int mx = 0;
	int n = 15;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		if(mx<arr[i]){
			mx = arr[i];
		}
	}
	printf("%d\n",mx);
	return 0;
}