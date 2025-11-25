#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // Writing to a file
    ofstream out("example.txt");     // Create and open a text file
    out << "Hello, World! \n";   // Write to the file
    out.close();                       // Close the file
    
    //appending to a file
    fstream file;
    file.open("example.txt", ios::out|ios::app); // Open file in append mode
    file << "Appending a new line. " << endl; // Append new line
    file.close(); // Close the file
    
    // Reading from the file
    ifstream in("example.txt");       // Open the file for reading
    string line;
    while (getline(in, line)) {       // Read the file line by line
        cout << line << endl;         // Output each line to the console
    }
    in.close();                       // Close the file
    return 0;
    //in-read
    //out-write
    //app-append
    //binary-binary mode
    //trunc-delete old file content and write new content
}