#include <iostream>
#include <netinet/in.h>

#include "server.hpp"

#define DEFAULT_PORT 4092

using namespace std;

int main(int argc, const char * argv[]) {
    Server server;
    
    server.port = DEFAULT_PORT;
    server.createSocket();
    
    return 0;
}
