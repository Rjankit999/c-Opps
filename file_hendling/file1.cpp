#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // file opening
    ofstream outfile;
    outfile.open("file.txt");
    // write in file
    outfile << " This is first file write...";
    outfile << "  \n 2 line This is first file write...";
    // close fiel
    outfile.close();
}