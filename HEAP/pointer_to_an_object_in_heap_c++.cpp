#include <iostream>

using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        int area;
        return area=length*breadth;
    }
    int perimeter()
    {
        int perimeter;
        return perimeter=2*(length+breadth);
    }
};
int main()
{
    rectangle *ptr=new rectangle;
    cout<<"enter length=";
    cin>>ptr->length;
    cout<<"enter breadth=";
    cin>>ptr->breadth;
    cout<<"area="<<ptr->area();
    return 0;
}
