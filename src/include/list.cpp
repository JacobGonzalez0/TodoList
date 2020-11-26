#include "list.h"

void List::print_menu(){

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

void List::add_item(){

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
}

void List::delete_item(){

    cout << "*** Delete Item ***\n";
    cout << "Select an item index number to delete\n";
    if(list.size()){
        for(int i = 0; i < (int)list.size(); i++){
            cout << i+1 << + ": " + list[i] + "\n";
        }
    }
}

void List::print_list(){
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
}