 #include <iostream>
using namespace std;

int main() {
    // Basic Data Types
    int age = 30;
    float temperature = 98.6;
    double distance = 12345.67;
    char initial = 'J';
    bool isOpen = true;

    // Modifiers
    unsigned int positiveCount = 100;
    short int smallNumber = -5;
    long int largeNumber = 1000000;
    long long int veryLargeNumber = 1000000000000;

    // Derived Data Types
    int numbers[5] = {1, 2, 3, 4, 5};
    int* ptr = &age;
    int& ref = age;

    // User-Defined Data Types
    struct Person {
        string name;
        int age;
    };
    Person person1 = {"Alice", 25};

    class Car {
    public:
        string model;
        int year;
        void display() {
            cout << model << " " << year << endl;
        }
    };
    Car car1 = {"Toyota", 2020};

    union Data {
        int intValue;
        float floatValue;
        char charValue;
    };
    Data data;
    data.intValue = 10;

    enum Color { RED, GREEN, BLUE };
    Color color = GREEN;

    // Output some of the values
    cout << "Age: " << age << endl;
    cout << "Temperature: " << temperature << endl;
    cout << "Distance: " << distance << endl;
    cout << "Initial: " << initial << endl;
    cout << "Is Open: " << isOpen << endl;
    cout << "Positive Count: " << positiveCount << endl;
    cout << "Small Number: " << smallNumber << endl;
    cout << "Large Number: " << largeNumber << endl;
    cout << "Very Large Number: " << veryLargeNumber << endl;
    cout << "First Number in Array: " << numbers[0] << endl;
    cout << "Pointer to Age: " << *ptr << endl;
    cout << "Reference to Age: " << ref << endl;
    cout << "Person's Name: " << person1.name << endl;
    car1.display();
    cout << "Data Int Value: " << data.intValue << endl;
    cout << "Color: " << color << endl;

    return 0;
}  
