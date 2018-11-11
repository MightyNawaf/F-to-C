#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter your score Biatch: ";
    cin >> score;

    if (score == 95, 96, 97, 98, 99, 100)
        {
            cout << "You got the perfect score AKA A+" << endl;
        }
                else if (score == 90, 91, 92, 93, 94){
                    cout << "You got A" << endl;
                }

                else if (score == 85, 86, 87 ,88 ,89){
                     cout << "You got B+" << endl;
                }

                else if (score == 80, 81, 82, 83, 84){
                    cout << "You got B" << endl;
                }

                else if (score == 75, 76, 77, 78, 79){
                    cout << "You got C+" << endl;
                }

                else if (score == 70, 71, 72, 73, 74){
                    cout << "You got C" << endl;
                }

                else if (score == 65, 66, 67, 68, 69){
                    cout << "You got D+" << endl;
                }
                else if (score == 60, 61, 62, 63, 64){
                    cout << "You got D" << endl;
                }


        else {
            cout << "You got F" << endl;
        }



    return 0;
}
