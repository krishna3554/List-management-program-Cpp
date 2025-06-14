#include <iostream>
using namespace std;
#include <vector>
#include <iomanip>
int main() {
    // Write C++ code here
    vector <int> vec{};
    bool quit{false};
    cout << "Welcome to list management program!" << endl;
    while (!quit){
    char selection{};
    cout << "\n----------------------------" << endl;
    cout << "P - Print the list" << endl;
    cout << "A - Add an element to the list" << endl;
    cout << "M - Display mean of the list" << endl;
    cout << "S - Display smallest element in the list" << endl;
    cout << "L - Display largest element in the list" << endl;
    cout << "Q - Quit the program" << endl;
    cout << "----------------------------" << endl;
    cout << "\nPlease enter your selection: ";
    cin >> selection;

    if(selection == 'p' || selection == 'P'){
    if(!vec.empty()){
            cout << "[ ";
            for (auto val: vec){
                cout << val << " ";
            }
            cout << "]";
        }else{
            cout << "[] - This list is empty!";
        }
    }else if (selection == 'a' || selection == 'A'){
        int add_vec{};
        cout << "Enter the integer you want to add: ";
        cin >> add_vec;
        vec.push_back(add_vec);
        cout << add_vec << " added to your list!";
    }else if (selection == 'm' || selection == 'M'){
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
        double max = vec[0];
        for (int i{1}; i < vec.size(); ++i)
            if (vec[i] > max){
                max = vec[i];
            }
        cout << max << " is largest number in the list!";
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
      quit = true;
    }else{
        cout << "Invalid character!, try again.";
    }
}
}
