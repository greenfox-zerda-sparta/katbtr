using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Garden
{
    class Program
    {
        static void Main(string[] args)
        {
            GardenWorks gardenworks = new GardenWorks();

            gardenworks.WaterGarden(0);
            gardenworks.WaterGarden(40);
            gardenworks.WaterGarden(70);
        }
    }
}
