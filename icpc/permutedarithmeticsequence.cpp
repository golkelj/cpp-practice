#include <iostream>

int main(){ 
    
    int a;
    int b; 
    int c;
   
    std::cin >> a;
    for (int i = 0; i < a; i++ ){ 
        std::cin >> b;
        std::vector<int> d(b);
        for (int j = 0; j < b ; j++){ 
            std::cin >> c; 
            d[j] = c; 
        }
        // check if this is arithmetic (assume True first)
        int arith = d[1] - d[0];
        bool isArith = true;
        for (int k = 1; k < b - 1; k++){ 
            if(d[k+1] - d[k] != arith){
                // if not arithmetic, move on
                isArith = false;
                break;
            }
        }
        // if arithmetic, immediately print
        if(isArith){
            std::cout << "arithmetic" << std::endl;
            continue;
        } 
        
        // check if this is permutated arithmetic (assume True first)
        sort(d.begin(), d.end()); 
        arith = d[1] - d[0];
        bool isPermArith = true;
        for (int k = 1; k < b - 1; k++) { 
            if(d[k+1] - d[k] != arith){
                // if not arithmetic, move on
                isPermArith = false;
                break;
            }
        }
        // if permutated arithmetic, immediately print
        if(isPermArith){
            std::cout << "permuted arithmetic" << std::endl;
            continue;
        } 
        
        std::cout << "non-arithmetic" << std::endl;
    }
} 







