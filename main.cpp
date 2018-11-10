#include <iostream>

using namespace std;

int main()
{
    float i;
   cout << "C: \t" << "F: " << endl;
   for (i=0; i=i+1;)
   {
       cout << i <<"\t"<< (i * 9/5) + 32 << endl;
       if (i>29)
        break;
   }
    return 0;
}
