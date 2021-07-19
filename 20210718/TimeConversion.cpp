#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int temp;
    if(s.at(s.size()-2)=='P'){
        temp = stoi(s.substr(0,2))%12+12;
        s = to_string(temp) + s.substr(2, s.size()-2);
    }
	if(s.at(s.size()-2)=='A'){
        temp = stoi(s.substr(0,2))%12;
        s = to_string(temp) + s.substr(2, s.size()-2);
		if(temp<10)s = '0' + s;
    }
    return s.substr(0, s.size()-2);
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    //getline(cin, s);
	cin >> s;

    string result = timeConversion(s);

    //fout << result << "\n";
	cout << result << endl;

    //fout.close();

    return 0;
}
