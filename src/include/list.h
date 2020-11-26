#include <iostream>
#include <vector>

using namespace std;

class List{
    private:
    vector<string> list;
    protected:
    public:
    string name;

    List(){
        //constructor
    }
    ~List(){
        //destructor
    }

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};