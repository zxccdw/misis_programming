//Elephant
# include <iostream>

int main() {
    int x, y;
    y = 0;
    std :: cin >> x;
    y += x/5;
    if(x%5 == 0){
        std :: cout << y;
        
    }else{
        std :: cout << y + 1;
        
    }
    
}