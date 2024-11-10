#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct customer {
    string name;
    string sname;
    int id;
    string favCoffee;
};

void printMenu(){
    
    {
        cout << "1.Add new customer\n";
        cout << "2.Change favorite coffee\n";
        cout << "3.Remove customer\n";
        cout << "4.Print all customers\n";
        cout << "5.Exit\n";

    }

}
void addCustomer(vector<customer> &customerVector) {
    customer newCustomer;
    cout << "enter name";
    cin >> newCustomer.name;

    cout << "enter surname";
    cin >> newCustomer.sname;

    cout << "enter id";
    cin >> newCustomer.id;

    cout << "enter favorite coffee";
    cin >> newCustomer.favCoffee;

    customerVector.push_back(newCustomer);
}
void updateCustomer(vector<customer>& customerVector) {
    int id1,i=0;
    cout << "enter id of customer that will be updated";
    cin >> id1;
    
    while (customerVector[i].id != id1)
    {
        i++;
    }
    cout << "enter new favorite coffee";
    cin>> customerVector[i].favCoffee;
}
void  removeCustomer(vector<customer>& customerVector) {
    int id1, i = 0;
    cout << "enter id of customer that will be removed";
    cin >> id1;

    while (customerVector[i].id != id1)
    {
        i++;
    }
    
    customerVector.erase(customerVector.begin()+i);
}
void printCustomer(vector<customer>& customerVector) {
    
    for (int i = 0; i < customerVector.size(); i++) {
        cout << "Name: " << customerVector[i].name 
             << ", Surname: " << customerVector[i].sname 
             << ", ID: " << customerVector[i].id 
             << ", Favorite Coffee: " << customerVector[i].favCoffee << endl;
    }
}


int main()
{
	vector<customer> customerVector;
    int opt;
    do{
        printMenu();
        cin >> opt;

        switch (opt) {
        case 1:
            addCustomer(customerVector);
            break;
        case 2:
            updateCustomer(customerVector);
            break;
        case 3:
            removeCustomer(customerVector);
            break;
        case 4:
            printCustomer(customerVector);
            break;
        }
    }while(opt!=5);

}