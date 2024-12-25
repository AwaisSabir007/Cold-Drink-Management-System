#include <iostream>
using namespace std;

struct Project {
    string customer_name;
    int type;
    int size;
    int price;
    int quantity;
    int bill;  // Store the total bill for the customer
};

void menu() {
    cout << endl;
    cout << "                                                            ____________________________________________" << endl;
    cout << "                                                           |                                            |" << endl;
    cout << "                                                           |                     MENU                   |" << endl;
    cout << "                                                           |                                            |" << endl;
    cout << "                                                           |____________________________________________|" << endl;
    cout << endl;
    cout << "                                                                   _________________________________" << endl;
    cout << endl;
    cout << "                                                                                1) COKE                    " << endl;
    cout << "                                                                                2) PEPSI                    " << endl;
    cout << "                                                                                3) SPRITE                  " << endl;
    cout << "                                                                                4) FANTA                   " << endl;
    cout << "                                                                                5) MOUNTAIN DEW             " << endl;
    cout << "                                        ________________________________________________________________________________________________" << endl;
    cout << endl;
}

void submenu(int type) {
    switch (type) {
        case 1:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               |  COKE   |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) COKE 1 LTR                         RS:   150                 " << endl;
            cout << "                                                                               2) COKE 1.5 LTR                       RS:   200                 " << endl;
            cout << "                                                                               3) COKE 2 LTR                         RS:   280                 " << endl;
            break;
        case 2:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               |  PEPSI  |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) PEPSI 1 LTR                        RS:   150                 " << endl;
            cout << "                                                                               2) PEPSI 1.5 LTR                      RS:   200                 " << endl;
            cout << "                                                                               3) PEPSI 2 LTR                        RS:   280                 " << endl;
            break;
        case 3:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               | SPRITE |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) SPRITE 1 LTR                      RS:   150                 " << endl;
            cout << "                                                                               2) SPRITE 1.5 LTR                    RS:   200                 " << endl;
            cout << "                                                                               3) SPRITE 2 LTR                      RS:   280                 " << endl;
            break;
        case 4:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               |  FANTA |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) FANTA 1 LTR                       RS:   150                 " << endl;
            cout << "                                                                               2) FANTA 1.5 LTR                     RS:   200                 " << endl;
            cout << "                                                                               3) FANTA 2 LTR                       RS:   280                 " << endl;
            break;
        case 5:
            cout << "                                                                                _____________" << endl;
            cout << "                                                                               | MOUNTAIN DEW |" << endl;
            cout << "                                                                               '''''''''''''''''" << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) MOUNTAIN DEW 1 LTR               RS:   150                 " << endl;
            cout << "                                                                               2) MOUNTAIN DEW 1.5 LTR             RS:   200                 " << endl;
            cout << "                                                                               3) MOUNTAIN DEW 2 LTR               RS:   280                 " << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int getPrice(int type, int size) {
    // Price determination based on drink type and size
    if (type == 1) {
        if (size == 1) return 150;
        else if (size == 2) return 200;
        else if (size == 3) return 280;
    } else if (type == 2) {
        if (size == 1) return 150;
        else if (size == 2) return 200;
        else if (size == 3) return 280;
    } else if (type == 3) {
        if (size == 1) return 150;
        else if (size == 2) return 200;
        else if (size == 3) return 280;
    } else if (type == 4) {
        if (size == 1) return 150;
        else if (size == 2) return 200;
        else if (size == 3) return 280;
    } else if (type == 5) {
        if (size == 1) return 150;
        else if (size == 2) return 200;
        else if (size == 3) return 280;
    }
    return 0;  // Return 0 if invalid type or size
}
void display_welcome() // part 1 function display the welcome message 
{
	cout<<endl;
	cout<<"                                                            __________________________________________"<<endl;
	cout<<"                                                           |__________________________________________|"<<endl;
	cout<<"                                                           |              WELCOME TO THE              |"<<endl;
	cout<<"                                                           |       COLD DRINK SHOP MANAGEMENT SYSTEM  |"<<endl;
	cout<<"                                                           |__________________________________________|"<<endl;
	cout<<"                                                           |__________________________________________|"<<endl;
		
}

void displayBill(string customerName, int totalBill) {
    cout << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "Total Bill: RS " << totalBill << endl;
    cout << "--------------------------------------------------" << endl;
}

void buyMore() {
    char choice;
    cout << "Do you want to buy more? (Y/N): ";
    cin >> choice;
    
    if (choice == 'Y' || choice == 'y') {
        // Redraw menu and get inputs again
    } else {
        cout << "Thank you for your purchase!" << endl;
    }
}

int main() {
    Project project;
    int totalBill = 0;  // Variable to track total bill
    display_welcome();
    

    cout << "Enter customer name: ";
    getline(cin, project.customer_name);

    bool buying = true;
    while (buying) {
        menu();
        cout << "Enter the type of drink (1-5): ";
        cin >> project.type;

        submenu(project.type);

        cout << "Enter the size (1-3): ";
        cin >> project.size;

        cout << "Enter quantity: ";
        cin >> project.quantity;

        // Get price based on type and size
        int itemPrice = getPrice(project.type, project.size);
        
        // Calculate bill for this purchase and update totalBill
        totalBill += itemPrice * project.quantity;

        // Display current bill for this item
        displayBill(project.customer_name, totalBill);

        // Ask if user wants to buy more
        buyMore();

        // Check if user wants to continue shopping
        cout << "Would you like to continue shopping? (Y/N): ";
        char continueChoice;
        cin >> continueChoice;
        if (continueChoice == 'N' || continueChoice == 'n') {
            buying = false;
        }
    }

    return 0;
}

