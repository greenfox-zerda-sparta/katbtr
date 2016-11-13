#include <iostream>
#include <string>

using namespace std;

class Song {
private:
	string title;
	string artist;
	int count_of_ratings;
	int sum_of_ratings;

public:
	Song(string title, string artist);
	bool rate(unsigned int _rate);
	float set_rate_ave();
	string get_title();
	string get_artist();

};

Song::Song (string title, string artist) {
	this->title = title;
	this->artist = artist;
	count_of_ratings = 0;
	sum_of_ratings = 0;
}

bool Song::rate(unsigned int _rate) {
	if (_rate > 0 && _rate < 6) {
		++count_of_ratings;
		sum_of_ratings += _rate;
		return true;
	} else {
		return false;
	}
}

float Song::set_rate_ave() {
	return (float)sum_of_ratings / count_of_ratings;
}

string Song::get_title() {
	return title;
}

string Song::get_artist() {
	return artist;
}

int main() {

	Song mySong1("Hurray", "2boyz");
	mySong1.rate(4);
	mySong1.rate(5);
	mySong1.rate(6);
	cout << "Average rate for " << mySong1.get_title() << " from " << mySong1.get_artist() << " is " << mySong1.set_rate_ave();

}