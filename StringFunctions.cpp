#include<iostream>

using namespace std;

string upper(string text) {
	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] >= 97 && text[i] <= 122) {
			char temp = text[i];
			temp -= 32;
			text[i] = temp;
		}
	}
	return text;
}

string lower(string text) {
	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] >= 65 && text[i] <= 97) {
			char temp = text[i];
			temp += 32;
			text[i] = temp;
		}
	}
	return text;
}

string slice(string text, int from, int to)
{
	if (text.length() < to) {
		to = text.length();
	}
	string new_string;
	for (size_t i = from; i < to; i++)
	{
		new_string += text[i];
	}
	return  new_string;
}

int main()
{
	string text = "This IS 1235 SomeTHING $%";

	text = slice(text, 2, 58);

	cout << text;



	return 0;
}
