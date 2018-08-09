#include <bits/stdc++.h>
#define MAX(a,b) (((a)>(b)) ? (a) : (b))
using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    for(int i=s.length();i>=0;--i)
        if(t.substr(0,i)==s.substr(0,i) && (s.length()-i+MAX(0,t.length()-i))<=k && (((s.length()-i+MAX(0,t.length()-i))-k)%2==0 || i==0))
            return string("Yes");
    return string("No");

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
