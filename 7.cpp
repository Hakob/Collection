#include <iostream>
using namespace std;

void change(int& x, int& y);
int main()
{
        const int n = 5;
        int a[n];
        for (int i = 0; i < n; i++)
                cin >> a[i];
        for (int i = 0; i <n; i++)
        {
                if(a[i] == 0)
                {
                        for (int j = i; j < z; j++)
                                change(a[j], a[j+1]);
                        z--;   //voroshel hajord 0-i index-@
                        i = -1; // i++-ic heto (tes for cikl@) kditarkvi zangvatsi arajin element@
                }
        }
        cout << "\n - Voch 0-akan tarrer@ berel hajordakanutyan skizb ` "
                 << "chxaxtelov dasavorman hertakanutyun@: " << endl;
        for (int i = 0; i < n; i++)
                cout << a[i] << " ";
        cout << endl;
        return 0;
}

void change(int& x, int& y)
{
        int p = x;
        x = y;
        y = p;
}