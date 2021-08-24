#include<stdio.h>
int main(int argc, char const *argv[])
{
	int c = 0;
	int n = 20;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0){
			c+=1;
		}
	}
	printf("%d\n",c);
	return 0;
}