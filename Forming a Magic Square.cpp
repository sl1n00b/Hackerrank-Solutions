#include <bits/stdc++.h>
#define MIN(a,b) (((a)<(b)) ? (a) : (b))
#define MAX(a,b) (((a)>(b)) ? (a) : (b))
#define ABS(a) ((((a)<0)) ? -(a) : (a))
using namespace std;
int calculateCost(vector<vector<int>> s,int i,int j);
int formingMagicSquare(vector<vector<int>> s);
bool isPossible(int i,int j);
// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
    int cost=10000;
    int x;
    cout << ABS(-3) << endl;
    for(int i=1;i<=9;++i)
    {   
        if(i==5)
            continue;
        for(int j=MAX(MAX(1,6-i),11-2*i);j<=MIN(MIN(9,14-i),19-2*i);++j)
        {
            if(!isPossible(i,j))
                continue;
            x=calculateCost(s,i,j);
            if(x<cost)
                cost=x;
        }
    }
    return cost;
}

bool isPossible(int i,int j)
{
    set<int> test;
    test.insert(i);
    test.insert(j);
    test.insert(15-i-j);
    test.insert(5);
    test.insert(20-2*i-j);
    test.insert(2*i+j-10);
    return (test.size()==6);
}

int calculateCost(vector<vector<int>> s,int i,int j)
{
    int cost=0;
    cost+=ABS(s[1][1]-5);
    cost+=ABS(s[0][0]-i)+ABS(s[0][1]-j);
    cost+=ABS(15-i-j-s[0][2]);
    cost+=ABS(i+j-5-s[2][0]);
    cost+=ABS(20-2*i-j-s[1][0]);
    cost+=ABS(10-j-s[2][1]);
    cost+=ABS(10-i-s[2][2]);
    cost+=ABS(2*i+j-10-s[1][2]);
    return cost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
