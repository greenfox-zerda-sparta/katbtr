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
        private List<Song> songs = new List<Song>();

        public Jukebox()
        {
            rock = new Rock("Some rock song", "Some rock artist");
            songs.Add(rock);

            pop = new Pop("Some pop song", "Some pop artist");
            songs.Add(pop);

            musical = new Musical("Some musical song", "Some musical artist");
            songs.Add(musical);
        }

        public void ListSongs()
        {
            Console.WriteLine("The songs added to the jukebox:\n");

            foreach (Song element in songs)
            {
                Console.WriteLine(element.Title + ", " + element.Artist);
            }
            Console.WriteLine();

        }
    }
}
