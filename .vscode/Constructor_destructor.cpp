/*
Constructors and destructors

1.constructor:its manly used for initialize the data members
 its have to type 
 1.default constructor: constructor without parameter 
 2.parameterized constructor : constructor with parameter

*/
#include <iostream>
using namespace std;
class Car
{
string name;
string id;
float  mileage;
float distanceTravelled;

public:
Car()
{
    cout<<"default constructor "<<endl;
    distanceTravelled = 0;

}
Car(string name, string id)
{
    cout<<"parameterised constructor"<<endl;
    this->name =name; // this is used to represent this pointer

    this->id = id;
    distanceTravelled =0;
}
~Car()
{
    cout<<"Destructor called"<<endl;
}
string getName()
{
    return this->name;
}
string getId()
{
return this->id;
}
float getMileage();
void travel(float);
float getDistanceTravelled();
};
float Car::getMileage()
{
    return mileage;

}
void Car:: travel(float kmsTravelled)
{
    distanceTravelled += kmsTravelled;
}
float Car::getDistanceTravelled()
{
    return this->distanceTravelled;
}
int main()
{
Car c1("sahil","1234");
Car c2();
cout<< c1.getName()<<endl;
cout<< c1.getDistanceTravelled()<<endl;
c1.travel(999);
cout<<c1.getDistanceTravelled()<<endl;

}