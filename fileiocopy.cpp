//program to copy data from one file to another and convert lowercase to uppercase if any

#include <iostream>
#include <fstream>
#include <cctype>  // For std::toupper

using namespace std;

int main() {
    string sourceFile = "source.txt";
    string destinationFile = "destination.txt";

    ifstream inFile(sourceFile);
    if (!inFile) {
        cerr << "Error opening source file for reading!" << endl;
        return 1;
    }

    ofstream outFile(destinationFile);
    if (!outFile) {
        cerr << "Error opening destination file for writing!" << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        outFile.put(toupper(ch));  // Convert to uppercase and write to destination file
    }

    inFile.close();
    outFile.close();

    cout << "File copied and converted to uppercase successfully." << endl;

    return 0;
}
