#include <iostream>
#include <string>
using namespace std;

bool invalid(long long x)
{
    string s = to_string(x);
    int l = s.length();

    if (l % 2 != 0)
        return false;

    for (int i = 0; i < l/2; i++)
    {
        if (s[i] != s[i + l/2])
            return false;
    }
    return true;
}

int main()
{
    ifstream file("input.txt");
    string line;
    getline(file,line);
    file.close();

    long long sum = 0;

    long long a = 0, b = 0;
    bool first = true;

    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == '-')
        {
            first = false;
        }
        else if (line[i] == ',')
        {
            for (long long x = a; x <= b; x++)
            {
                if (invalid(x))
                    ans += x;
            }
            a = b = 0;
            first = true;
        }
        else
        {
            if (first)
                a = a * 10 + (line[i] - '0');
            else
                b = b * 10 + (line[i] - '0');
        }
    }

    cout << sum;
    return 0;
}