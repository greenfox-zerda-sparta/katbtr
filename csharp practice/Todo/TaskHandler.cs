using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace TodoCS
{
    public class TaskHandler
    {
        private string filepath = "d:\\winde/visual studio 2015/Projects/TodoCS/TodoCS/todolist.txt";
        public string Filepath { get; set; }

        private List<string> todolist = new List<string>();

        public void ReadFromFile()
        {
            int counter = 0;
            string line;
            StreamReader file = new StreamReader(filepath);
            while ((line = file.ReadLine()) != null)
            {
                string task = "[ ] " + (counter + 1).ToString() + " - " + line;
                todolist.Add(task);

                counter++;
            }

            file.Close();
        }

        public void PrintList()
        {
            ReadFromFile();
            foreach (string task in todolist)
            {
                Console.WriteLine(task);
            }
    
        }

        public void AddTask(string tasktoadd)
        {
            using (StreamWriter sw = File.AppendText(filepath))
            {
                sw.WriteLine(tasktoadd);
            }
        }
    }
}
