#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void minOperations(string a, string b, int n)
{
   
    vector<int> ops;

    // Traverse the string
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {

         
            if (a[0] == b[i]) {

         
                ops.push_back(1);

          
                a[0] = '0' + !(a[0] - '0');
            }

         
            reverse(a.begin(), a.begin() + i + 1);

        
            for (int j = 0; j <= i; j++) {
                a[j] = '0' + !(a[j] - '0');
            }

            ops.push_back(i + 1);
        }
    }

  
    cout << ops.size() << "\n";

 
    for (int x : ops) {
        cout << x << ' ';
    }
}

int main()
{
    string a , b ;
    cin >> a >> b;
    int N = a.size();

    minOperations(a, b, N);

    return 0;
}