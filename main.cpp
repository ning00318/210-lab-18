#include <iostream>
using namespace std;

struct Node {
    float rating;
    string comments;
    Node *next;
};

void addNodesToHead(Node*, float, string);
void addNodesToTail(Node*, float, string);

int main() {
    Node *head = nullptr;
    int choice;
    float rating;
    string comments;
    string yn;

    do {
        cout << "Which linked list method should we use?" << endl;
        cout << "\t[1] New nodes are added at the head of the linked list" << endl;
        cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
        cout << "\tChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1 || choice == 2) {
            do {
                cout << "Enter review rating 0-5: ";
                cin >> rating;
                cin.ignore();

                cout << "Enter review comments: ";
                getline(cin, comments);

                if (choice == 1)
                    addNodesToHead(head, rating, comments);
                else
                    addNodesToTail(head, rating, comments);
                
                cout << "Enter another review? Y/N: ";
                getline(cin, yn);

            } while (yn == "y" || yn == "Y");
        }
        else
            cout << "Please enter choices correctly (option 1 or 2) and try again" << endl << endl;
    
    } while (choice == 1 || choice == 2);

    return 0;
}

void addNodesToHead(Node *head, float rating, string comments) {
    
}

void addNodesToTail(Node *head, float rating, string comments) {
    
}