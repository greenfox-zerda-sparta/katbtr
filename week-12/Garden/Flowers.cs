using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Garden
{
    public class Flowers : GardenPlants
    {
        public Flowers(string mycolor)
        {
            currentwateramount = 4;
            minwateramount = 5;
            absorbancy = 0.75;
            color = mycolor;
            type = "flower";
        }
    }
}
