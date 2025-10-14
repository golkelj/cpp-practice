// Problem: All Length Subtraction 2143a Codeforces

/* 
input: 
4
4
1 3 4 2
5
1 5 2 4 3
5
2 4 5 3 1
3
3 1 2

out: 
YES
NO
YES
NO


*/

#include <iostream>
#include <vector>

int main(){ 
    int t; 
    std::cin >> t;
    int b; 
    int c; 
    while (t--){ 
        std::cin >> b;
        std::vector<int> d(b);
        for (int j = 0; j < b; j++){
            std::cin >> c; 
            d[j] = c; 
        }
        /// solve the problem here
        int l = 0; 
        int r = b - 1;
        bool possible = true;

        for (int k = 1; k < b + 1; k++){ 
            if (d[l] == k){ 
                l++; 
            } else if (d[r] == k){ 
                r--; 
            } else { 
                possible = false; 
                break;
            }
        }

        std::cout << (possible ? "YES\n" : "NO\n");


    }
    return 0; 
}
