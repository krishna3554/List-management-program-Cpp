
#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>

void display_menu(){
    cout << "\n----------------------------" << endl;
    cout << "P - Print the list" << endl;
    cout << "A - Add an element to the list" << endl;
    cout << "M - Display mean of the list" << endl;
    cout << "S - Display smallest element in the list" << endl;
    cout << "L - Display largest element in the list" << endl;
    cout << "Q - Quit the program" << endl;
    cout << "----------------------------" << endl;
}

void selection(vector <int> &vec, bool done){
    char selection{};
    cout << "\nPlease enter your selection: ";
    cin >> selection;
    if (selection == 'P' || selection == 'p'){
        if (!vec.empty()){
            cout << " [ ";
            for(auto i: vec){
                cout << i << " ";
            }
            cout << " ] ";
        }else{
            cout << "[] - This list is empty!";
        }
    }else if(selection == 'a' || selection == 'A'){
            int num{};
            cout << "Enter the num you want to add: ";
            cin >> num;
            vec.push_back(num);
            cout << num << " added to your list!";
    }else if(selection == 'm' || selection == 'M'){
        int sum{0};
        if (!vec.empty()){
        for(auto val: vec){
            sum += val;
        }
        cout << fixed << setprecision(1);
        cout <<"Here is the mean of list: " << sum/vec.size();
        }else{
            cout << "Unable to calculate mean, no data!";
        }
    }else if (selection == 'l' || selection == 'L'){
        if (!vec.empty()){
            int max = vec[0];
            for (int i{0}; i < vec.size();++i){
                if (vec[i] >= max)
                    max = vec[i];
            }
            cout << "The largest number of list is " << max;
        }else{
            cout  << "Unable to determine largest number -  list is empty[]";
        }
    }else if (selection == 's'||selection == 'S'){
        if (!vec.empty()){
        double min = vec[0];
        for(int i{1}; i  < vec.size(); ++i)
            if (vec[i] < min){
                min = vec[i];
            }
        cout << min << " is smallest number in the list!";
        }else{
            cout  << "Unable to determine smallest number -  list is empty[]";
        }
    }else if (selection == 'q' || selection == 'Q'){
      cout << "Goodby! ";
      done = true;
    }else{
        cout << "Invalid character!, try again.";
    }
}
int main() {
    // Write C++ code here
    
    vector <int> list{};
    bool quit{false};
    while (!quit){
    display_menu();
    selection(list, quit);
    }

    return 0;
}
