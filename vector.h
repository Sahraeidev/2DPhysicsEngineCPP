#pragma once


class Vector2D{

  public:
  Vector2D(float px,float py) : X(px), Y(py){}

  float GetX() const {return X;}
  float GetY() const {return Y;}

  void SetX(float newX){X = newX;}
  void SetY(float newY){Y = newY;}

  Vector2D operator+(const Vector2D &Vec)
  {
    Vector2D result(0,0);
    result.SetX(X + Vec.GetX());
    result.SetY(Y + Vec.GetY());
    return result;
  }
   Vector2D operator-(const Vector2D &Vec)
  {
    Vector2D result(0,0);
    result.SetX(X - Vec.GetX());
    result.SetY(Y - Vec.GetY());
    return result;
  }

  private:
  float X,Y;

  
};