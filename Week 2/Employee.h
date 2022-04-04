#pragma once
class Employee
{
public: 
	const float Tax = 0.01f;
	char name[31]; //array of char 30 long w/null terminator
	int age = 0;

protected:

private:

public:
	Employee();
	void Read();
	void Write();

};

