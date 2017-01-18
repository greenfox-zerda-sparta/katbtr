using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TodoCS
{
    class Program
    {
        //void print_usage()
        //{
        //    Console.WriteLine("CLI Todo application");
        //    Console.WriteLine("====================");
        //    Console.WriteLine();
        //    Console.WriteLine("Command line arguments:");
        //    Console.WriteLine("-l   Lists all the tasks");
        //    Console.WriteLine("-a   Adds a new task");
        //    cout << "-r   Removes a task" << endl;
        //    cout << "-c   Completes a task" << endl << endl;
        //}

        static void Main(string[] args)
        {
            //string argument;
            //argument = Console.ReadLine();

            //switch (argument)
            //{
            //  case "-l":
            //    Console.WriteLine("This should be help.");
            //    break;

            //   case "-a":
            //     Console.WriteLine("This should be version.");
            //    break;

            //    case "-c":
            //      quitNow = true;
            //    break;

            //    default:
            //      Console.WriteLine("Unknown Command " + command);
            //    break;
            //}

            TaskHandler taskhandler = new TaskHandler();
            taskhandler.PrintList();
            Console.WriteLine();
            Console.WriteLine("Type the task to add: ");
            string toAdd = Console.ReadLine();
            taskhandler.AddTask(toAdd);
            Console.ReadLine();

        }       
    }
}
