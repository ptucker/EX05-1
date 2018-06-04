#ifndef THEATER_H_
#define THEATER_H_
#include <string>
using namespace std;

class Theater
{
private:
	string name;
	string phone;
	double popcornPrice;
	double cokePrice;
	string movies[11];	//all 11s are determined by the const value in source.cpp
	string genres[11];
	int times[11];
public:
	Theater();
	Theater(string Name, string Phone); //The name for this theater
	void AddMovie(Movie& Movie,int); //Add a movie at a specific time
	string GetMovieForHour(int hour); // What movie is shown at the given hour?
									  // Return "" if none are upcoming
	int GetShowTimeForGenre(string Genre); //When will the movie of the given genre be shown?
										   // Return -1 if none exist
	int GetPopcornPrice(); //Make up a cost in dollars for popcorn
	int GetCokePrice(); //Make up a cost on Coke};#endif