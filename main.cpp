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
    Node *head = nullptr;
    int choice;
    int rating;
    string comments;

    do {
        cout << "Which linked list method should we use?" << endl;
        cout << "\t[1] New nodes are added at the head of the linked list" << endl;
        cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
        cout << "\tChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1 || choice == 2) {
            cout << "Enter review rating 0-5: ";
            cin >> rating;
            cin.ignore();

            cout << "\nEnter review comments: ";
            getline(cin, comments);

            if (choice == 1)
                addNodesToHead(head);
            else
                addNodesToTail(head);            
        }
        else
            cout << "Please enter choices correctly (option 1 or 2) and try again" << endl;
    
    } while (choice != 1 || choice != 2);

    return 0;
}

void addNodesToHead(Node *head) {
    
}

void addNodesToTail(Node *head) {
    
}