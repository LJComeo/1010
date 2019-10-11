#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//�����Ǽ��popV�ǲ���ջ����pushV����ѹ�룬Ȼ����ܵĵ���������
bool IsPopOrder(vector<int> pushV, vector<int> popV)
{
	stack<int> tmp;//����һ��ջ����pushV����ѹ��
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