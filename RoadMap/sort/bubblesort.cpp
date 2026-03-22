#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector <int> a(n);

    //bubble sort (sap xep noi boi)b O(n^2)
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }

     for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }




}

