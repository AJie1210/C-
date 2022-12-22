#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
  ifstream file("a.txt");
  double num[200] = {0.0};
  char op[200] = {'\0'};
  int index = 0;
  while (file.peek() != EOF)
  {
    file >> num[index];
    file >> op[index];
    index++;
  }
  file.close();

  double result = num[0];
  for (int i = 0; i < index; i++)
  {
    cout << num[i] << op[i];
    if (op[i] == '+')
    {
      result = result + num[i + 1];
    }
    else if (op[i] == '-')
    {
      result = result - num[i + 1];
    }
    else if (op[i] == '*')
    {
      result = result * num[i + 1];
    }
    else if (op[i] == '/')
    {
      result = result / num[i + 1];
    }
    else if (op[i] == '=')
    {
      break;
    }
  }
  cout << round(result);
  system("pause");
  return 0;
}