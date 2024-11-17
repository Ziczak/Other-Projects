from socket import *
import sys

serverSocket = socket(AF_INET, SOCK_STREAM)  # IPv4 address family and TCP serversoocket screate

# Prepare a sever socket
serverPort = 6789

serverSocket.bind(('', serverPort))  # Bind the server socket to the specified address and port
serverSocket.listen(1)  # Listen for incoming connections, maximum of 1 pending connection

while True:
    # Establish the connection
    print('Ready to serve...')

    connectionSocket, addr = serverSocket.accept()  # Accept an incoming connection and get the client's socket and address

    try:
        message = connectionSocket.recv(1024).decode()  # Recievig + decoding HTTP under 1024 bytes

        # Extract the filename from HTTP
        filename = message.split()[1]  # second word of file
        f = open(filename[1:])  # Open the requested file for reading
        outputdata = f.read()  # Read the content of the file
        connectionSocket.send(
            "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n".encode())  # Send an HTTP response header indicating success (HTTP 200 OK)

        # Send the content of the requested file to the client
        for i in range(0, len(outputdata)):
            connectionSocket.send(outputdata[i].encode())

        # Send an additional line to terminate the response
        connectionSocket.send("\r\n".encode())
        print("sent")
        # Close the client socket
        connectionSocket.close()

    except IOError:
        # Send an HTTP response header indicating file not found (HTTP 404 Not Found)
        connectionSocket.send("HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n".encode())

        # Send an HTML error message
        connectionSocket.send("<html><head></head><body><h1>404 Not Found</h1></body></html>\r\n".encode())

        # Close the client socket
        connectionSocket.close()

# Close the server socket
serverSocket.close()
# Terminate the program after sending the corresponding data
sys.exit()
