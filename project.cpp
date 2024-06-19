/* Creating a project for banking system
 * in whic you can add money,.withdraw and shows
 * the remainig balance.*/

#include <iostream>
#include <ostream>
#include <string>
// #include <type_traits>
using namespace std;

int main() {

  /* At first we are going to greet the user and ask
   * for setting uo username and password */
  std::cout << "\t --- HELLO SIR! WELCOME TO THE EPHIMORE FOOD APP -- \n\n" << endl;
  std::cout
      << "-- PLEASE SET THE USERNAME AND PASSWORD FOR FUTURE LOGINS -- \n\n"
      << endl;

  string username;
  string password;

  std::cout << "Please set the username for future login: ";
  getline(cin, username);
  std::cout << "Please set the password: ";
  getline(cin, password);
  std::cout << "\n-- USERNAME AND PASSWORD SUCCESSFULLY SET, PLEASE LOGIN TO "
               "CONTINUE! --"
            << endl;

  string usr;
  string pass;

  std::cout << "Please Enter the username: " << endl;
  getline(cin, usr);
  std::cout << "Please Enter the password to login: " << endl;
  getline(cin, pass);

  /*Checking the username and password whether
   * if it's correct or not */
  while (usr != username && pass != password) {
    std::cout << "\nIncorrect Username and password!! \nPlease enter correct "
                 "username and password."
              << endl;

    std::cout << "\nPlease Enter the username: " << endl;
    getline(cin, usr);
    std::cout << "Please Enter the password to login: " << endl;
    getline(cin, pass);
  }

  /* After successful login user is greeted and balance is shown on the screen
   */
  std::cout << "\n\t-- YOU HAVE SUCCESSFULLY LOGINED !!! " << endl;
  // shows current balance
  double balance = 5.00;
  std::cout << "\n-> Your current wallet balance: " << balance << endl;

  /*Asking if the user wants to add the money */
  string q1;
  std::cout << "Would you like to add more money to your balance? (yes/no): " << endl;
  getline(cin, q1);

  double add;
  if (q1 == "yes") {
    std::cout << "\n-> Enter the amount of money you want to add: " << endl;
    std::cin >> add;
    balance += add;
    std::cout << "Money successfully added to you balance!" << endl;
    std::cout << "\n-> Your wallet balance: " << balance << endl;
  } 
  else if (q1 == "No" || q1 == "no") {
    std::cout << "Alright, No worries! " << endl;
  } 
  else {
    std::cout << "Invalid statement! " << endl;
  }

  string q3;
  std::cout << "\nDid you like Ephimore today? (yes/no)" << endl;
  std::cin >> q3;

  if (q3 == "yes" || q3 == "Yes") {
    std::cout << "Glad to know that. ^-^ " << endl;
  } 
  else if (q3 == "no" || q3 == "No") {
    std::cout << "It's alright, You may continue. " << endl;
  } 
  else {
    std::cout << "Invalid statement!" << endl;
  }
  /*Showing the options from which customer may choose.  */
  std::cout << "\n\t-- PLEASE SELECT AN OPTION FROM BELOW TO CONTINUE " << endl;

  string items[] = {"Pies",       "Donuts", "Cappuccino",
                    "Hamburgers", "Fries",  "Cola"};
  double price[] = {5.00, 10.75, 20.00, 50.00, 30.50, 10.55};
  std::cout << "\t\t -- 1. " << items[0] << " \t\t--\t\t "
            << "$" << price[0] << endl;
  std::cout << "\t\t -- 2. " << items[1] << " \t\t--\t\t "
            << "$" << price[1] << endl;
  std::cout << "\t\t -- 3. " << items[2] << " \t--\t\t "
            << "$" << price[2] << endl;
  std::cout << "\t\t -- 4. " << items[3] << " \t--\t\t "
            << "$" << price[3] << endl;
  std::cout << "\t\t -- 5. " << items[4] << " \t\t--\t\t "
            << "$" << price[4] << endl;
  std::cout << "\t\t -- 6. " << items[5] << " \t\t--\t\t "
            << "$" << price[5] << endl;
  std::cout << "\n\n";

  int q4;
  std::cout << "--> Please enter your choice: " << endl;
  std::cin >> q4;

  std::cout << "--> Selected choice: " << items[q4] << endl;

  /* Showing a warning in a case if there is insufficient balance in the wallet */
  string q5;
  if (balance < price[q4]) {
    std::cout << "Warning!! Not enough balance. Please add money into your "
      "wallet to continue."
      << endl;
  }
    
  std::cout << "Would you like to add more money? (yes/no)" << endl;
  std::cin >> q5; 

 /* Asking user if he/she wants to more money to the wallet */
  if (q5 == "Yes" || q5 == "yes") {
    std::cout << "-- Enter the amount of money do you want add: " << endl;
    std::cin >> add;
    balance += add;
    std::cout << "Money successfully added to your wallet" << endl;
    std::cout << "Curret Balance: " << balance << endl;
  } 

  else if (q5 == "No" || q5 == "No") {
    std::cout << "No problem!, Please continue or choose another choice."
      << endl;
    std::cout << "--> Please enter your choice: " << endl;
    std::cin >> q4;

    std::cout << "--> Selected choice: " << items[q4] << endl;
  }
/* Ordering stuff and showing remaining balance */
  if (q4 == 0) {
    balance -= price[q4];
    std::cout << "--> Order successful!! " << endl;
    std::cout << "--> Remaining Balance: " << balance << endl;
  }
  else if (q4 == 1) {
    balance -= price[q4];
    std::cout << "--> Order successful!! " << endl;
    std::cout << "--> Remaining Balance: " << balance << endl;
  }
  else if (q4 == 2) {
    balance -= price[q4];
    std::cout << "--> Order successful!! " << endl;
    std::cout << "--> Remaining Balance: " << balance << endl;
  }
  else if (q4 == 3) {
    balance -= price[q4];
    std::cout << "--> Order successful!! " << endl;
    std::cout << "--> Remaining Balance: " << balance << endl;
  }
  else if (q4 == 4) {
    balance -= price[q4];
    std::cout << "--> Order successful!! " << endl;
    std::cout << "--> Remaining Balance: " << balance << endl;
  }
  else if (q4 == 5) {
    balance -= price[q4];
    std::cout << "--> Order successful!! " << endl;
    std::cout << "--> Remaining Balance: " << balance << endl;
  }
  else {
    std::cout << "Invalid statement!! " << endl;
  }
  
  std::cout << "\t\t -- THANKS FOR USING OUR EPBHIMORE FOOD APP. -- " << endl;
  std::cout << "\t\t -- PLEASE VISIT AGAIN. -- " << endl;
  return 0;
}
