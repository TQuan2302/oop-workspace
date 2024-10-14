#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            //Check if the line contain only number: No need these line
            // for(int i = 0; i<line.length(); i++){
            //     // if(!isdigit(line[i])){
            //     //     _file.close(); 
            //     //     throw std:: invalid_argument(""); 
            //     // }
            // }
            while (std::getline(_file, line)) {//An invalid_argument exeption is thrown here if there is one 
                // if(stoi(line) > pow(2,32)-1){
                //     throw std:: out_of_range(""); 
                // }
                records.push_back(stoi(line)); //An out_of_range exeption is thrown here if there is one
            }
            _file.close();
        }
    }
};

int main() {
        try{
            // RecordsManager receordM("test_clean.txt");
            RecordsManager receordM("test_corrupt1.txt");
            // RecordsManager receordM("test_corrupt2.txt");
            Records myRecords;

            // reads records
            receordM.read(myRecords);

            // calculate and print out the sum
            int sum = 0;
            for (int i = 0; i < myRecords.size(); i++) {
                sum += myRecords[i];
            }
            cout << sum << endl;

        }
        catch(std::invalid_argument& e){
            cout << "Wrong argument when reading the file: ..." << endl; 
        }
        catch(std:: out_of_range& e){
            cout << "Out of range when reading the file: ..." << endl; 
        }

    return 0;
}