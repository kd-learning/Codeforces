#include <iostream>

bool has_even_parts(int w){
    if(w % 2 == 0){
        int i = 1;
        int tmp = 2*i;
        do{
            tmp = w - 2*i;
            ++i;
        }
        while(tmp > 0 && tmp%2==1);
        if(tmp > 0)
            return true;
    }
    return false;
}

int main(){
    int w;
    std::cin >> w;
    std::cout << ( has_even_parts(w) ? "YES" : "NO" );
}