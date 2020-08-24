#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

typedef pair<int, int> ii;

int main() {
    ios::sync_with_stdio(false);
    int N;
    cin >> N;

    int score;
    string sub, name;
    map<string, ii> S, T;
    for (int i = 0; i < N; i++) {
        cin >> sub >> name >> score;
        S[sub].first += score;
        S[sub].second += 1;
        T[name].first += score;
        T[name].second += 1;
    }

    for (map<string, ii>::iterator itr = S.begin(); itr != S.end(); itr++) {
        ii temp = itr->second;
        double avg = (temp.first + 0.0) / temp.second;
        cout << itr->first << " " << fixed << setprecision(2) << avg << endl;
    }

    for (map<string, ii>::iterator itr = T.begin(); itr != T.end(); itr++) {
        ii temp = itr->second;
        double avg = (temp.first + 0.0) / temp.second;
        cout << itr->first << " " << fixed << setprecision(2) << avg << endl;
    }
}

/*
9 
2110999 NTN 5
2110101 NNN 3
2110101 SPJ 5
2110999 ABC 0
2110999 DEF 0
2110101 XYZ 2
2110101 XYZ 3
2110101 NTN 5
2110101 XYZ 1
*/