#include <netinet/in.h>
#include <pthread.h>

#include "../threads/userThread.hpp"
#include "server.hpp"

extern "C" {
#include "../socket/socket.h"
#include "../connections/acceptConnection.h"
}

int Server::createSocket() {
    return __createSocket(port, &serverAddress, &server_fd);
}

int Server::acceptConnection(int *client_fd, sockaddr_in *clientAddress) {
    return __acceptConnection(server_fd, serverAddress, client_fd, (sockaddr*)clientAddress);
}
