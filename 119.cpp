#include <iostream>
#include <fstream>

using namespace std;

const int N = 100;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    /*
    int i, j, n, h[N], m[N], s[N], c;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> h[i] >> m[i] >> s[i];
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (h[j] >= h[i]) {
                swap(h[i], h[j]);
                swap(m[i], m[j]);
                swap(s[i], s[j]);
            }
    */
    int a[N], n, i, h, m, s;
    fin >> n;
    for (i = 0; i < n; i++) {
        fin >> h >> m >> s;
        a[i] = h* 3600 + m * 60 + s;
    }
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
                /*
                swap(h[i], h[j]);
                swap(m[i], m[j]);
                swap(s[i], s[j]);
                */
            }
    for (i = 0; i < n; i++) {
        fout << a[i] / 3600 << " ";
        a[i] %= 3600;
        fout << a[i] / 60 << " ";
        a[i] %= 60;
        fout << a[i] << endl;
    }
    return 0;
}
