// 1주차 문제 1

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	queue<int> my_queue;
	int NumOfOrder;
	string Order;

	cin >> NumOfOrder;
	for (int i = 0; i < NumOfOrder; i++) {
		cin >> Order;
		if (Order == "push") {
			int push_num;
			cin >> push_num;
			my_queue.push(push_num);
		}
		else if (Order == "front") {
			if (my_queue.size() != 0) {
				cout << my_queue.front() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (Order == "back") {
			if (my_queue.size() != 0) {
				cout << my_queue.back() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (Order == "size") {
			cout << my_queue.size() << endl;
		}
		else if (Order == "empty") {
			if (my_queue.size() == 0) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
		else if (Order == "pop") {
			if (my_queue.size() != 0) {
				cout << my_queue.front() << endl;
				my_queue.pop();
			}
			else
				cout << -1 << endl;
		}
	}
	return 0;
}