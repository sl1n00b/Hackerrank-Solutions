#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> a) {
    int n=a.size();
    int s=0;
    for(int i=0;i<n;++i)
        s+=a[i][i]-a[i][(n-1)-i];        
    return (s>0) ? s : -s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a);

    fout << result << "\n";

    fout.close();

    return 0;
}
