// #include <iostream>

// using namespace std;

// class burger
// {
// public:
//     virtual void create() = 0;
//     virtual string name() = 0;
// };

// class VegBurger : public burger
// {
// public:
//     void create()
//     {
//         cout << "Created VegBurger!!!" << endl;
//     }

//     string name()
//     {
//         return "Vegi burger";
//     }
// };

// class NonVegBurger : public burger
// {
//     void create()
//     {
//         cout << "Created Non-vegBurger!!!" << endl;
//     }

//     string name()
//     {
//         return "Non-veg burger";
//     }
// };

// class pizza
// {
// public:
//     virtual void create() = 0;
//     virtual string name() = 0;
// };

// class VegPizza : public pizza
// {
//     void create()
//     {
//         cout << "Created Veg Pizza!!!" << endl;
//     }

//     string name()
//     {
//         return "Veg pizza";
//     }
// };

// class NonVegPizza : public pizza
// {
//     void create()
//     {
//         cout << "Created NonVeg Pizza!!!" << endl;
//     }

//     string name()
//     {
//         return "NonVeg pizza";
//     }
// };

// class Restaurant
// {
// public:
//     virtual burger *prepareBurger() = 0;
//     virtual pizza *preparePizza() = 0;
// };

// class VegRestaurant : public Restaurant
// {
//     burger *prepareBurger()
//     {
//         burger *b = new VegBurger();
//         return b;
//     }

//     pizza *preparePizza()
//     {
//         pizza *p = new VegPizza();
//         return p;
//     }
// };

// class NonVegRestaurant : public Restaurant
// {
//     burger *prepareBurger()
//     {
//         burger *b = new NonVegBurger();
//         return b;
//     }

//     pizza *preparePizza()
//     {
//         pizza *p = new NonVegPizza();
//         return p;
//     }
// };

// // int main()
// // {
// //     Restaurant *f = new VegRestaurant();
// //     burger *b = f->prepareBurger();
// //     b->create();
// //     return 0;
// // }

#include <iostream>
#include <string>

using namespace std;

// Target interface (the interface client code expects)
class MediaPlayer
{
public:
    virtual void play(string audioType, string fileName) = 0;
};

// Adaptee 1 (Advanced media player with a different interface)
class AdvancedMediaPlayer
{
public:
    virtual void playVlc(string fileName) = 0;
    virtual void playMp4(string fileName) = 0;
};

class VlcPlayer : public AdvancedMediaPlayer
{
public:
    void playVlc(string fileName)
    {
        cout << "Playing vlc file. Name: " << fileName << endl;
    }

    void playMp4(string fileName)
    {
        // Do nothing
    }
};

class Mp4Player : public AdvancedMediaPlayer
{
public:
    void playVlc(string fileName)
    {
        // Do nothing
    }

    void playMp4(string fileName)
    {
        cout << "Playing mp4 file. Name: " << fileName << endl;
    }
};

// Adapter class
class MediaAdapter : public MediaPlayer
{
    AdvancedMediaPlayer *advancedMusicPlayer;

public:
    MediaAdapter(string audioType)
    {
        if (audioType == "vlc")
            advancedMusicPlayer = new VlcPlayer();
        else if (audioType == "mp4")
            advancedMusicPlayer = new Mp4Player();
    }

    void play(string audioType, string fileName)
    {
        if (audioType == "vlc")
            advancedMusicPlayer->playVlc(fileName);
        else if (audioType == "mp4")
            advancedMusicPlayer->playMp4(fileName);
    }

    ~MediaAdapter()
    {
        delete advancedMusicPlayer;
    }
};

// Concrete class implementing MediaPlayer interface
class AudioPlayer : public MediaPlayer
{
    MediaAdapter *mediaAdapter;

public:
    void play(string audioType, string fileName)
    {
        if (audioType == "mp3")
        {
            cout << "Playing mp3 file. Name: " << fileName << endl;
        }
        else if (audioType == "vlc" || audioType == "mp4")
        {
            mediaAdapter = new MediaAdapter(audioType);
            mediaAdapter->play(audioType, fileName);
            delete mediaAdapter;
        }
        else
        {
            cout << "Invalid media. " << audioType << " format not supported" << endl;
        }
    }
};
