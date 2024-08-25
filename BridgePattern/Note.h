#ifndef NOTE_H
#define NOTE_H

class Pattern;


class Note {
public:
    explicit Note(Pattern* pattern);
    virtual ~Note();
    virtual void printSelf() = 0;
    void setPattern(Pattern *pattern);
protected:
    Pattern* _pattern;
};

class NoteTap : public Note{
public:
    explicit NoteTap(Pattern* pattern);
    void printSelf() override;

};

class NoteHold : public Note {
public:
    explicit  NoteHold(Pattern* pattern);
    void printSelf() override;
    void setDuration(int);
private:
    int _last_bar;
};

class NoteSlide : public Note {
public:
    explicit  NoteSlide(Pattern* pattern);
    void printSelf() override;
    void setDuration(int);
private:
    int _last_bar;
};


#if 0
class Shape;
class Note {
public:
    Note(Pattern *pattern,Shape *shape);
    virtual ~Note();
    virtual void printSelf();
private:
    Shape *_shape;
    Pattern *_pattern;
};
#endif

#endif //NOTE_H
