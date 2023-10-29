#include <iostream>
using namespace std;
int main()
{
    int wallet, people_num;
    cout << "Enter How much money is present in ATM: ";
    cin >> wallet;
    cout << "Enter number of people: ";
    cin >> people_num;
    int ans[people_num];
    for (int i = 0; i < people_num; i++)
    {
        int k = 0;

        cout << "User " << i + 1 << ": " << endl;
        cout << "Enter amount you want to withdraw: ";
        cin >> k;
        if (k > wallet)
            ans[i] = 0;
        else
        {
            ans[i] = 1;
            wallet -= k;
        }
    }
    for (int i = 0; i < people_num; i++)
        cout << ans[i];
    return 0;
}
