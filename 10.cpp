#include <iostream>
#include <string>
#include <vector>

using std::string; using std::vector;

class Part {
public:
    string Name, Serial;
    Part(string name, string serial) : Name(name), Serial(serial) {};
};

class Car {
public:
    string Model, Serial;
    vector<Part*> Parts;
    Car(string model, string serial) : Model(model), Serial(serial) {};
};

int main()
{
    Part* wheel = new Part("Michelin", "wr00m1/4");
    Part* hood = new Part("Honda", "blkk1122");
    Car* c = new Car("Honda Civic", "HC1232");
    c->Parts.push_back(wheel);
    c->Parts.push_back(hood);
    
    std::cout << "Car: " << c->Model << "\n Contains parts: " << std::endl;
    for (const Part* p : c->Parts) std::cout << "  " << p->Name << " " << p->Serial << std::endl;
}