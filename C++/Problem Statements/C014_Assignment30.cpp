#include <iostream>
using namespace std;
struct company
{
    string name;
    int salary;
    int days;
    int hours;

} details[10];

int main()
{
    cout << "Enter details: ";
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, details[i].name);
        cout << "Number of days worked: ";
        cin >> details[i].days;

        for (int j = 0; j < details[i].days; j++)
        {
        start:
            cout << "\nHours worked on day " << j + 1 << " : ";
            cin >> details[i].hours;
            if (details[i].hours >= 8 && details[i].hours < 10)
                details[i].salary += 50;
            else if (details[i].hours >= 10 && details[i].hours < 12)
                details[i].salary += 100;
            else if (details[i].hours >= 12)
                details[i].salary += 150;
            else if (details[i].hours < 0 && details[i].hours > 16)
            {
                cout << "\nInvalid Input";
                goto start;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "\nEmployee No.: " << i + 1;
        cout << "\nName: " << details[i].name;
        cout << "\nSalary: " << details[i].salary;
    }
}
