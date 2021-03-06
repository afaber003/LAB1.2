#include "Playlist.h"
#include <iostream>


// Default Constructor
PlaylistNode::PlaylistNode(){
    nextNodePtr = nullptr;
    songLength = 0;
    songTitle = "none";
    uniqueID = "none";
    artistName = "none";
}

void PlaylistNode::InsertAfter(PlaylistNode* insertNode) {
  
  if (this->nextNodePtr == nullptr){
    this->nextNodePtr = insertNode;
  }
  else
  {
    PlaylistNode* temp = nullptr;
    temp = this->nextNodePtr;
    this->nextNodePtr = insertNode;
    insertNode->nextNodePtr = temp;
  }
}

void PlaylistNode::SetNext(PlaylistNode *nextNode){
  this->nextNodePtr = nextNode;
}

string PlaylistNode::GetID() const
{
  return this->uniqueID;
}

string PlaylistNode::GetSongName() const
{
  return this->songTitle;
}

string PlaylistNode::GetArtistName() const
{
  return this->artistName;
}

int PlaylistNode::GetSongLength() const
{
  return this->songLength;
}

PlaylistNode* PlaylistNode::GetNext() const
{
  return this->nextNodePtr;
}

void PlaylistNode::PrintPlaylistNode()
{
  cout << "Unique ID: " << GetID() << endl;
  cout << "Song Name: " << GetSongName() << endl;
  cout << "Artist Name: " << GetArtistName() << endl;
  cout << "Song Length (in seconds): " << GetSongLength() << endl;
}