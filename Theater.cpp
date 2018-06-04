//I affirm that all code given below was written solely by me, David Martin, and that any help I received adhered to the rules stated for this exam.
#include "Theater.h"
#include "Movie.h"
#include <string>
#include <iostream>
using namespace std;

Theater::Theater()
{
	popcornPrice = 12.75;
	cokePrice = 5.50;
}
Theater::Theater(string Name, string Phone)
{
	name = Name;
	phone = Phone;
}
void Theater::AddMovie(Movie& Movie,int m)
{
	movies[m] = Movie.GetTitle();
	genres[m] = Movie.GetGenre();
	times[m] = Movie.GetShowtime();


	cout << Movie.GetTitle() << " is " << Movie.GetGenre << " at " << Movie.GetShowtime << endl;
}//Add a movie at a specific time
string Theater::GetMovieForHour(int hour)
{
	for (int i = 0; i <= 11; i++)
	{
		if (times[i] == hour)
			return (movies[i]);
		else
			return ("");
	}
}// What movie is shown at the given hour?
								  // Return "" if none are upcoming
int Theater::GetShowTimeForGenre(string Genre)
{
	for (int i = 0; i <= 11; i++)
	{
		if (genres[i] == Genre)
			return (times[i]);
		else
			return (-1);
	}
}//When will the movie of the given genre be shown?
									   // Return -1 if none exist
int Theater::GetPopcornPrice()
{
	return popcornPrice;
}//Make up a cost in dollars for popcorn
int Theater::GetCokePrice()
{
	return cokePrice;
}//Make up a cost on Coke