//Puzzle Source: https://www.hackerrank.com/challenges/find-point/problem?isFullScreen=true

#include "FindThePoint.h"

#include <functional>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'findPoint' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER px
 *  2. INTEGER py
 *  3. INTEGER qx
 *  4. INTEGER qy
 */

vector<int> findPoint(int px, int py, int qx, int qy)
{
    int rx, ry;
    rx = (qx - px)*2 +px;
    ry = (qy - py)*2  +py;
    
   // cerr << "RETURNING " << rx << " " << ry << endl;
    return vector<int> {rx,ry};
}

std::string FindThePoint::ComputeInput(int setsAmount, std::vector <std::string> sets)
{
    ostringstream output;

    for (int n_itr = 0; n_itr < setsAmount; n_itr++)
    {
        vector<string> first_multiple_input = split(rtrim(sets[n_itr]));

        int px = stoi(first_multiple_input[0]);
        int py = stoi(first_multiple_input[1]);
        int qx = stoi(first_multiple_input[2]);
        int qy = stoi(first_multiple_input[3]);

        vector<int> result = findPoint(px, py, qx, qy);
        for (size_t i = 0; i < result.size(); i++)
        {
            output << result[i];
            if (i != result.size() - 1)
            {
                output << " ";
            }
        }

        if(n_itr != setsAmount - 1)
            output << " \n ";
    }
    return output.str();
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
