#define _CRT_SECURE_NO_WARNINGS //localtime mûködjön

#include <iostream>
#include <fstream>
#include <ctime>
#include <SDL.h>
#include <SDL_net.h>

using namespace std;

std::string currentDateTime();

int main(int argc, char** argv) {

  time_t rawtime = time(nullptr);
  tm* timeinfo = localtime(&rawtime);

  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  TCPsocket client = SDLNet_TCP_Open(&ip);
  char text[100];
  SDLNet_TCP_Recv(client, text, 100);
  std::ofstream myfile;
  myfile.open("client1.txt");
  std::cout << text << std::endl << "client1" << std::endl << asctime(timeinfo) << std::endl;
  myfile << text << std::endl << "client1" << std::endl << asctime(timeinfo) << std::endl;
  myfile.close();
  SDLNet_TCP_Close(client);
  SDL_Quit();

  return 0;
}