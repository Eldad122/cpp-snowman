#include <iostream>
using namespace std;

#include "snowman.hpp"

namespace ariel {
    string hat(int input){
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