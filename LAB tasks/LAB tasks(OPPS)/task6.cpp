#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("file.txt"); // Open the input file
    ofstream admFile("E:/C++/Adm.txt"), salFile("E:/C++/Sal.txt"), proFile("E:/C++/Pro.txt"), itFile("E:/C++/IT.txt");
    string empId, empName, empAddress, empDept, empPhone, empAge;

    while (inFile >> empId >> empName >> empAddress >> empDept >> empPhone >> empAge) {
        // Write the employee details to the appropriate department file
        if (empDept == "Admin") {
            admFile << empId << " " << empName << " " << empAddress << " " << empPhone << " " << empAge << endl;
        } else if (empDept == "Sales") {
            salFile << empId << " " << empName << " " << empAddress << " " << empPhone << " " << empAge << endl;
        } else if (empDept == "Production") {
            proFile << empId << " " << empName << " " << empAddress << " " << empPhone << " " << empAge << endl;
        } else if (empDept == "IT") {
            itFile << empId << " " << empName << " " << empAddress << " " << empPhone << " " << empAge << endl;
        }
    }

    // Close all files
    inFile.close();
    admFile.close();
    salFile.close();
    proFile.close();
    itFile.close();

    return 0;
}
