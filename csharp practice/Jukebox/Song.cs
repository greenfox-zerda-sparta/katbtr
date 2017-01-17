using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace JukeboxCS
{
    public abstract class Song
    {
        protected string title;
        protected string artist;
        protected string genre;
        protected float ratecount;
        protected float ratesum;
        protected float rateave;

        public Song()
        {
         
        }

        public abstract bool Rate(int myrate);

        public string Title { get; }
        public string Artist { get; }
        public string Genre { get; }
        public float RateAve { get; set; }
        public float RateCount { get; }
        public float RateSum { get; }

        }
}

