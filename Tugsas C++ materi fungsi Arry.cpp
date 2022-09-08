#include <iostream>
using namespace std;
int main()
{
    int x[3] = {1, 5, 4};
    int y[3] = {3, 2, 5};
    int z[3];
    for (int f = 0; f < 3; f++)
    {
        z[f] = x[f] + y[f];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Isi dari variabel index ke " << i << " = " << z[i] << endl;
    }
}