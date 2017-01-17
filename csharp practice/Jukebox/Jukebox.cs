using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public class Jukebox
    {
        private Rock rock;
        private Pop pop;
        private Musical musical;
        private Rock rock2;
        private Pop pop2;
        private Musical musical2;
        private List<Song> songs = new List<Song>();

        public Jukebox()
        {
            rock = new Rock("Some rock song", "Some rock artist");
            rock.Rate(3);
            songs.Add(rock);

            pop = new Pop("Some pop song", "Some pop artist");
            pop.Rate(2);
            songs.Add(pop);

            musical = new Musical("Some musical song", "Some musical artist");
            musical.Rate(5);
            songs.Add(musical);

            rock2 = new Rock("Some rock song 2", "Some rock artist 2");
            rock2.Rate(4);
            songs.Add(rock2);

            pop2 = new Pop("Some pop song 2", "Some pop artist 2");
            pop2.Rate(1);
            songs.Add(pop2);

            musical2 = new Musical("Some musical song 2", "Some musical artist 2");
            musical2.Rate(5);
            songs.Add(musical2);
        }

        public void ListSongs()
        {
            Console.WriteLine("The songs added to the jukebox:\n");

            foreach (Song element in songs)
            {
                Console.WriteLine(element.Title + ", " + element.Artist + ", and its rate: " + element.RateAve());
            }
            Console.WriteLine();

        }

        //public void MaxRatedGenre()
        //{
        //    if ()
        //}
    }
}
