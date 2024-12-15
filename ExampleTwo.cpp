class Example {
private:
    int privateVar;
    void privateFunction() {
        // Accessible only within the class
    }
public:
    void setPrivateVar(int val) {
        privateVar = val;  // Allowed
    }
};

int main() {
    Example obj;
    // obj.privateVar = 5;  // Error: privateVar is not accessible
    // obj.privateFunction();  // Error: privateFunction is not accessible
    obj.setPrivateVar(5);  // Allowed
    return 0;
}
