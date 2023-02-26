#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream in("murphy.txt");

	if (in)
	{
		in.seekg(0, ios::end);

		for (long i = (long)in.tellg(); i >= 0; i--)
		{
			in.seekg(i, ios::beg);
			char c = in.peek();
			i -= 1 + (c == '\n');
			cout << c;
		}
		in.close();

	}
	else
	{
		cout << "cannot open file \n";
	}
	return 0;
}













Jayne Murphy$47 Jones Circle$Almond, NC  28702
$Bobie Smith$217 Halifax Drive$Canton, NC  28716
$Bill Hammet$PO Box 121$Springfield, NC  28357
$
