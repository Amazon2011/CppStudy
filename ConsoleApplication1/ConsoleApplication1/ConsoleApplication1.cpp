// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"

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
    auto i = 0;
    auto j = 1;

    std::cout << "i + j = " << i + j << std::endl;

    return 0;
}

