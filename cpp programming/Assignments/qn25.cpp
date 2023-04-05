#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile; // create an input file stream object
    infile.open("example.txt"); // open file for reading
    
    if(!infile.is_open()) { // check if file was opened successfully
        cout << "Error: Failed to open file." << endl;
        return 1;
    }
    
    string data;
    while(getline(infile, data)) { // read data from file line by line
        cout << data << endl; // display data on the screen
    }
    
    infile.close(); // close the file
    
    return 0;
}
