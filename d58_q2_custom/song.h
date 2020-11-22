#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>

#include "priority_queue.h"

using namespace std;

class Song {
   public:
    std::string artist, title;
    int count;

    Song() {}
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) {}
    Song(std::string artist, std::string title, int count) : artist(artist), title(title), count(count) {}

    friend std::ostream &operator<<(std::ostream &out, const Song &s) {
        return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

    bool operator<(const Song &other) const {
        if (artist.compare(other.artist) != 0)
            return artist.compare(other.artist) > 0;
        else if (title.compare(other.title) != 0)
            return title.compare(other.title) > 0;
        return count > other.count;
    }

    bool operator>(const Song &other) const {
        if (count != other.count)
            return count < other.count;
        else if (artist.compare(other.artist) != 0)
            return artist.compare(other.artist) > 0;
        return title.compare(other.title) > 0;
    }
};

//  you have to write something below this line
//  you *MIGHT* have to change the declaration of pq1 and pq2
CP::priority_queue<Song, std::less<Song> > pq1;
CP::priority_queue<Song, std::greater<Song> > pq2;

#endif
