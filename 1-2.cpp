// 1주차 문제 2

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	stack<int> my_stack;
	int NumOfOrder;
	string Order;

	cin >> NumOfOrder;
	for (int i = 0; i < NumOfOrder; i++) {
		cin >> Order;
		if (Order == "push") {
			int push_num;
			cin >> push_num;
			my_stack.push(push_num);
		}
		else if (Order == "top") {
			if (my_stack.size() != 0) {
				cout << my_stack.top() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (Order == "size") {
			cout << my_stack.size() << endl;
		}
		else if (Order == "empty") {
			if (my_stack.size() == 0) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
		else if (Order == "pop") {
			if (my_stack.size() != 0) {
				cout << my_stack.top() << endl;
				my_stack.pop();
			}
			else
				cout << -1 << endl;
		}
	}
	return 0;
}