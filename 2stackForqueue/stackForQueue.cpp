#include "stackForQueue.h"

int StackForQueue::pop()
{
	if (0 != s2.size())
	{
		int value = s2.top();
		s2.pop();
		return value;
	}
	//s1 to s2
	while ( !s1.empty() )
	{
		int value = s1.top();
		s1.pop();
		s2.push(value);
	}
	if (0 != s2.size())
	{
		int value = s2.top();
		s2.pop();
		return value;
	}
}

void StackForQueue::push(int value)
{
	s1.push(value);
	return ;
}

int StackForQueue::size()
{
	return s1.size() + s2.size();
}