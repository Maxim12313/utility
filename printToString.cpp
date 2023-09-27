#include <iostream>
 using namespace std;

int main() {
    string output;
    string next;
    while (getline(cin, next)) {
        if (next == "stop") break;
        output.append(next);
        output.append("\\n");
        // cout << "output: " << output << endl;
    }
    
    cout << "----------output------------" << endl;
    cout << output << endl;
}



/*

ex:

1 1 1
2 2 2
3 3 3


*/