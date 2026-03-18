#include <iostream>
#include <ctime> // will be used later
using namespace std;
class Episode {
    public:
    string series_title = "untitled";
    int season_number = 0; // 0 = Specials
    string episode_title = "untitled";
    int episode_number = 0; // 0 = Unaired or Original Pilot
    int release_date[3] = {26, 1, 1926} ; // day, month, year
    string synopsis = "Unaired";
    int episode_length = 0; // in seconds
    int time_remaining = episode_length; // in seconds
    string file_location;
    float file_size; //in megabytes
    float bitrate = file_size / static_cast<float>(episode_length); // in megabytes
};
class Series {
    public:
    string series_title = "untitled";
    int number_of_seasons = 1;
    int number_of_episodes = 0;
    int release_date[3] = {11, 5, 1940}; // day, month, year
    bool has_subtitles = false;
    string languages[2] = {"en"}; // ISO 639 codes. struct of 2 for purposes of anime and other dubbed shows (dub/sub).
    string description = "Unaired";
};
class Season {
    string series_title = "untitled";
    int season_number = 0;
    int number_of_episodes = 1;
    int release_date[3] = {11, 5, 1940}; // day, month, year
    string languages[2] = {"en"}; // In some shows, the dubs are delayed, so "partially" will be added in front of ISO code.
    string description = "Specials";
};
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    cout << "this is a test" << endl;
cout << "of the fake internet broadcasting system" << endl;

    return 0;
}
