#include <stdio.h>

typedef struct linkedlist
{
	int data;
	ll *next;
}ll;

int main(void)
{
	ll *base = 0, *temp, *final;
	int i = 0;
	
	while (i < 5)
	{
		temp = (ll *)malloc(sizeof(ll));
		scanf("%d", &temp -> data);
		temp -> next = 0;
		i++;

		if (base == 0)
			base = temp;
		else
		{
			final = base;
			while (final -> next != 0)
				final = final -> next;
			final -> next = temp;
		}
		final = base;
	}

	while (final != 0)
	{
		printf("\n%d\n", final -> data);
		final = final -> next;
	}

	return 0;
	
}