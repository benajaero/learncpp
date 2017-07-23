#ifndef RGBA_H
#define RGBA_H


class RGBA {
    private:
        int m_red;
        int m_blue;
        int m_green;
        int m_alpha;
    public:
        RGBA();
        RGBA(int red=0, int blue=0, int green=0, int alpha=255);
        void print();
};



#endif
