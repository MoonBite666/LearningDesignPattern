#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H
#include <string>

class MediaPlayer {
public:
    MediaPlayer() = default;
    virtual ~MediaPlayer() = 0;
    virtual void play(const std::string &filetype, const std::string &filename) = 0;
};

class AudioPlayer : public MediaPlayer{
public:
    ~AudioPlayer() override = default;
    void play(const std::string &filetype, const std::string &filename) override;
};


class VideoPlayer{
public:
    void playMP4(const std::string &filename);
    void playMKV(const std::string &filename);
};

class MediaAdaptor : public MediaPlayer {
public:
    MediaAdaptor();
    ~MediaAdaptor() override;
    void play(const std::string &filetype, const std::string &filename) override;

private:
    VideoPlayer *_player;
    [[deprecated("Use VideoPlayer::playMP4() instead")]]void playMP4(const std::string &filename);
    [[deprecated("Use VideoPlayer::playMKV() instead")]]void playMKV(const std::string &filename);
};


#endif //MEDIAPLAYER_H
