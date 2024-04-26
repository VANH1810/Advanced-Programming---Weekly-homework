#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* deleteDuplicates(Node* head)
{
    unordered_map <int, int> mp;
    Node* temp = head;
    Node* previous = nullptr;
    while(temp->next != nullptr)
    {
        if(mp[temp->next->value] > 0)
        {
            temp->next = temp->next->next;
        }
        else
        {
            mp[temp->next->value]++;
            temp = temp->next;
        }
    }
    return head;
    
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        
        Node* newNode = new Node{value, nullptr};
        
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    cout << "Original Linked List: ";
    printList(head);

  
    head = deleteDuplicates(head);

    cout << "Now Linked List: ";
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
