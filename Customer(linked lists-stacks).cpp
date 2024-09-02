#include <iostream>
#include <string>

using namespace std;

class Request {
public:
    string description;
    Request* next;

    Request(const string& desc) : description(desc), next(nullptr) {}
};

class RequestStack {
    Request* top;
public:
    RequestStack() : top(nullptr) {}

    bool isEmpty() const {
        return top == nullptr;
    }

    void addRequest(const string& desc) {
        Request* newRequest = new Request(desc);
        if (!newRequest) {
            cout << "\nMemory Allocation Failed";
            return;
        }
        newRequest->next = top;
        top = newRequest;
        cout << "\nRequest added: " << desc;
    }

    void processRequest() {
        if (isEmpty()) {
            cout << "\nNo requests to process";
        } else {
            Request* temp = top;
            top = top->next;
            cout << "\nProcessing request: " << temp->description;
            delete temp;
        }
    }

    string peekRequest() const {
        if (!isEmpty())
            return top->description;
        else
            return "No requests available";
    }

    void displayRequests() const {
        if (isEmpty()) {
            cout << "\nNo requests to display";
            return;
        }

        Request* current = top;
        cout << "\nCurrent requests in the stack:\n";
        while (current) {
            cout << "- " << current->description << endl;
            current = current->next;
        }
    }

    ~RequestStack() {
        while (!isEmpty()) {
            processRequest();  
        }
    }
};

int main() {
    RequestStack requestStack;
    int choice;
    string desc;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Request\n";
        cout << "2. Process Request\n";
        cout << "3. View Top Request\n";
        cout << "4. Display All Requests\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                cout << "Enter request description: ";
                getline(cin, desc);
                requestStack.addRequest(desc);
                break;
            case 2:
                requestStack.processRequest();
                break;
            case 3:
                cout << "Top request is: " << requestStack.peekRequest() << endl;
                break;
            case 4:
                requestStack.displayRequests();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
