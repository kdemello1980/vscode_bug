#include "foo.h"
#include <iostream>

namespace bla
{
    Foo::Foo(){}
    Foo::~Foo(){}

    void Foo::sayHi()
    {
        std::cout << "Hi." << std::endl;
    }
} // namespace bla 
