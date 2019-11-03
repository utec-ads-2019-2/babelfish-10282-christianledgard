#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    string word, meaning;
    string search;

    map<string,string> dictionary;

    while(true){
        string line;
        getline(cin, line);

        if(line.empty()){
            break;
        } else {
            vector<string> results;
            istringstream iss(line);
            for(string line; iss >> line;)
                results.push_back(line);

            dictionary[results[1]] = results[0];
        }

    }

    while(cin >> search){
        auto it = dictionary.find(search);
        if(it != dictionary.end()){
            cout << dictionary[search] << endl;
        } else {
            cout << "eh" << endl;
        }

    }

    return EXIT_SUCCESS;
}