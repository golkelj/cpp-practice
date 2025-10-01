// main.cpp
#include <iostream> 
using namespace std; 

int main()
{
    int g = 10; 
    std::cout << "Jaden\n"; 
    return 0;
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




#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>


std::vector<std::string> split(const std::string &line, char delimiter = ',') {
    std::vector<std::string> tokens;
    std::stringstream ss(line);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int csv_opener(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <csv_file>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << "\n";
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        auto fields = split(line);

        // Print each row (tab-separated)
        for (size_t i = 0; i < fields.size(); ++i) {
            std::cout << fields[i];
            if (i < fields.size() - 1) std::cout << "\t";
        }
        std::cout << "\n";
    }

    file.close();
    return 0;
}
