#include<iostream>
using namespace std;

class parent
{
public:
      void exam()
    {
        cout<<"Do not ignore me";
    }
};

class child: public parent
{
public:
    virtual void exam()
    {
        cout<<"Ignore me";
    }
};

int main()
{
    parent *obj;
    child obj2;

    obj = &obj2;
    obj -> exam();
    return 0;
}
