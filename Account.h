#pragma once
// Lab 6: Account.h
// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double); // constructor initializes balance
    void credit(double);
    virtual bool debit(double);
	/* Write a function prototype for virtual function credit */
	/* Write a function prototype for virtual function debit */
	void setBalance(double); // sets the account balance
	double getBalance(); // return the account balance
private:
	double balance; // data member that stores the balance
}; // end class Account

#endif