from socket import *

serverName = '172.19.114.55'
serverPort = int(input('Input a port number: '))
clientSocket = socket(AF_INET, SOCK_DGRAM)
clientSocket.bind(('', 5432))
message = input('Input lowercase sentence: ')
clientSocket.sendto(message.encode(), (serverName, serverPort))
modifiedMessage, serverAddress = clientSocket.recvfrom(2048)
print(modifiedMessage.decode())
clientSocket.close()
