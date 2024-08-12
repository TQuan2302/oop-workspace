#include<iostream>
#include "server.h"

using namespace std;

void Server:: login(string password) {
  if (this->password == password) {
    this->isLoggedIn = true;
  }
}

void Server::  printLoginStatus() {
  if (this->isLoggedIn) {
    cout << "LoggedIn";
  } else {
    cout << "Try another password" << endl;
  }
}

bool Server::  getIsLoggedIn() { return isLoggedIn; }
