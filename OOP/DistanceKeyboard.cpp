
// Question:
// Write a C++ program using a class named Distance to add two distances.
// Take feet and inches of both distances from the keyboard.
// If total inches are 12 or more, convert them into feet.
// Display the final distance.
#include <iostream>
using namespace std;
class Distance
{
    private:
    int feet, inches;

public:

    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // Function to add two distances
    Distance add(Distance d)//Declared a function with name add and type Distance(class). call it (d1.add(d2))
    {
        // Temporary object to store the answer
         Distance temp(0, 0);

        // Add feet
        temp.feet = feet + d.feet;

        // Add inches
        temp.inches = inches + d.inches;

        // Convert inches into feet
        if (temp.inches >= 12)
        {
            temp.feet = temp.feet + temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        // Return the answer
        return temp;
    }

    // Display the distance
    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    int f1, i1, f2, i2;

    // Take first distance from keyboard
    cout << "Enter feet of first distance: ";
    cin >> f1;

    cout << "Enter inches of first distance: ";
    cin >> i1;

    // Take second distance from keyboard
    cout << "Enter feet of second distance: ";
    cin >> f2;

    cout << "Enter inches of second distance: ";
    cin >> i2;

    // Create first object using keyboard values
    Distance d1(f1, i1);

    // Create second object using keyboard values
    Distance d2(f2, i2);

    // Add d1 and d2
    // d2 is passed to the add() function
    // The returned answer is stored in result
    Distance result = d1.add(d2);

    // Display final answer
    cout << "Total distance = ";
    result.display();

    return 0;
}