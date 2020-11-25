#include <iostream>
#include <vector>
using namespace std;

void print_menu();
void print_list();
void add_item();
void delete_item();

vector<string> list;

int main(int arg_count, char *args[]){

    if(arg_count > 1){
        string name(args[1]); //get the first arg
        print_menu();
    }else{
        cout << "Username not supplied.. Exiting the program" << endl;
    };

    return 0;
}

void print_menu(){

    int choice;

    cout << "******************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit.\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;


    switch(choice){
        case 1: print_list();
        break;
        case 2: add_item();
        break;
        case 3: delete_item();
        break;
        case 4: exit(0);
        break;
        default: cout << "Sorry choice not implemented yet\n";
        break;
    }
    

    
}

void add_item(){

    for(int i = 10; i < 10; i++){
        cout << "\n";
    }

    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item to the list";
    for(int i = 10; i < 10; i++){
        cout << "\n";
    }
    cin.clear();

    print_menu();
}

void delete_item(){

    cout << "*** Delete Item ***\n";
    cout << "Select an item index number to delete\n";
    if(list.size()){
        for(int i = 0; i < (int)list.size(); i++){
            cout << i+1 << + ": " + list[i] + "\n";
        }
    }

    print_menu();
}

void print_list(){
    for(int i = 10; i < 10; i++){
        cout << "\n";
    }

    cout << "*** Printing List ***\n";

    if(list.size()){
        for(int i = 0; i < (int)list.size(); i++){
            cout << i+1 << + ": " + list[i] + "\n";
        }
    }

    for(int i = 10; i < 10; i++){
        cout << "\n";
    }
    //todo choice

    print_menu();
}