#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> output1;
    vector<string> output2;
    string next;
    while (getline(cin, next)) {
        if (next == "stop") break;
        string adder = "<< \"";
        adder.append(next).append("\\n\"");
        output1.push_back(adder);

        string adder2 = "\"";
        adder2.append(next).append("\"");
        output2.push_back(adder2);
        // cout << "output: " << output << endl;
    }
    cout << "----------ostringstream output------------" << endl;
    for (int i = 0; i < output1.size(); i++) {
        const string &val = output1[i];
        if (i == output1.size() - 1) 
            cout << val << ";" << endl;
        else
            cout << val << endl;
    }
    cout << "----------istringstream input-------------" << endl;
    for (int i = 0; i < output2.size(); i++) {
        const string &val = output2[i];
        if (i == output2.size() - 1) 
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