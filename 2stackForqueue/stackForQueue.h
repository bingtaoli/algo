#include <stack>
#include <deque>
using namespace std;

class StackForQueue
{
private:
	stack<int> s1;
	stack<int> s2;
public:
	int pop();
	void push(int value);
	int size();
};