#include <bits/stdc++.h>
using namespace std;
string int_to_str(int number)
{
    string s;
    while (number != 0)
    {
        s += char('0' + number % 10);
        number /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}
void get_time(string name, vector<double> &data)
{
    clock_t start, end;
    double time_use;
    for (int i = 1; i <= 10; ++i)
    {
        start = clock();
        system((name + ".exe " + int_to_str(i)).c_str());
        end = clock();
        time_use = (double)(end - start) / CLOCKS_PER_SEC;
        data.push_back(time_use);
    }
}
int main()
{
    system("createTest.exe");
    cout << "Completely Create Test\n";
    vector<double> t1, t2, t3, t4;
    get_time("heapsort", t1);
    get_time("mergesort", t2);
    get_time("quicksort", t3);
    get_time("sort_std", t4);

    cout << "Time Comparison Sort Table\n";
    cout << "##########################################\n";
    cout << setw(10) << "Sort/Case";
    for (int i = 1; i < 11; i++)
        cout << setw(10) << "test " + int_to_str(i);
    cout << "\n";
    cout << setw(10) << "HEADSORT";
    for (int i = 0; i < 10; i++)
        cout << setw(10) << t1[i];
    cout << "\n";
    cout << setw(10) << "MERGESORT";
    for (int i = 0; i < 10; i++)
        cout << setw(10) << t2[i];
    cout << "\n";
    cout << setw(10) << "QUICKSORT";
    for (int i = 0; i < 10; i++)
        cout << setw(10) << t3[i];
    cout << "\n";
    cout << setw(10) << "SORT_STD";
    for (int i = 0; i < 10; i++)
        cout << setw(10) << t4[i];
    cout << "\n";
    system("pause");

    return 0;
}
