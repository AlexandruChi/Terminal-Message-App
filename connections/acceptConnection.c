#include <netinet/in.h>
#include <sys/socket.h>

int __acceptConnection(int server_fd, struct sockaddr_in serverAddress, struct sockaddr *clientAddress) {
    int addressLenght = (int)sizeof(serverAddress);
    return accept(server_fd, clientAddress, (socklen_t*)&addressLenght);
}
