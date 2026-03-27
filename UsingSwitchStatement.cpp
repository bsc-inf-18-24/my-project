#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    cout << "Days until expiration: " << daysUntilExpiration << endl;
    switch(daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!\nRenew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration 
                 << " days\nRenew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
    }
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
            default:
               cout <<"you have an active subscription." << endl;
 return 0;
}
