#include <iostream>
#include "Rock.h"
#include "Pop.h"
#include "Reggea.h"
#include "Jukebox.h"
#include "Song.h"

using namespace std;

int main() {

    Song* song1 = new Rock("Way Back into Love", "Alex Fletcher, Sophie Fisher");
    Song* song2 = new Pop("Pop! Goes My Heart", "Pop");
    Song* song3 = new Reggea("Buddha's Delight", "Cora");
    Song* song4 = new Rock("Dance with Me Tonight", "Alex Fletcher");
    Song* song5 = new Pop("Love Autopsy", "Alex Fletcher");
    Song* song6 = new Pop("Entering Bootytown", "Cora");

    Jukebox jukebox;

    jukebox.add_song(*song1);
    jukebox.rate(*song1, 5);
    jukebox.rate(*song1, 5);
    jukebox.rate(*song1, 15);
    cout << "Average rate for " << song1->get_title() << " from " << song1->get_artist() << " is " << song1->set_rate_ave() << endl;

    jukebox.add_song(*song2);
    jukebox.rate(*song2, 2);
    jukebox.rate(*song2, 2);
    jukebox.rate(*song2, 0);
    cout << "Average rate for " << song2->get_title() << " from " << song2->get_artist() << " is " << song2->set_rate_ave() << endl;

    jukebox.add_song(*song3);
    jukebox.rate(*song3, 3);
    jukebox.rate(*song3, 1);
    jukebox.rate(*song3, 5);
    cout << "Average rate for " << song3->get_title() << " from " << song3->get_artist() << " is " << song3->set_rate_ave() << endl;

    jukebox.add_song(*song4);
    jukebox.rate(*song4, 5);
    jukebox.rate(*song4, 5);
    jukebox.rate(*song4, 5);
    cout << "Average rate for " << song4->get_title() << " from " << song4->get_artist() << " is " << song4->set_rate_ave() << endl;

    jukebox.add_song(*song5);
    jukebox.rate(*song5, 3);
    jukebox.rate(*song5, 2);
    jukebox.rate(*song5, 2);
    cout << "Average rate for " << song5->get_title() << " from " << song5->get_artist() << " is " << song5->set_rate_ave() << endl;

    jukebox.add_song(*song6);
    jukebox.rate(*song6, 2);
    jukebox.rate(*song6, 1);
    jukebox.rate(*song6, 1);
    cout << "Average rate for " << song6->get_title() << " from " << song6->get_artist() << " is " << song6->set_rate_ave() << endl;

    cout << "Rating of Alex Fletcher is " << jukebox.get_artist_rating("Alex Fletcher") << endl;

    cout << "The top rated title is " << jukebox.top_rated_title() << endl;

//    cout << "The top rated genre is " << jukebox.top_rated_genre() << endl;

    return 0;
}
