using System;

class HemloCS
{
    static void Main(string[] args)
    {
        if (args.Length != 1)
        {
            Console.Out.WriteLine("> try harder lol");
            Environment.Exit(1);
        }

        Console.Out.Write(args[0]);
        Console.Out.WriteLine(" lmao");
    }
}
