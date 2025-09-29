// main.cpp
#include <iostream> 
using namespace std; 

int main()
{
    int g; 
    int j, k; 
    int j = 10; 
    int i; 
    [[maybe_unuse]] int j; 
    j = 10; 

    std::cout << j; 
    std::cout << i; 
    std::cin >> g; 
} 


int old()
{ 
    // variable declaration
    int t, n; 

    // getting input from user
    cout <<"Print Table of: " << "Jaden";
    cin >>t; 
    cout <<"Upto: "; 
    cin >>n; 

    // displaying the table
    for (int i = 1; i <= n; i++)
    { 
        cout <<t<<" x "<<i<<" = "<<t * i<< endl;
    }


    std::cout << "Jadne";

    return 0; 



}


