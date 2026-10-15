// Question:
// Write a C++ program using a class named Distance to add two distances
// given in feet and inches. If the total inches are 12 or more,
// convert the extra inches into feet.
// For example:
// Distance 1 = 5 feet 8 inches
// Distance 2 = 3 feet 7 inches
// Result = 9 feet 3 inches.

#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:

    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // Function to add two distances
    Distance add(Distance d)
    {
        // Create a temporary object
        Distance temp(0, 0);

        // Add feet
        temp.feet = feet + d.feet;

        // Add inches
        temp.inches = inches + d.inches;

        // Convert inches into feet if inches >= 12
        if (temp.inches >= 12)
        {
            temp.feet = temp.feet + temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        // Return the final distance
        return temp;
    }

    // Function to display the distance
    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    // First distance
    Distance d1(5, 8);

    // Second distance
    Distance d2(3, 7);

    // Add both distances and store the answer in result
    Distance result = d1.add(d2);

    // Display the result
    result.display();

    return 0;
}