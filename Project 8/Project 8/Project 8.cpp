#include <iostream>
#include "clsQueueLine.h"
int main()
{
	clsQueueLine PayBillQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);


	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();
	PayBillQueue.IssueTicket();

	cout << "pay bills queue Info :\n";
	PayBillQueue.PrintInfo();

	PayBillQueue.PrintTicketLineRTL();
	PayBillQueue.PrintTicketLineLTR();

	PayBillQueue.PrintAllTickets();

	PayBillQueue.ServeClient();
	cout << "\npay bills queue Info after served one client :\n";
	PayBillQueue.PrintInfo();
	 
	cout << "\nSubscriptions Queue Info :\n";

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintTicketLineRTL();
	SubscriptionsQueue.PrintTicketLineLTR();

	SubscriptionsQueue.PrintAllTickets();

	SubscriptionsQueue.ServeClient();
	cout << "\nSubscriptions Queue Info after served one client :\n";

	SubscriptionsQueue.PrintInfo();



	system("pause>0");
	return 0;
}
