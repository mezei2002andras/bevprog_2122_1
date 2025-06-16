#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

struct Terkep
{
    string space;
    string ter1;
    string lat;
    string lon;
    string ele;
    string ter2;
};

int main()
{
    vector<Terkep> terkep;
    ifstream file("adat.txt");
    if(file.is_open())
    {
        string line;
        //getline(file, line);
        while(getline(file, line))
        {
            stringstream ss(line);
            Terkep terkepadat;
            getline(ss, terkepadat.space, ' ');
            getline(ss, terkepadat.ter1, ' ');
            getline(ss, terkepadat.lat, ' ');
            getline(ss, terkepadat.lon, ' ');
            getline(ss, terkepadat.ele, ' ');
            getline(ss, terkepadat.ter2, ' ');

            terkep.push_back(terkepadat);
        }

    }
    else 
    {
        cout << "Nem lehet a fajlt megnyitni" << endl;
    }
    //cout << stod(terkep[0].lat.substr(4)) << "\t" << stod(terkep[0].lon.substr(4)) <<"\t" <<stod(terkep[1].ele.substr(5)) << endl;
    //A a)
    double legeszak = 0;
    double magas = 0;
    for (int i = 0; i < terkep.size(); i++)
    {
        double temp = stod(terkep[i].lat.substr(4));
        //cout << temp << "\t" << i << endl;
        if(temp > legeszak) 
        {
            legeszak = stod(terkep[i].lat.substr(4));
            magas = stod(terkep[i].ele.substr(5));
        }
    }
    cout << magas << endl;
    // A b)
    for (int i = 0; i < terkep.size()-1; i++)
    {
        double vonal = 0;

    }
}