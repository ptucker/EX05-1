#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class Movie
{
private:
	string title;
	string genre;
	int showTime;
public:
	//Come up with a default movie for your theater
	Movie();
	// for Genre, only Action, Comedy, Horror, and Documentary. If none of those, default to Comedy
	Movie(string Title, string Genre, int ShowTime);
	string GetTitle(); // Returns the movie title
	string GetGenre(); // Returns the movie genre
	int GetShowtime(); //When is this movie shown?
};
#endif