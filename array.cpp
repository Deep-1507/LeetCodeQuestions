#include <iostream>
using namespace std;

int main()
{
    double test_scores[5];

    int a = (sizeof(test_scores) / sizeof(test_scores[0]));
    cout << a << endl;

    cout << "Array before modifying" << endl;

    for (int i = 0; i < a; i++)
    {
        cout << test_scores[i] << " ";
    }
    cout << endl;
    cout << "Modifying Array" << endl;
    int temp = 0;

    for (int i = 0; i < a; i++)
    {
        cout << "Enter the " << i << "st element: ";
        cin >> temp;
        test_scores[i] = temp;
    }
    cout << endl;
    cout << "Array after modifying" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << test_scores[i] << " ";
    }

    return 0;
}