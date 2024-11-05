#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    int tmp = 0;

    for (int i = v.size()-1, j =v.size()-2 ; i > 0; j++)
    {
        if (v[i] == v[j])
        {
            // i++;
            continue;
        }
        else
        {
            if(tmp != v[j]){
                tmp = v[j];
                v.erase(v.begin() + j);
            }
        }
    }

    cout << v.size()+1;

}

/*
4
4 2 4 3
2 3 4

1 1 2 2 3 4

1 1 2 2 3 3 4 4 4 4

10
86 86 82 86 86 89 89 89  89 89

*/