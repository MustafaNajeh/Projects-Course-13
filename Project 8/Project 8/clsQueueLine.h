#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include "clsDate.h"
#include <string>
using namespace std;

class clsQueueLine
{
private:
	string _Prefix = "";

	short _Count = 0;

	short _TimeMints;

	class clsTicket {
	private:

		string _Prefix;
		string _TimeDate;
		short _WaitingClients =0;
		short _AveTimeToServe=0;
		short _Number=0;


	public:
		clsTicket(string prefix, short WaitingClients,short Number, short AveTimeToServe) {

			_Prefix = prefix;
			_TimeDate = clsDate::GetSystemDateTime();
			_WaitingClients = WaitingClients;
			_AveTimeToServe = AveTimeToServe;
			_Number = Number;

		}

		string Prefix() {
			return _Prefix;
		}

		string TimeDate() {
			return _TimeDate;

		}

		short AveTimeToServe() {
			return _AveTimeToServe;

		}

		short Number() {
			return _Number;

		}

		string FullNumber() {
			return _Prefix + to_string(_Number);
		}

		short WaitingClients() {
			return _WaitingClients;

		}

		short TimeExsiting() {
			return _WaitingClients * _AveTimeToServe;
		}

		void Print() {
			cout << "\n\t\t\t\t\t____________________________\n";
			cout << "\n\t\t\t\t\t\t   " << FullNumber() << "\n";
			cout << "\n\t\t\t\t\t   " << _TimeDate;
			cout << "\n\t\t\t\t\t  Wating Clients = " << _WaitingClients;
			cout << "\n\t\t\t\t\t  Serve Time in";
			cout << "\n\t\t\t\t\t   " << TimeExsiting()<<" Minutes.";
			cout << "\n\t\t\t\t\t____________________________\n";

		}


	};

public:
	queue <clsTicket> QueueLine;

	clsQueueLine(string Prefix, short TimeMints) {
		_Prefix = Prefix;
		_Count = 0;
		_TimeMints = TimeMints;

	}

	short WatingClients() {
		return QueueLine.size();
	}

	void IssueTicket() {
		_Count++;
		clsTicket Ticket(_Prefix,WatingClients(),_Count,_TimeMints);
		QueueLine.push(Ticket);
	}

	void PrintInfo() {
		cout << "\n\t\t\t\t\t_________________________________\n";
		cout << "\n\t\t\t\t\t\t   Queue Info";
		cout << "\n\t\t\t\t\t_________________________________\n";
		cout << "\n\t\t\t\t\t  Prefix = " << _Prefix<< "\n";
		cout << "\t\t\t\t\t  Total Tickets = " << _Count << "\n";
		cout << "\t\t\t\t\t  Served Clients = " << NumOfServedClients()<<"\n";
		cout << "\t\t\t\t\t  Wating Clients = " << WatingClients() << "\n";
		cout << "\t\t\t\t\t_________________________________\n";

	}

	bool ServeClient() {
		if (QueueLine.empty()) {
			return false;
		}
		QueueLine.pop();
		return true;
	}

	short NumOfServedClients() {
		return _Count - WatingClients();
	}

	string WhoIsNext() {
		if (QueueLine.empty()) {
			return "\nIs Empty nothing client";
		}
		else {
			return QueueLine.front().FullNumber();
		}
	}

	void PrintTicketLineRTL() {
		if (QueueLine.empty()) {
			cout << "\n\t\t\t\t Tickets : No Tickets";
			return;

		}
		queue <clsTicket> Temp = QueueLine;
		cout << "\n\t\t\t\t Tickets : ";
		while (!Temp.empty()) {
			cout << Temp.front().FullNumber() << " <-- ";
			Temp.pop();
		}
		cout << "\n";
	}

	void PrintTicketLineLTR() {
		if (QueueLine.empty()) {
			cout << "\n\t\t\t\t Tickets : No Tickets";
			return;

		}

		queue <clsTicket> Temp = QueueLine;
		stack <clsTicket> stack;
		while (!Temp.empty()) {
			stack.push(Temp.front());
			Temp.pop();
		}

		cout << "\n\t\t\t\t Tickets : ";
		while (!stack.empty()) {
			cout << stack.top().FullNumber() << " --> ";
			stack.pop();
		}
		cout << "\n";
	}

	void PrintAllTickets() {

		if (QueueLine.empty()) {
			cout << "\n\n\t\t\t\t\t ---No Tickets---\n";
			return;
		}
		else 
		cout << "\n\n\t\t\t\t\t\t---Tickets---\n";

		queue <clsTicket> Temp = QueueLine;

		while (!Temp.empty()) {
			Temp.front().Print();
			Temp.pop();
		}

	}

};

