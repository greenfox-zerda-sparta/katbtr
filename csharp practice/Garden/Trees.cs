using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Garden
{
    public class Trees : GardenPlants
    {
        public Trees(string mycolor)
        {
            currentwateramount = 0;
            minwateramount = 10;
            absorbancy = 0.4;
            color = mycolor;
            type = "tree";
        }
    }
}
