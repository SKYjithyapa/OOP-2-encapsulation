#include <iostream>
using namespace std;

class Employee
{

private:
    string Name;
    string Comapny;
    int Age;

public:
    void setName(string name)
    {
        this->Name = name;
    }

    string getName()
    {

        return this->Name;
    }

    void setAge(int age)
    {
        if (age >= 18)
        {
            this->Age = age; /* code */
        }
    }

    int getAge()
    {

        return this->Age;
    }

    void setCompany(string company)
    {
        this->Comapny = company;
    }

    string getCompany()
    {

        return this->Comapny;
    }

    // In C++, you can call getters and setters within the same class
    // by using the this pointer. The this pointer is a special pointer
    // that points to the instance of the class on which the member function is operating.
    // Here's how you can call getters and setters from
    // within member functions of the same class using the this pointer:

    // Model for employee;

    void IntroduceYourSelf()
    {
        cout << "Name -" << this->getName() << endl;
        cout << "Age -" << this->getAge() << endl;
        cout << "company -" << this->getCompany() << endl;
    }

    Employee(string name, int age, string company)
    {
        Name = name;
        Age = age;
        Comapny = company;
    }
};

int main()
{
    Employee employee1 = Employee("Srijith yaparathna", 23, "Apple");

    employee1.setAge(83);
    employee1.IntroduceYourSelf();

    return 0;
}