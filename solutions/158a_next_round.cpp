#include <iostream>

int main(){
    int n;
    int k;
    int a_k, a_i;
    int i = 0;
    std::cin >> n >> k;
    
    while (i < k) {
        std::cin >> a_i;
        if(a_i == 0){
            std::cout << i;
            return 0;
        } else
            ++i;
    }
    
    a_k = a_i;
    
    while (i < n) {
        std::cin >> a_i;
        if(a_i != a_k){
            std::cout << i;
            return 0;
        } else
            ++i;
    }
    
    std::cout << i;
    return 0;
}
