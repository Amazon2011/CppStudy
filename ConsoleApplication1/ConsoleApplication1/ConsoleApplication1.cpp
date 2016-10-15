// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Sales_item.h"


int main()
{
    
    // 基本IO
    /*std::cout << "Enter two number:" << std::endl;
    int i1 = 0, i2 = 0;
    std::cin >> i1 >> i2;
    std::cout << "The sum of " << i1 << " and " << i2 << " is " << i1 + i2 << std::endl;*/

    // 注释
    //std::cout << "/*";
    //std::cout << "*/";
    //std::cout << /* "*/" */;
    //std::cout << /* "*/" /* "/*" */;

    //控制流
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
    Sales_item item;
    while (std::cin >> item)
    {
        std::cout << item << std::endl;
    }

    return 0;
}

