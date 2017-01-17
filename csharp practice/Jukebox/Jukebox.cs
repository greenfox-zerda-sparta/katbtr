using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public class Jukebox
    {
        private Song rock;
        private Song pop;
        private Song musical;
        private List<Jukebox> jukebox = new List<Jukebox>();

        public Jukebox()
        {
            rock = new Rock("Some rock song", "Some rock artist");
            jukebox.Add(rock);


        }
    }
}
