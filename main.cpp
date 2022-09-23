#include <iostream>
#include <string>

using namespace std;
int main()
{

    string str;
    char MP[200];
    int i, j, x = 0, y = 0;
    cin.getline(MP, 200);
    str = MP;

    for (i = 0; i < 200; i++)
    {
        if (int(MP[i]) == 65 || int(MP[i]) == 97)
        {
            x = i;
            for (j = 0; j < 200; j++)
            {
                if (int(MP[j]) == 76 || int(MP[j]) == 108)
                {
                    y = j;
                }
            }
            str.erase(x, y);
            break;
        }
    }

    cout << "Ans=" << str << endl;

    system("pause");
    return 0;
}