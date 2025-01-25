#include <iostream> 
#include <string> 
using namespace std; 


struct person 
{
    int age; 
    string lastname; 
};

int main() 
{
    setlocale(LC_ALL, "ru");
    const int size = 50;

    struct person people[size] = {
        {53, "Fadeev"}, 
        {49, "Stanislavchik"}, 
        {52, "Krilov"}, 
        {60, "Ivanov"},
        {45, "Petrov"}, 
        {58, "Sidorov"},
        {70, "Kuznetsov"}
    };

    cout << "Люди, фамилии которых заканчиваются на 'ов' и возраст больше 50 лет:" << endl;
    for (int i = 0; i < size; i++)
    {
        if (people[i].lastname.size() >= 2
            && people[i].lastname.substr(people[i].lastname.size() - 2) == "ov"
            && people[i].age >= 50)
        {
            cout << "Age: " << people[i].age << " Lastname: " << people[i].lastname << " ";
        }
    }

}


