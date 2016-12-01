#ifndef BULLSANDCOWS_INTERFACE_H
#define BULLSANDCOWS_INTERFACE_H

void print_intro();
std::string get_user_guess();
std::vector<int> switch_user_guess_int(std::string _user_guess);
bool is_game_won(int _bull_counter);
void print_cows(int _cow_counter);
bool is_game_over(int _series_counter);

#endif //BULLSANDCOWS_INTERFACE_H
