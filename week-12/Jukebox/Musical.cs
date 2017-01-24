using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public class Musical : Song
    {
        public Musical(string mytitle, string myartist)
        {
            title = mytitle;
            artist = myartist;
            genre = "Musical";
        }

        public override bool  Rate(int myrate)
        {
            if (myrate > 1 && myrate < 6)
            {
                ++ratecount;
                ratesum += myrate;
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
