#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

class TodtwarzaczMuzyki
{
public:
    void deleteSong()
    {
        listOfSongs.pop_front();
    }
    void addSong(string name)
    {
        listOfSongs.push_back(name);
    }
    void showSongs()
    {
        for (x = listOfSongs.begin(); x != listOfSongs.end(); ++x,++counter)
        {
            cout<<"["<<counter<<"]="<<(*x)<<endl;
        }
        counter=0;
    }
    void playNextSong()
    {
        x=listOfSongs.begin();
        cout<<"Piosenka [N]:"<<(*x)<<endl;
        listOfSongs.push_back((*x));
        listOfSongs.pop_front();
    }
    void playPrevoiusSong()
    {
        x=listOfSongs.end();
        x--;
        cout<<"Piosenka [P]:"<<(*x)<<endl;
    }
private:
    int counter=0;
    list <string> listOfSongs;
    list<string>::iterator x;
};

int main()
{
    TodtwarzaczMuzyki MP3;
    MP3.addSong("Pierwsza");
    MP3.addSong("Druga");
    MP3.addSong("Trzecia");
    MP3.showSongs();
    MP3.playNextSong();
    MP3.playPrevoiusSong();
    MP3.playPrevoiusSong();
    MP3.deleteSong();
    MP3.playNextSong();
    MP3.playPrevoiusSong();


}
