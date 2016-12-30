#ifndef SDL_ENGINE_H
#define SDL_ENGINE_H

#include <SDL.h>
#include <SDL_ttf.h>
#include <map>
#include <string>

class SDL_Engine {
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
public:
  SDL_Engine();
  ~SDL_Engine();
  void initialize_SDL();
  SDL_Window* create_window(unsigned int screen_width, unsigned int screen_height);
  SDL_Renderer* create_renderer();
  void load_file(std::string name);
  void draw_sprite(std::string name, int x, int y);
  void render();

};

#endif
