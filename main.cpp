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
void outputReviews(Node*);

int main() {
    Node *head = nullptr;   // initialize
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

    outputReviews(head);     // output the data after entered all the informations

    return 0;
}

Node *addNodesToHead(Node *head, float rating, string comments) {
    Node *newNode = new Node;       // add new node
    newNode->rating = rating;       // add rating in new node
    newNode->comments = comments;   // add comments in new node
    newNode->next = head;           // 

    return newNode;     // return new head to the new node
}

Node *addNodesToTail(Node *head, float rating, string comments) {
    Node *newNode = new Node;       // add new node
    newNode->rating = rating;       // add rating in new node
    newNode->comments = comments;   // add comments in new node
    newNode->next = nullptr;

    if (head == nullptr) {      // if head is null
        head = newNode;
        return head;
    }

    Node *current = head;
    while (current->next != nullptr) {  // while current-> is not null,
        current = current->next;        // move to the next until reach the last one
    }
    current->next = newNode;  // add new node to the last

    return head;
}

void outputReviews(Node *head) {
    cout << "Outputting all reviews:" << endl;
    Node *current = head;
    int i = 1;
    float total = 0.0;

    while (current != nullptr) {    // while current is not empty, same as while(!current)
        cout << "\t> Review #" << i++ << ": ";
        cout << current->rating << ": " << current->comments << endl;

        total += current->rating;
        current = current->next;
    }
    
    float average = total / i;
    cout << "\t> Average: " << average << endl;
}