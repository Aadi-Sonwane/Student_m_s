/* Abstaction  :
            Abstraction is one of the most important  part of oops that referce to shows relevenet data to the user and hide irrelevent data form the end user 
            it is basically hide the implimentation logic and shows user interce things 
            e.g : when we can turn on tv that time we just presess the remote button and tv gets start bt the did't show how the process takes place in the background


            Abstraction means displaying only essential information and hiding the details
*/

#include <iostream>
#define PI 3.14
using namespace std;

class circle
{
private:
    float radius;

public:
    void get_data()
    {
        cout << "Enter the radius of circle";
        cin >> radius;
    }

    float area()
    {
        return (PI * radius * radius);
    }
};

int main()
{
    circle c;
    c.get_data();
    cout << "Area of circle is " << c.area();

    return 0;
}
