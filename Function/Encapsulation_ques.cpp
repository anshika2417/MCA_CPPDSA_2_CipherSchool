#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNumber;
    int age;
    char grade;

    public:
    
    Student(string name, int rollNumber, int age, char grade)
    {
        this->name=name;
        this->rollNumber=rollNumber;
        this->age=age;
        this->grade=grade;
    }

    void setName(string newName)
    {
        name=newName;
    }
    void setRollNumber(int newRollNumber)
    {
        rollNumber=newRollNumber;
    }
    void setAge(int newAge)
    {
        age=newAge;
    }
    void setGrade(char newGrade)
    {
        grade=newGrade;
    }

    string getName()
    {
        return name;
    }
    int getRollNumber()
    {
        return rollNumber;
    }
    int getAge()
    {
        return age;
    }
    char getGrade()
    {
        return grade;
    }
};

int main()
{
    Student s("Anshika",9,21,'A');
    cout<<s.getName()<<endl;
    s.setName("Kishan");
    cout<<s.getName()<<endl;


}