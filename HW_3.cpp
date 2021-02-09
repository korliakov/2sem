#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < N+1; j++)
        {
            if (j == N)
                cout << "*" << endl;
            else
                cout << "*" << "";
        }


    }
}
