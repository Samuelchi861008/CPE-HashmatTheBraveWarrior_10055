/* **************************************************************************

    * File Name : Hashmat_the_Brave_Warrior.cpp

    * Creation Date : 2018-08-28 11:38:08

    * Last Modified : 2018-08-28 14:14:20

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long inputNum_1, inputNum_2; //因為測資範圍是到2^32，所以用long long

    while(cin >> inputNum_1 >> inputNum_2)
        cout << abs(inputNum_1 - inputNum_2) << endl;
    return 0;
}
