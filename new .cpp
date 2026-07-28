#include <iostream>
using namespace std;

class node {
public:
    int first;
    node* next;
    node(int num) {
        first = num;
        next = nullptr;
    }
};

int main() {
	node* head = new node(1);
    head->next = new node(2);
    int n, num;
    cin >> n;
    cin >> num;
	int cnt = 1;
    node* cur = head;
	while (cnt < n && cur != nullptr) {
	    cur = cur->next;
	    cnt = cnt + 1;
	}
	if(cur == nullptr) {
		return 0;
	}
	node* newNode = new node(num);
	newNode->next = cur->next;
	cur->next = newNode;
}
