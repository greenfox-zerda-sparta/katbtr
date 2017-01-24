using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Garden
{
    public abstract class GardenPlants
    {
        protected double currentwateramount;
        protected double minwateramount;
        protected double absorbancy;
        protected string color;
        protected string type;
        protected static int counter = 0;

        public GardenPlants()
        {
            counter++;
        }
      
        public bool NeedsWater()
        {
            return currentwateramount <= minwateramount;
        }

        public double Water (int wateramount)
        {
            return currentwateramount += (wateramount / counter) * absorbancy;
        }

        public string GetColor()
        {
            return color;
        }

        public string GetType()
        {
            return type;
        }
    }
}
