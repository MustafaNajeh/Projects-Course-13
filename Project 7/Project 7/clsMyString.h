#pragma once
#include <iostream>
#include <stack>
using namespace std;
class clsMyString
{
	string _Value;
	stack <string> _skUndo;
	stack <string> _skRedo;

public :

	string getValue() {
		return _Value;
	}

	void setValue(string value) {
		_skUndo.push(_Value);
		_Value = value;
	}

	__declspec(property(get = getValue, put = setValue))string Value;


	void Undo() {
		if (!_skUndo.empty()) {
			_skRedo.push(_Value);
			_Value = _skUndo.top();
			_skUndo.pop();
		}
	}

	void Redo() {
		if (!_skRedo.empty()) {
			_skUndo.push(_Value);
			_Value = _skRedo.top();
			_skRedo.pop();
		}

	}
};
