#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile; // create an output file stream object
    outfile.open("example.txt"); // open file for writing
    
    if(!outfile.is_open()) { // check if file was opened successfully
        cout << "Error: Failed to open file." << endl;
        return 1;
    }
    
    // write data to file
    outfile << "welcome to my world" << endl;
    outfile << "This is an example program." << endl;
    
    outfile.close(); // close the file
    
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
