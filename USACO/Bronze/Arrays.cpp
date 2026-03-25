#include <bits/stdc++.h>
using namespace std;
void solve(){

//    int n;
//    cin >> n;
//
//    vector<int> v(n);
//    for (int i = 0; i < n; i++){
//        cin >> v[i];
//    }
//
//    for (int i = n; i < n + 10; i++){
//        v.push_back(i);
//    }
//
//    for (int i = 0; i < n + 10; i++){
//        cout << v[i] << " ";
//    }
//
//    //*Inserting and erasing
//    vector<int> v;
//    v.push_back(2);          // [2]
//    v.push_back(3);          // [2, 3]
//    v.push_back(7);          // [2, 3, 7]
//    v.push_back(5);          // [2, 3, 7, 5]
//    v[1] = 4;                // sets element at index 1 to 4 -> [2, 4, 7, 5]
//    v.erase(v.begin() + 1);  // removes element at index 1 -> [2, 7, 5]
//    // this remove method is O(n); to be avoided
//    v.push_back(8);        // [2, 7, 5, 8]
//    v.erase(v.end() - 1);  // [2, 7, 5]
//    // here, we remove the element from the end of the list; this is O(1).
//    v.push_back(4);                     // [2, 7, 5, 4]
//    v.push_back(4);                     // [2, 7, 5, 4, 4]
//    v.push_back(9);                     // [2, 7, 5, 4, 4, 9]
//    cout << v[2];                       // 5
//    v.erase(v.begin(), v.begin() + 3);  // [4, 4, 9]
//    // this erases the first three elements; O(n)
//
//
//    //*Pair
    /**
     * Output:
     * Testing 123
     * It is possible to edit pairs after declaring them 123
     * Testing curly braces
     */

//
//        pair<string, int> pair1 = make_pair("Testing", 123);
//        cout << pair1.first << " " << pair1.second << endl;
//
//        pair1.first = "It is possible to edit pairs after declaring them";
//        cout << pair1.first << " " << pair1.second << endl;
//
//        pair<string, string> pair2{"Testing", "curly braces"};
//        cout << pair2.first << " " << pair2.second << endl;
//
//        pair<string, string> pair1{"Lam Yeu", "Ngoc Minh"};
//        cout << pair1.first << " " << pair1.second << endl;

    //trong C thi no la struct

    //* tuples
    int a = 3, b = 4, c = 5;
	tuple<int, int, int> t = tie(a, b, c);
	cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
	get<0>(t) = 7;
	cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

	tuple<string, string, int> tp2 = make_tuple("Hello", "world", 100);
	string s1, s2;
	int x;
	tie(s1, s2, x) = tp2;
	cout << s1 << " " << s2 << " " << x << endl;


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
//    cin >> t;
    while(t--){
    solve();
    }



}
