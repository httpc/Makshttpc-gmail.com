//#define NAME_CHECK
#define GROUP_CHECK

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;


namespace RegularExpressions
{
	class Program
	{
		static void Main(string[] args)
		{
#if NAME_CHECK
			Console.Write("Input name: ");
			string name = "Vasya";
			if (Regex.IsMatch(name, "^[A-Z][a-z]{1,20}$"))
			{
				Console.WriteLine(name);
			}
			else
			{
				Console.WriteLine("Error: Bad name");
			} 
#endif
			/*
				ST_PV_34v
				ST_PU_34a
				ST_ITV_35
				PS_VS_PU_35
			 */
			Console.Write("Input group: ");
			string delim = "(_|\\s|-)";
			string name = "PS-SB_ITV_34";		//Console.ReadLine();
			name.Replace()
			//if (Regex.IsMatch(name, $"^(ST|PS(\\s|-)(SB|VS))_(PU|PV|ITU|ITV)_\\d{{2}}[abv]?$"))
			if (Regex.IsMatch(name, $"^(ST|PS{delim}(SB|VS)){delim}(PU|PV|ITU|ITV){delim}\\d{{2}}[abv]?$"))
			{
				Console.WriteLine(name);
			}
			else
			{
				Console.WriteLine("Error: Bad group");
			}
			C
		}
	}
}
