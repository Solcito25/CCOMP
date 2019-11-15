#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    public:
        Polygon();
        Polygon(int a, int b);
        virtual ~Polygon();
        int area();
        void printarea();

    protected:

    private:
        int width, height;
};

#endif // POLYGON_H
