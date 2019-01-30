#include <iostream>
#include "test.h"
#include "crow_all.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });

    // app.loglevel(crow::LogLevel::DEBUG);
    app.port(18080).multithreaded().run();
}