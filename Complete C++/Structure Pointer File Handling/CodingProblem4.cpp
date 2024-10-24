// You are an ardent movies fan. We are given the following information about T movies

// 1.  Name of the movie
// 2.  Year of its release

// Popularity on imdb (on a scale of 1 to 5 - necessarily integers). You need to use your knowledge about an array of structures and output the following -

// 1.  The year which had the most movies. We need to output the latest year in case there are multiple years with the same count of movies released.

// 2.  Count of movies with popularity greater than or equal to 4.





// Solution as follows

#include <iostream>
using namespace std;

struct Movie {
    string name;
    int releaseYear;
    int popularity;
};

int main() {
    int T;
    cin >> T;
    Movie movies[T];
    
    for (int i = 0; i < T; i++) {
        cin >> movies[i].name;
        cin >> movies[i].releaseYear;
        cin >> movies[i].popularity;
    }

    int yearCounts[10000] = {0};
    for (int i = 0; i < T; i++) {
        yearCounts[movies[i].releaseYear]++;
    }

    int maxYear = 0;
    for (int i = 1; i < 10000; i++) {
        if (yearCounts[i] >= yearCounts[maxYear]) maxYear = i;
    }

    int popularCount = 0;
    for (int i = 0; i < T; i++) {
        if (movies[i].popularity >= 4) popularCount++;
    }

    cout << maxYear << "\n";
    cout << popularCount << "\n";
}