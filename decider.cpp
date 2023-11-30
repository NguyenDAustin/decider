#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <random>
using namespace std;

int main()
{
    char start;
    string items;
    int ind;
    string ans;
    vector<string> list;
    random_device rd;

    cout << "Start inputing items? Y/N?" << endl;
    cin >> start;
    
    if (start == 'y' || start == 'Y'){
        cout << "Input list:" << endl;
        cout << "Enter \"Done\" to when finished" << endl;
        while (true){
            cin >> items;
            if (items == "DONE")
            break;
            list.push_back(items);

        }
        list.pop_back();
        cout << "You've added " << list.size() << " items. Time to roll!" << endl;
        uniform_int_distribution<int> dist(0, list.size() - 1);
        ind = dist(rd);
        ans = list[ind];
        
        this_thread::sleep_for(chrono::seconds(2));
        
        cout << "\n" << endl;
        cout << ans << endl;


    }
    return 0;
}