#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int multiples, greatestLength;

    cout << "What multiples?: ";
    cin >> multiples;

    greatestLength = to_string(multiples*multiples).length();




    for (int rows=0; rows<multiples; rows++){
        for (int columns=0; columns<multiples; columns++){
            int resultLength = to_string((rows+1)*(columns+1)).length(); 
            int width = (greatestLength-resultLength);
            cout << setw(greatestLength+1) << (rows+1)*(columns+1);

        }

        cout << "\n";
    }


    return 0;
}