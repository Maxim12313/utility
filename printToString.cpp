#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> output1;
    string output2 = "\"";
    string next;
    while (getline(cin, next)) {
        if (next == "stop") break;
        string adder = "<< \"";
        adder.append(next).append("\\n\"");
        output1.push_back(adder);

        output2.append(next).append("\\n");
        // cout << "output: " << output << endl;
    }

    output2.append("\"");
    
    cout << "----------ostringstream output------------" << endl;
    for (int i = 0; i < output1.size(); i++) {
        const string &val = output1[i];
        if (i == output1.size() - 1) 
            cout << val << ";" << endl;
        else
            cout << val << endl;
    }
    // cout << "----------istringstream output------------" << endl;
    // cout << output2 << endl;
}



/*

ex:

1 1 1
2 2 2
3 3 3


*/