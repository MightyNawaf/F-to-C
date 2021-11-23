#include <iostream>

using namespace std;

int main()
{
    float i;
    cout << "C: \t" << "F: " << endl;
    for (i=0; i<31; i++)
    {
        cout << i <<"\t"<< (i * 9/5) + 32 << endl;
    }
    return 0;
}
