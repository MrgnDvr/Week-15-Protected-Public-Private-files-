class Base {
protected:
    int protectedVar;
    void protectedFunction() {
        // Accessible within the class and derived classes
    }
};

class Derived : public Base {
public:
    void accessProtectedMembers() {
        protectedVar = 10;  // Allowed
        protectedFunction();  // Allowed
    }
};

int main() {
    Derived obj;
    obj.accessProtectedMembers();  // Allowed
    // obj.protectedVar = 5;  // Error: protectedVar is not accessible outside the class hierarchy
    // obj.protectedFunction();  // Error: protectedFunction is not accessible outside the class hierarchy
    return 0;
}
