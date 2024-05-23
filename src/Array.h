#pragma once
#include "List.h"
#include <iostream>

using namespace std;

class Library
{
public:
	Library();
	Library(int);
	~Library();
	void increaseSize();
	void decreaseSize();
	int searchPlaylist(string);
	void insert(Playlist);
	void printPlaylists();

	/* Setters and getters */
	void setSize(int);
	int getSize();
	Playlist& getPlaylist(int);
private:
	int size;
	Playlist* library;
};
