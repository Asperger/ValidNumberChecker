#include <iostream>
#include "Solution.h"

using namespace std;

int main()
{
    Solution s;
    cout << s.isNumber("0.1") << endl;
    cout << s.isNumber(" 0.1 ") << endl;
    cout << s.isNumber("0.1e-10") << endl;
    cout << s.isNumber("-10e9") << endl;
    cout << s.isNumber("abcd") << endl;
    cout << s.isNumber("0x659") << endl;
    return 0;
}
