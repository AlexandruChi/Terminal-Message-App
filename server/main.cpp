#include <iostream>
#include <netinet/in.h>

#include "../threads/userThread.hpp"
#include "../threads/convThread.hpp"
#include "server.hpp"

#define DEFAULT_PORT 4092

using namespace std;

// Server

int main(int argc, const char * argv[]) {
    Server server;
    Conv conv;
    
    server.port = DEFAULT_PORT;
    server.createSocket();
    
    conv.server = &server;
    conv.startThread(&conv);
    
    while(1);
    
    return 0;
}
