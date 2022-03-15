#include <bits/stdc++.h>
#define _for(i, a, b) for (int i = (a), _b = (b); i < _b; ++i)

using namespace std;

string int_to_str(int number)
{
    string s = "";
    while (number != 0)
    {
        s += char('0' + number % 10);
        number /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}
void test_1()
{
    ofstream fi;
    fi.open("test1.inp");
    int n = 1000000;
    fi << n << "\n";
    vector<int> q(n);
    _for(i, 0, n) q[i] = (rand() * rand()) % 100000000;
    sort(q.begin(), q.end());
    _for(i, 0, n) fi << q[i] << " ";
    fi.close();
}

void test_2()
{
    ofstream fi;
    fi.open("test2.inp");
    int n = 1000000;
    fi << n << "\n";
    vector<int> q(n);
    _for(i, 0, n) q[i] = (rand() * rand()) % 100000000;
    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    for (auto i : q)
        fi << i << " ";
    fi.close();
}

void test(int stt)
{
    ofstream fi;
    fi.open("test" + int_to_str(stt) + ".inp");
    int n = 1000000;
    fi << n << "\n";
    _for(i, 0, n) fi << (rand() * rand()) % 100000000 << " ";
    fi.close();
}
int main()
{
    srand(int(time(0)));
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    test_1();
    test_2();
    _for(i, 3, 11)
    {
        test(i);
    }
    return 0;
}
