#include <iostream>
using namespace std;

class alpha
{
    protected:
    alpha()
    {
        cout << "Alpha constructor is called" << endl;
    }
};

class beta
{
    protected:
    beta()
    {
        cout << "Beta constructor is called" << endl;
    }
};

class gamma:public alpha, public beta
{
    public:
    gamma()
    {
        cout << "Gamma constructor is called" << endl;
    }
};

int main()
{
    gamma g;

    return 0;
}
