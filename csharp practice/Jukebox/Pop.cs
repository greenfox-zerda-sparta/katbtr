using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public class Pop : Song
    {
        public Pop(string mytitle, string myartist)
        {
            title = mytitle;
            artist = myartist;
            genre = "Pop";
        }

        public override bool Rate(int myrate)
        {
            if (myrate > 0 && myrate < 5)
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
