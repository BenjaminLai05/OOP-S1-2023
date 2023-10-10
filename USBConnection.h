#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
private:
    int ID;
    static std::stack<int> ids; // stack to keep track of IDs

    // private constructor
    USBConnection(int id) : ID(id) {}

public:
    // static function to create a new object
    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            // No more IDs available
            return nullptr;
        }
        int next_id = ids.top();
        ids.pop();
        return new USBConnection(next_id);
    }

    ~USBConnection() {
        // return the ID to the stack when object is deleted
        ids.push(ID);
    }

    int get_id() const {
        return ID;
    }
};

// initialize the static stack with IDs 3,2,1
std::stack<int> USBConnection::ids = std::stack<int>({3, 2, 1});

#endif // USBCONNECTION_H
