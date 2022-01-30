#include <iostream>
#define PI 3.142

using namespace std;
// declaring class
class circle
{
private:
    float radius; // private variables radius
public:
    // function to get value of radius from the user
    void get_radius(void)
    {
        cout << "Enter radius of circle" << endl;
        cin >> radius;
    }
    // declaring function to calculate area of the circle
    float area(void)
    {
        return (PI * radius * radius);
    }
    // declaring function to calculate circumference of the circle
    float circumference(void)
    {
        return (PI * 2 * radius);
    }
};
//implementation of the class
int main()
{
    // creating object of declared class
    circle c;
    c.get_radius();
    cout << " AREA = " << c.area() << endl;
    cout << " CIRCUMFERENCE = " << c.circumference() << endl;
    return 0;
}