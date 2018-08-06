#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int i=(10*(s[0]-'0')+s[1]-'0')+((string(1,s[8])+string(1,s[9]))==string("PM") ? 12 : 0);
    if(i==12 && ((string(1,s[8])+string(1,s[9]))==string("AM")))
        i-=12;
    if(i==24)
        i-=12;
    string t=s;
    t.resize(t.size()-2);
    t[0]=i/10+'0';
    t[1]=i%10+'0';
    return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
