#include <iostream>
using namespace std;

struct Node {
    float rating;
    string comments;
    Node *next;
};



int main() {
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cout << "\tChoice: ";
    cin >> choice;

    while (choice == 1 || choice == 2) {
        
    }

    return 0;
}