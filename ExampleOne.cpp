class Example {
public:
    int publicVar;
    void publicFunction() {
        // Accessible from anywhere
    }
};

int main() {
    Example obj;
    obj.publicVar = 5;  // Accessible
    obj.publicFunction();  // Accessible
    return 0;
}
