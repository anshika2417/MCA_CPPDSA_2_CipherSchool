#include<iostream>
using namespace std;

class Distance{
    private:
    int meter;
    
    friend int increadeDistance(Distance);

    public:
    Distance()
    {
        meter=0;
    }
};

int increadeDistance(Distance d){
    d.meter+=10;
    return d.meter;
}

int main()
{
    Distance d1;
    cout<<increadeDistance(d1);
}