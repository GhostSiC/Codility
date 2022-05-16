
#include <iostream>
#include <string>

using namespace std;

string DecimalToBinary(int n)
{
    string str;
    while (n) {
        // n % 2
        if (n & 1) // 1
            str += '1';
        else // 0
            str += '0';
        n >>= 1;
    }
    return str;
}
// must reverse 
// if not then we can have 0 at start and 0 at end
string reverse(string str)
{
    string str_copy;

    for (int i = str.size() - 1; i >= 0; i--)
        str_copy += str[i];

    return str_copy;
}

int fun_gap(string str) {

    unsigned int gap = 0;
    unsigned int gap_help = 0;

    //last 1 save how many 0 gap wos
    for (auto& n : str) {
        //1
        if (n & 1) {
            if (gap <= gap_help) {
                gap = gap_help;
            }
            gap_help = 0;
            //0
        }
        else
            gap_help++;
    }

    return gap;
}

int solution(int N) {
    string binary_String = reverse(DecimalToBinary(N));

    return fun_gap(binary_String);

}

int main() {

    cout << solution(1041) << '\n';
    cout << solution(15) << '\n';
    cout << solution(32) << '\n';

    return 0;
}