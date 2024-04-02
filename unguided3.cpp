#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["Mohammad"] = 19;
    m["Harits"] = 23;
    m["Tantowi"] = 27;
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }
    auto it = m.find("Tantowi");
    if (it != m.end())
    {
        cout << "Nilai untuk key 'Tantowi': " << it->second << endl;
    }
    else
    {
        cout << "Key 'Tantowi' tidak ditemukan" << endl;
    }
    return 0;
