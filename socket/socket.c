#include <netinet/in.h>
#include <sys/socket.h>

#include "socket.h"

int __createSocket(int port, struct sockaddr_in *serverAddress, int *server_fd) {
    int opt = 1;
    
    if ((*server_fd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        return 1;
    }
    
    if (!setsockopt(*server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        return 2;
    }
    
    serverAddress->sin_family = AF_INET;
    serverAddress->sin_addr.s_addr = INADDR_ANY;
    serverAddress->sin_port = htons(port);
    
    if (bind(*server_fd, (struct sockaddr*)serverAddress, sizeof(*serverAddress)) < 0) {
        return 3;
    }
    
    if (listen(*server_fd, 1)) {
        return 4;
    }
    
    return 0;
}
