#include <bits/stdc++.h> 

void sort(stack<int> &s, int value)
{
	if(s.empty())
	{
		s.push(value);
		return;
	}
	else if(value >= s.top())
	{
		s.push(value);
		return;
	}
	else
	{
		int m = s.top();
		s.pop();
		sort(s, value);
		s.push(m);
	}
}

void solve(stack<int> &s)
{
	if(s.empty())
	return;
	int top = s.top();
	s.pop();
	solve(s);
	sort(s, top);
}

void sortStack(stack<int> &s)
{
	// Write your code here
	solve(s);
}
