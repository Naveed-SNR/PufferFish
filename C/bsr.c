	#include <stdio.h>

int main(void)
{
	int A[5]={11,7,30,29,21};
	int f = 0, l = 4, mid, key, c = 0;

	printf("Enter the key: ");
	scanf("%d", &key);

	while(f<=l)
	{
		mid = (f + l)/2;
		if (key == A[mid])
		{
			c++;
			printf("Element found at A[%d]", mid+1);
			break;
		}
		else if(key > A[mid])
		{
			f = mid + 1;
		}
		else if(key < A[mid])
		{
			f = mid - 1;
		}
	}
	if (c==0)
	printf("Key not found!");
	
	
}