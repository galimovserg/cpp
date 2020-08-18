//
//  main.cpp
//  references
//
//  Created by Сергей Галимов on 18.08.2020.
//  Copyright © 2020 Сергей Галимов. All rights reserved.
//

#include <iostream>

void    swapref(int &a, int &b)
{
    int buf = a;
    a = b;
    b = buf;
}

void    swap(int *a, int *b)
{
    int buf = *a;
    *a = *b;
    *b = buf;
}

int     main(int argc, const char * argv[]) {
    int p;
    int &g = p;
    p = 10;
    std::cout <<" g is "<< g <<std::endl;
    g = 23;
    std::cout <<" p is "<< p <<std::endl;
    std::cout <<"swap testing with references..."<<std::endl;
    int a = 19;
    int b = 91;
    swapref(a, b);
    std::cout<<"a is "<<a<<" b is "<<b<<std::endl;
    std::cout <<"swap testing with pointers..."<<std::endl;
    swap(&a, &b);
    std::cout<<"a is "<<a<<" b is "<<b<<std::endl;
    char s1[] = "hello =)";
    char *s2 = s1;
    std::cout<<"s1 is "<< s1 << " s2 is " << s2 << std::endl;
    char (&s3)[9] = s1;
    std::cout<<"s1 is "<< s1 << " s3 is " << s3 << std::endl;
    s3[5] = 'w';
    std::cout<<"s1 is "<< s1 << " s2 is " << s2 << std::endl;
    s2[4] = 'r';
    std::cout<<"s1 is "<< s1 << " s3 is " << s3 << std::endl;
    char s4[] = "what's up";
    s2 = s4;
    std::cout<<"s1 is "<< s1 << " s2 is " << s2 << std::endl;
    
    bool all_apples_are_good = true;
    bool & all_green_apples_are_good = all_apples_are_good;
    std::cout<<"all apples are good "<<all_apples_are_good<<std::endl;
    std::cout<<"then all green apples are definitely good "<<all_green_apples_are_good<<std::endl;
    return (0);
}
