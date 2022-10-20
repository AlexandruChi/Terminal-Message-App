#include <netinet/in.h>
#include <unistd.h>
#include <sys/socket.h>

#include "server.hpp"

extern "C" {
#include "../socket/socket.h"
}

int Server::createSocket() {
    return __createSocket(port, &serverAddress, &server_fd);
}
