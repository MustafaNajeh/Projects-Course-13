#include <iostream>
#include "clsMyString.h";
using namespace std;
int main()
{

	clsMyString S;


	S.Value = "Mohammed";
	cout << "S1 = " << S.Value << "\n";

	S.Value = "Mohammed2";
	cout << "S1 = " << S.Value << "\n";

	S.Value = "Mohammed3";
	cout << "S1 = " << S.Value << "\n";

	cout << "\n\nUndo:\n";
	cout << "_____________\n";
	S.Undo();
	cout << "S1 After Undo = " << S.Value << "\n";

	S.Undo();
	cout << "S1 After Undo = " << S.Value << "\n";

	S.Undo();
	cout << "S1 After Undo = " << S.Value << "\n";



	cout << "\n\Redo:\n";
	cout << "_____________\n";
	S.Redo();
	cout << "S1 After Redo = " << S.Value << "\n";

	S.Redo();
	cout << "S1 After Redo = " << S.Value << "\n";

	S.Redo();
	cout << "S1 After Redo = " << S.Value << "\n";



	system("pause>0");
	return 0;
}
