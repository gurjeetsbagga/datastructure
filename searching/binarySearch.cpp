#include <stdio.h>

function binasrySearch(int left, int mid, int right, int data, int arr)
{
	if (data == arr[mid])
	{
		return data;
	}

    if (data < arr[mid])
	{
		binarySearch(left,mid/2,mid,data, arr);
	}
	else
	{
		binarySearch(mid, (right-mid)/2, right, arr);
	}
}
int main()
{
    int data = 5;
    int arr = [2,6,8,9,11,14,15,18,19,20,25,26,28,29, 30, 34, 38, 39, 41 42 47,49]
    printf("hello %d",binarySearch(0,sizeof(arr)/2,sizeof(arr),data));
}
