#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long repeated_strings = n/(s.length());
    long remainder = n%(s.length());

    long count1 = 0, count2 = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a')
            count1++;
        if(s[i] == 'a' && i<remainder)
            count2++;
    }

    long ans = count1*repeated_strings + count2;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
