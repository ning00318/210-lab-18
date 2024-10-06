#include <iostream>
using namespace std;

struct Node {
    float rating;
    string comments;
    Node *next;
};

void addNodesToHead(Node *);
void addNodesToTail(Node *);

int main() {
    int choice;
    Node *head = nullptr;

    do {
        cout << "Which linked list method should we use?" << endl;
        cout << "\t[1] New nodes are added at the head of the linked list" << endl;
        cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
        cout << "\tChoice: ";
        cin >> choice;

        if (choice == 1) {
            addNodesToHead(head);
        }
        else if (choice == 2) {
            addNodesToTail(head);
        }
        else
            cout << "Please enter choices correctly (option 1 or 2) and try again" << endl;
    } while (choice != 1 || choice != 2);

    return 0;
}