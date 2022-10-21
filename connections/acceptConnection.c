#include <netinet/in.h>
#include <sys/socket.h>

int __acceptConnection(int server_fd, struct sockaddr_in serverAddress, int *client_fd, struct sockaddr *clientAddress) {
    int addressLenght = (int)sizeof(serverAddress);
    *client_fd = accept(server_fd, clientAddress, (socklen_t*)&addressLenght);
    if (*client_fd < 0) {
        return 1;
    }
    return 0;
}
