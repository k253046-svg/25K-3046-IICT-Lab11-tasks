#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee is working" << endl;
    }
};
class Manager : public Employee {
public:
    void work() {
        cout << "Manager is managing work" << endl;
    }
};

int main() {
    Employee *e;
    Manager m;
    e = &m;
    e->work();
    return 0;
}

