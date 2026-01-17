#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    // Parameterized constructor
    Employee(string n, int a, int s, double sal)
    {
        name = n;
        age = a;
        serviceYear = s;
        salary = sal;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee object destroyed\n";
    }

    // Accessor member functions
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int getServiceYear()
    {
        return serviceYear;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee emp("John Doe", 35, 10, 75000);

    cout << "Name: " << emp.getName() << endl;
    cout << "Age: " << emp.getAge() << endl;
    cout << "Years of Service: " << emp.getServiceYear() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    return 0;
}