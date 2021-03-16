#include <iostream>
using namespace std;

#include "snowman.hpp"

namespace ariel {
    string hat(int input){
	int h = input/10000000;
	if(h<1 || h>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch (input/10000000)
	{
	case 1:
		return "_===_";
		break;
	case 2:
		return " ___ \n.....";
		break;
	case 3:
		return "  _  \n /_\\ ";
		break;
	case 4:
		return " ___ \n(_*_) ";
		break;
	default:
		return "";
	}
}

string nose(int input){
	int n = (input/1000000)%(10);
	if(n<1 || n>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch ((input/1000000)%(10))
	{
	case 1:
		return ",";
		break;
	case 2:
		return ".";
		break;
	case 3:
		return "_";
		break;
	case 4:
		return "";
		break;
	default:
		return "";
	}
}

string leftEye(int input){
	int le = (input/100000)%(10);
	if(le<1 || le>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch ((input/100000)%(10))
	{
	case 1:
		return ".";
		break;
	case 2:
		return "o";
		break;
	case 3:
		return "O";
		break;
	case 4:
		return "-";
		break;
	default:
		return "";
	}
}

string rightEye(int input){
	int re = (input/10000)%(10);
	if(re<1 || re>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch ((input/10000)%(10))
	{
	case 1:
		return ".";
		break;
	case 2:
		return "o";
		break;
	case 3:
		return "O";
		break;
	case 4:
		return "-";
		break;
	default:
		return "";
		break;
	}
}

string leftArm(int input){
	int la = (input/1000)%(10);
	if(la<1 || la>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch ((input/1000)%(10))
	{
	case 1:
		return "<";
		break;
	case 2:
		return "\\";
		break;
	case 3:
		return "/";
		break;
	case 4:
		return "";
		break;
	default:
		return "";
		break;
	}
}

string rightArm(int input){
	int ra = (input/100)%(10);
	if(ra<1 || ra>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch ((input/100)%(10))
	{
	case 1:
		return ">";
		break;
	case 2:
		return "/";
		break;
	case 3:
		return "\\";
		break;
	case 4:
		return "";
		break;
	default:
		return "";
		break;
	}
}

string torso(int input){
	int t = (input/10)%(10);
	if(t<1 || t>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch ((input/10)%(10))
	{
	case 1:
		return ":";
		break;
	case 2:
		return "] [";
		break;
	case 3:
		return "> <";
		break;
	case 4:
		return "   ";
		break;
	default:
		return "";
		break;
	}
}

string base(int input){
	int b = (input%10);
	if(b<1 || b>4)
	{
		throw std::out_of_range{"nuber contains incorrect digits"};
	}
	switch (input%10)
	{
	case 1:
		return " : ";
		break;
	case 2:
		return "" "";
		break;
	case 3:
		return "___";
		break;
	case 4:
		return "   ";
		break;
	default:
		return "";
		break;
	}
}

string snowman(int input){
	string h,n,le,re,la,ra,t,b,snowman,hatRow,headRow,bodyRow,legRow;
	if(x<=0) {
		throw std::out_of_range{"your number is negative"};
	}
	h = hat(input);
	n = nose(input);
	le = leftEye(input);
	re = rightEye(input);
	la = leftArm(input);
	ra = rightArm(input);
	t = torso(input);
	b = base(input);
	hatRow = " " + h + "\n";
	if((la == "\\")&&(ra == "/")){
		headRow = la + "(" +le + n + re + ")" + ra + "\n";
		bodyRow = std::string(" ") + "(" + b + ")" + "\n";
	}
	if(((la == "/")||(la == "<"))&&(ra == "/")){
		headRow = " (" +le + n + re + ")" + ra + "\n";
		bodyRow = la + "(" + b + ")" + "\n";
	}
	if((la == "\\")&&((ra == "\\")||(ra == ">"))){
		headRow = la + "(" +le + n + re + ") \n";
		bodyRow = std::string(" ") + "(" + b + ")" + ra + "\n";
	}
	if(((la == "/")||(la == "<"))&&(ra == "\\")){
		headRow = " (" +le + n + re + ") \n";
		bodyRow = la + "(" + b + ")" + ra + "\n";
	}
	legRow = std::string(" ") + "(" + b + ")" + " ";
	snowman = hatRow + headRow + bodyRow + legRow;
	return snowman;
}
}
