// In C++, you can create user-defined exceptions by defining your own exception classes. Creating your own exception classes allows you to provide more context-specific information about the error and customize how it is handled.




#include <stdexcept>
#include <iostream> 
using namespace std;

class MyCustomException : public exception {
public:
    MyCustomException(const char* message) : msg(message) {}

    // Override the what() method to provide an error message.
    const char* what() const throw() {
        return msg.c_str();
    }

private:
    string msg;
};

int main() {
    try {
        // Code that might throw your custom exception
        throw MyCustomException("Custom exception message");
    }
    catch (const MyCustomException& ex) {
        // Handle the custom exception
        cout << "Caught custom exception: " << ex.what() << endl;
    }

    return 0;
}