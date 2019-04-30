//
// conversion - program to convert temperature from
//            celcius degrees into farenhiet:
//            farenhiet = celcius   * (212 - 32)/100 + 32
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter the temperature in celcius
    int celcius;
    cout << "enter the tempperature in celcius:";
    cin >> celcius;

    // convert celcius into farenhiet values
    int farenhiet;
    farenhiet = celcius * 9/5 + 32;

    // output the results (followed by a NewLine)
    cout << "farenhiet value is:";
    cout << farenhiet << endl;

    // wait until user is ready before terminating program
    // to allow the user to see program results
    cout << "press enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
