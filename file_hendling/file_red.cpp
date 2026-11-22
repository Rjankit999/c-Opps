#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream outfile;
    for (int i = 2; i <= 10; i++)
    {
        string filename="file"+to_string(i)+".exe";
        outfile.open(filename);

        outfile << " This is first file write...";
        outfile << "  \n 2 line This is first file write.0..";
    outfile.close();

    }
}