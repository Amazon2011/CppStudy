// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Sales_item.h"
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

    // ����IO
    /*std::cout << "Enter two number:" << std::endl;
    int i1 = 0, i2 = 0;
    std::cin >> i1 >> i2;
    std::cout << "The sum of " << i1 << " and " << i2 << " is " << i1 + i2 << std::endl;*/

    // ע��
    //std::cout << "/*";
    //std::cout << "*/";
    //std::cout << /* "*/" */;
    //std::cout << /* "*/" /* "/*" */;

    //������
    /*int sum = 0, i = 50;
    while (i <= 100)
    {
        sum += i++;
    }
    std::cout << "The sum of integers from 50 to 100 is " << sum << std::endl;*/
    /*int i = 10;
    while (i >= 0)
    {
        std::cout << i-- << std::endl;
    }*/
    /*std::cout << "enter two number:" << std::endl;
    int i1 = 0, i2 = 0;
    std::cin >> i1 >> i2;
    std::cout << "interger between i1 and i2:" << std::endl;
    int i = i1;
    if (i1 <= i2)
    {
        while (i <= i2)
        {
            std::cout << i++ << std::endl;
        }
    }
    else
    {
        while (i >= i2)
        {
            std::cout << i-- << std::endl;
        }
    }*/

    /*int sum = 0, i = 0;
    while (std::cin >> i)
    {
        sum += i;
    }
    std::cout << "The sum of input integers is " << sum << std::endl;*/
    /*Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;*/
    /*Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;*/
    /*Sales_item item;
    while (std::cin >> item)
    {
        std::cout << item << std::endl;
    }*/

    /*int i = 100, sum = 0;
    for (int i = 0; i != 10; i++)
        sum += i;
    std::cout << "sum = " << sum << std::endl;*/

    /*int ival = 42;
    int *p = &ival;
    std::cout << "*p = " << *p << std::endl;*/

    /*int i = 2;
    int *p = &i;
    if (p) {

    }

    if (*p) {
        std::cout << "*p = " << *p << std::endl;
    }*/
    /*int i = 0;
    const int &r = i;
    i = 5;
    std::cout << "i = " << i << " r = " << r << std::endl;*/
    //const int i = 1, &r = 0;
    /*int i2 = 1;
    const int *const p2 = &i2;
    const int *p1 = &i2;*/
    /*auto i = 0;
    auto j = 1;

    std::cout << "i + j = " << i + j << std::endl;*/
    /*Sales_data data1, data2;
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue / totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }*/

    /*string s;
    cin >> s;
    cout << s << "size =" << s.size() << endl;*/
    /*string s("afasfijasfj,!.?");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << "punct count = " << punct_cnt << endl;

    for (auto &c : s)
        c = 'X';// toupper(c);
    cout << "upper string = " << s << endl;*/
    /*string s = "abcdef";
    for (auto &c : s) {
        c = 'X';
    }
    cout << "upper string = " << s << endl;*/
    //vector<string> strs{ 10 };
    //cout << strs.size() << endl;

    /*string s = "abcdef";
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    cout << s << endl;*/

    //vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    /*for (auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it *= 2;
    }

    for (int i : ivec) {
        cout << i << endl;
    }*/
    /*for (auto it = ivec.begin(); it + 1 != ivec.end(); ++it) {
        cout << *it + *(it + 1) << endl;
    }*/
    /*auto begin = ivec.begin();
    auto end = ivec.end();
    for (auto i = 0; begin + i <= end - i - 1; ++i) {
        cout << *(begin + i) + *(end - i - 1) << endl;
    }*/
    int iarr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    /*int(*parray)[10] = &iarr;
    int(&arrRef)[10] = iarr;
    int iarr2[5 + 4];*/
    /*for (size_t i = 0; i != 10; ++i) {
        cout << i << endl;
        iarr[i] = i;
    }*/
    /*int *e = &iarr[10];
    for (int *p = iarr; p != e; ++p) {
        *p = 1;
    }

    for (auto i : iarr) {
        cout << i << endl;
    }*/
    int *pbeg = std::begin(iarr);
    int *pend = std::end(iarr);
    while (pbeg != pend) {
        cout << *pbeg << endl;
        ++pbeg;
    }

    return 0;
}

