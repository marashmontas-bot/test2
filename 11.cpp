#include <vector>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество элементов массива: ";
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n, i++;) 
    {
        cout << "Введите " << i + 1 << "элемент" << endl;
        cin >> a[i];
    }


}

