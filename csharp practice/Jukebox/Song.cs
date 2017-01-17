using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public abstract class Song
    {
        private static int songcount;
        protected string title;
        protected string artist;
        protected string genre;
        protected float ratecount;
        protected float ratesum;
        protected float rateave;

        public Song()
        {
            songcount++;
            ratecount = 0;
            ratesum = 0;
            rateave = 0;
        }

        public abstract bool Rate(int myrate);

        public string Title { get { return title; }  }
        public string Artist { get { return artist; } }
        public string Genre { get { return genre; } }
        public float RateAve() {
            return ratesum / ratecount;
        }
        public float RateCount { get { return ratecount; } }
        public float RateSum { get { return ratesum; } }

        }
}

