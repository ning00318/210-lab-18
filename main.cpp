#include <iostream>
using namespace std;

struct Node {
    float rating;
    string comments;
    Node *next;
};



int main() {
    int choice;

    do {
        cout << "Which linked list method should we use?" << endl;
        cout << "\t[1] New nodes are added at the head of the linked list" << endl;
        cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
        cout << "\tChoice: ";
        cin >> choice;

        if (choice == 1) {

        }
        else if (choice == 2) {

        }
        else
            cout << "Please enter choices correctly (option 1 or 2) and try again" << endl;
    } while (choice != 1 || choice != 2);

    return 0;
}