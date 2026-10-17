// Question:
// Write a C++ program using a class named Distance to add two distances
// given in feet and inches. If the total inches are 12 or more,
// convert the extra inches into feet.
// For example:
// Distance 1 = 5 feet 8 inches
// Distance 2 = 3 feet 7 inches
// Result = 9 feet 3 inches.
#include<iostream>
using namespace std;
class Distance
{
    int feet, inches;
public:
    // Constructor
    Distance(int f, int i)
    // Distance(int f= 0, int i = 0)
    {
        feet = f;
        inches = i;
    }
    // Function to convert extra inches into feet
    void convert()
    {
        if (inches >= 12)
        {
            feet = feet + inches / 12;
            inches = inches % 12;
        }
    }
    // Function to add two distances
    Distance add(Distance d)
    {
        // Temporary object
        Distance temp(0, 0);
        // Distance temp;
        // Add feet
        temp.feet = feet + d.feet;

        // Add inches
        temp.inches = inches + d.inches;

        // Call convert function
        temp.convert();

        // Return answer
        return temp;-
    }

    // Display function
    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    int f1, i1, f2, i2;

    // Get first distance
    cout << "Enter feet of first distance: ";
    cin >> f1;

    cout << "Enter inches of first distance: ";
    cin >> i1;

    // Get second distance
    cout << "Enter feet of second distance: ";
    cin >> f2;

    cout << "Enter inches of second distance: ";
    cin >> i2;

    // Create first object
    Distance d1(f1, i1);

    // Create second object
    Distance d2(f2, i2);

    // Add two distances
    Distance result = d1.add(d2);

    // Display result
    cout << "Total distance = ";
    result.display();

    return 0;
}