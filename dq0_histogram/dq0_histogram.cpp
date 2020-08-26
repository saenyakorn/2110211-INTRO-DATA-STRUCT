#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    map<string, int> MP;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        MP[s] += 1;
    }

    for (map<string, int>::iterator itr = MP.begin(); itr != MP.end(); itr++)
        if (itr->second > 1) cout << itr->first << " " << itr->second << endl;
}

/*
6
somchai
42nd
abc
somchai
somchai
abc

8 
dog
zebra
dog
cat
cat
zebra
duck
duck
*/