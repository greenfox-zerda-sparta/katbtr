using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public class Rock : Song
    {
        public Rock(string mytitle, string myartist)
        {
            title = mytitle;
            artist = myartist;
            genre = "Rock";
        }

        public override bool Rate(int myrate)
        {
            if (myrate > 0 && myrate < 6)
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
