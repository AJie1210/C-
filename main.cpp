#include <iostream>
#include <string>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    /*
    (1) 使用C(C++)語言，輸入正整數n，輸出1~n的所有排列。
    (2) 例如：輸入3，輸出為123; 132; 213; 231; 312; 321。
    (3) 程式架構需滿足：
    n=1;
    repeat
      input n;
      output the permutations of 1~n;
    until n==0;
    */

    int n, x, i;
    int array[100];
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        array[i] = i;
    }

    for (i = 1; i <= n; i++)
    {
        cout << array[i] << endl;
    }
    system("pause");
    return 0;
}