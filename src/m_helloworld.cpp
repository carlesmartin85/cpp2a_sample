export module helloworld;

import <iostream>;

export import enter;

export
{

    void hello()
    {
        std::cout << "Hello world!";
        enter();
    }
}