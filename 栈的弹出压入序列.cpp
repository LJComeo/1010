#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//本题是检查popV是不是栈按照pushV序列压入，然后可能的弹出的序列
bool IsPopOrder(vector<int> pushV, vector<int> popV)
{
	stack<int> tmp;//创建一个栈来让pushV进行压入
	int i = 0;
	for (auto & vi : pushV)
	{
		tmp.push(vi);
		for (; !tmp.empty() && tmp.top() == popV[i]; i++)
		{
			tmp.pop();
		}
	}
	return tmp.empty();
}

int main()
{
	vector<int> puv{ 1, 2, 3, 4, 5 };
	vector<int> pov{ 4, 5, 1, 2, 3 };

	cout << IsPopOrder(puv, pov);



	return 0;
}