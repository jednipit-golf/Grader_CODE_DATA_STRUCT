#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;
class Letter{
    public:
        string name; string address; string province; string district; int zip;
        bool operator<(const Letter& other) const {
        if (zip!=other.zip) {
            return zip<other.zip;
        }
        if (address!=other.address) {
            return address<other.address;
        }
        if (name!=other.name) {
            return name<other.name;
        }
        return district<other.district;
        }
    };
class ZipInfo{
    public:
        int zip;
        string province;
        string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
    //**Begin Insert**
    unordered_map< string , unordered_map<string,int> > zinfo;
    for(auto i:zipinfo){
        zinfo[i.province][i.district] = i.zip;
    }
    for(auto & i:letters) {
        i.zip = zinfo[i.province][i.district];
    }
    sort(letters.begin(),letters.end());
    //**End Insert**
}

int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++) {
        ZipInfo z;
        cin>>z.zip>>z.district>>z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++) {
        Letter l;
        cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto& l:letters) {
        cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    }
}