#include <bits/stdc++.h>
int temp(int step,int start);
using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    return round(pow(2,n/2+1+n%2))-1-n%2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
