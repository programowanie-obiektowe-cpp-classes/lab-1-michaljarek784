class Wektor2D
{
    private:
    double X;
    double Y;

    public:
    Wektor2D(double x, double y){
        X=x; Y=y;
    }

    Wektor2D(){ //wektor domyslny
        X=0.0; Y=0.0;}
    //Settery
    void setX(double newX){
        X=newX;
    }

    void setY(double newY){
        Y=newY;
    }
    //Gettery
    double getX(){
        return X;
    }

    double getY(){
        return Y;
    }
    //dodawanie
    Wektor2D operator+(const Wektor2D& inny){
        return Wektor2D(X+inny.X, Y+inny.Y);
    }
    //mnozenie skalarne
    double operator*(const Wektor2D& inny){
        return X*inny.X + Y*inny.Y;
    }

};
