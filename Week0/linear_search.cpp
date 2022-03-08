#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void search(double [], int, double);

int main()
{
  int t, number;
  int key;
  vector <int> numbers;
  fstream file("data.txt", ios::out|ios::in);
  getline(file, line);
  t = int(line[0])-48;
  cout << "There are " << t << " test cases." << endl;
  while(file)
  {
    double a[line.size()];
    for (i=0; i<line.size(); i++)
      file >> a[i];
    for (j=0; j<i; j++)
      cout << a[j] << " ";
    cout << "Enter the key." << endl;
    cin >> key;
    search(a, i, key);
    j = 0;
  }
  file.close();
}

void search(double a[], int length, double key)
{
  int i, flag = 1, ctr = 0;
  for (i=0; i<length; i++)
  {
    if (a[i] == key)
    {
      flag = 0;
      break;
    }
    ctr++;
  }
  if (flag)
    cout << key << " is not present in this line.\nIt took " << ctr << " tries to figure this out." << endl;
  else
    cout << key << " is present in this line.\nIt took " << ctr << " tries to figure this out." << endl;
}
