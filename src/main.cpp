#include "include/list.h"

int main(int arg_count, char *args[]){

    if(arg_count > 1){
        List simpleList;
        simpleList.name = args[1]; //get the first arg
        simpleList.print_menu();
    }else{
        cout << "Username not supplied.. Exiting the program" << endl;
    };

    return 0;
}

