#include <iostream>
using namespace std;

struct Node {
    float rating;
    string comments;
    Node *next;
};

Node *addNodesToHead(Node*, float, string);
Node *addNodesToTail(Node*, float, string);
void outputReviews(Node*, int);

int main() {
    Node *head = nullptr;
    int choice;
    float rating;
    string comments;
    string yn;
    int count = 0;

    do {
        cout << "Which linked list method should we use?" << endl;
        cout << "\t[1] New nodes are added at the head of the linked list" << endl;
        cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
        cout << "\tChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1 || choice == 2) {
            do {
                count++;
                cout << "Enter review rating 0-5: ";
                cin >> rating;
                cin.ignore();

                cout << "Enter review comments: ";
                getline(cin, comments);

                if (choice == 1)
                    head = addNodesToHead(head, rating, comments);
                else
                    head = addNodesToTail(head, rating, comments);
                
                cout << "Enter another review? Y/N: ";
                getline(cin, yn);

            } while (yn == "y" || yn == "Y");
        }
        else
            cout << "Please enter choices correctly (option 1 or 2) and try again" << endl << endl;
    
    } while (choice != 1 && choice != 2);

    outputReviews(head, count);

    return 0;
}

Node *addNodesToHead(Node *head, float rating, string comments) {
    Node *newNode = new Node;
    newNode->rating = rating;
    newNode->comments = comments;
    newNode->next = head;

    return newNode;
}

Node *addNodesToTail(Node *head, float rating, string comments) {
    Node *newNode = new Node;
    newNode->rating = rating;
    newNode->comments = comments;
    newNode->next = nullptr;
    
    return newNode;
}

void outputReviews(Node *head, int count) {

    cout << "Outputting all reviews:" << endl;
    cout << "\t> Review #" << count << ": ";
    cout << "\t> Average: ";
}