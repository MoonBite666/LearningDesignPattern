#include "MediaPlayer.h"

#include <iostream>

MediaPlayer::~MediaPlayer() = default;

void AudioPlayer::play(const std::string &filetype, const std::string &filename) {
    if(filetype == "mp3" || filetype == "m4a")
        std::cout << "Playing: " << filename << std::endl;
    else{
        MediaAdaptor adaptor;
        adaptor.play(filetype,filename);
    }
}

void VideoPlayer::playMP4(const std::string &filename) {
    std::cout << "Playing: " << filename << std::endl;
}

void VideoPlayer::playMKV(const std::string &filename) {
    std::cout << "Playing: " << filename << std::endl;
}

MediaAdaptor::MediaAdaptor() : _player(new VideoPlayer){}
MediaAdaptor::~MediaAdaptor() { delete _player; }


void MediaAdaptor::play(const std::string &filetype, const std::string &filename) {
    if(filetype == "mp4")
        playMP4(filename);
    else if(filetype == "mkv")
        playMKV(filename);
    else
        std::cout << "Invalid File Format \"" << filetype << "\"" << std::endl;
}

void MediaAdaptor::playMP4(const std::string &filename) {
    _player->playMP4(filename);
}

void MediaAdaptor::playMKV(const std::string &filename) {
    _player->playMKV(filename);
}

