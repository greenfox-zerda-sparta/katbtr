using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Garden
{
    public class GardenWorks
    {
        private Flowers yellowflower;
        private Flowers blueflower;
        private Trees purpletree;
        private Trees orangetree;
        private List<GardenPlants> gardenplants = new List<GardenPlants>();
        private int wateramount;

        public GardenWorks()
        {
            yellowflower = new Flowers("yellow");
            gardenplants.Add(yellowflower);

            blueflower = new Flowers("blue");
            gardenplants.Add(blueflower);

            purpletree = new Trees("purple");
            gardenplants.Add(purpletree);

            orangetree = new Trees("orange");
            gardenplants.Add(orangetree);
        }
      
        public void WaterGarden (int wateramount)
        {
            Console.WriteLine("Watering with " + wateramount.ToString());
            foreach (GardenPlants element in gardenplants)
            {
                element.Water(wateramount);
                if (element.NeedsWater())
                {
                    Console.WriteLine("The " + element.GetColor() + " " + element.GetType() + " needs water.");
                }
                else
                {
                    Console.WriteLine("The " + element.GetColor() + " " + element.GetType() + " doesn't need water.");
                }
            }
            Console.WriteLine();

        }
    }
}
