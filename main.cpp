// COMSC-210 | Lab 18: Movie Reviews

#include <iostream>
using namespace std;

struct Node {
    float rating;
    string comments;
    Node *next;
};

// prototypes
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

            } while (yn == "y" || yn == "Y");   // repeat while the answer is y or Y
        }
        else
            cout << "Please enter choices correctly (option 1 or 2) and try again" << endl << endl;
    
    } while (choice != 1 && choice != 2);   // repeat while the choice is not equal to 1 and 2

    outputReviews(head, count);     // output the data after entered all the informations

    return 0;
}

Node *addNodesToHead(Node *head, float rating, string comments) {
    Node *newNode = new Node;       // add new node
    newNode->rating = rating;       // add rating in new node
    newNode->comments = comments;   // add comments in new node
    newNode->next = head;           // 

    return newNode;
}

Node *addNodesToTail(Node *head, float rating, string comments) {
    Node *newNode = new Node;       // add new node
    newNode->rating = rating;       // add rating in new node
    newNode->comments = comments;   // add comments in new node
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return head;
    }
    
    return newNode;
}

void outputReviews(Node *head, int count) {

    cout << "Outputting all reviews:" << endl;
    cout << "\t> Review #" << count << ": " << endl;
    cout << "\t> Average: " << endl;
}