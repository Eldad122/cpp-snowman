/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Eldad digdeker
 * 
 * Date: 2021-03
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

static int  input;


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(input = 11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(input = 11111111)) == nospaces(" ___ \n.....\n(.,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 21111111)) == nospaces("  _  \n /_\\ \n(.,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 31111111)) == nospaces(" ___ \n(_*_) \n(.,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 41111111)) == nospaces("_===_\n(.,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 12111111)) == nospaces("_===_\n(...) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 13111111)) == nospaces("_===_\n(._.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 14111111)) == nospaces("_===_\n(..) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11211111)) == nospaces("_===_\n(o,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11311111)) == nospaces("_===_\n(O,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11411111)) == nospaces("_===_\n(-,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11121111)) == nospaces("_===_\n(.,o) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11131111)) == nospaces("_===_\n(.,O) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11141111)) == nospaces("_===_\n(.,-) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11112111)) == nospaces("_===_\n\\(.,o) \n( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11113111)) == nospaces("_===_\n(.,O) \n/( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11114111)) == nospaces("_===_\n(.,-) \n( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11111211)) == nospaces("_===_\n(.,o)/ \n<( : )\n( : )"));
    CHECK(nospaces(snowman(input = 11111311)) == nospaces("_===_\n(.,O) \n<( : )\\\n( : )"));
    CHECK(nospaces(snowman(input = 11111411)) == nospaces("_===_\n(.,-) \n<( : )\n( : )"));
    CHECK(nospaces(snowman(input = 11111121)) == nospaces("_===_\n(.,o) \n<(] [)>\n( : )"));
    CHECK(nospaces(snowman(input = 11111131)) == nospaces("_===_\n(.,O) \n<(> <)>\n( : )"));
    CHECK(nospaces(snowman(input = 11111141)) == nospaces("_===_\n(.,-) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(input = 11111112)) == nospaces("_===_\n(.,o) \n<( : )>\n(" ")"));
    CHECK(nospaces(snowman(input = 11111113)) == nospaces("_===_\n(.,O) \n<( : )>\n(___)"));
    CHECK(nospaces(snowman(input = 11111114)) == nospaces("_===_\n(.,-) \n<( : )>\n(   )"));
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(27828923));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(123454k8));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(12345));
}


/* Add more test cases here */