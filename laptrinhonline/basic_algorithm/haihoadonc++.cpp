#include <iostream>
#include <vector>
#include <unordered_set> 

int main() {
 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

   
    std::vector<int> bills = {2, 5, 10, 20, 50, 100};
    int num_bills = bills.size();

    std::unordered_set<int> possible_sums;

    for (int i = 0; i < num_bills; ++i) {
        for (int j = i + 1; j < num_bills; ++j) {
            possible_sums.insert(bills[i] + bills[j]);
        }
    }

    int n, m; 
    while (std::cin >> n >> m && (n != 0 || m != 0)) {
        
        int change = m - n; 
        if (possible_sums.count(change)) {
            std::cout << "possible\n";
        } else {
            std::cout << "impossible\n";
        }
    }

    return 0;
}