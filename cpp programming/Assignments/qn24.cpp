#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile; // create an output file stream object
    outfile.open("example.txt", ios::app); // open file in append mode
    
    if(!outfile.is_open()) { // check if file was opened successfully
        cout << "Error: Failed to open file." << endl;
        return 1;
    }
    
    string data;
    cout << "Enter data to append: ";
    getline(cin, data); // read input from user
    
    outfile << data << endl; // write data to file and add newline character
    
    outfile.close(); // close the file
    
    cout << "Data added successfully!" << endl;

    return 0;
}
