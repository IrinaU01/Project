#include <iostream>
using namespace std;

class Rectangle
{
private:
    int x;
    const int H;
public:
    Rectangle(int x, const int H) :x{ x }, H{ H }
    {

    }
   
    int getX()
    {
        return x;
    }
    int getH()
    {
        return H;
    }

    void show()
    {
        cout << x << " "<< H << endl;
    }
   
};

int main()
{
    int x = 10;
    Rectangle r{ x,125 };
    r.show();
    return 0;
}
