#include "stackForQueue.h"

int main()
{
	StackForQueue q;
	q.push(1);
	q.push(2);
	q.push(3);
	int value = q.pop();
	printf("%d\n", value);
	return 0;
}