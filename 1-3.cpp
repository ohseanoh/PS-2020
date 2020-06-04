// 1주차 문제 3

#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
	deque<int> my_deque;
	int NumOfOrder;
	string Order;

	cin >> NumOfOrder;
	for (int i = 0; i < NumOfOrder; i++) {
		cin >> Order;
		if (Order == "push_front") {
			int push_num;
			cin >> push_num;
			my_deque.push_front(push_num);
		}
		else if (Order == "push_back") {
			int push_num;
			cin >> push_num;
			my_deque.push_back(push_num);
		}
		else if (Order == "front") {
			if (my_deque.size() != 0) {
				cout << my_deque.front() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (Order == "back") {
			if (my_deque.size() != 0) {
				cout << my_deque.back() << endl;
			}
			else
				cout << -1 << endl;
		}
		else if (Order == "size") {
			cout << my_deque.size() << endl;
		}
		else if (Order == "empty") {
			if (my_deque.size() == 0) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
		else if (Order == "pop_front") {
			if (my_deque.size() != 0) {
				cout << my_deque.front() << endl;
				my_deque.pop_front();
			}
			else
				cout << -1 << endl;
		}
		else if (Order == "pop_back") {
			if (my_deque.size() != 0) {
				cout << my_deque.back() << endl;
				my_deque.pop_back();
			}
			else
				cout << -1 << endl;
		}
	}
	return 0;
}