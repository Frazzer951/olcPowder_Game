#pragma once

#include "air.h"
#include "olcPixelGameEngine.h"
#include "powderGame.h"

struct sand : public air
{
  sand( PowderGame * _game ) : air { _game } { name = "sand"; }

  virtual void update( olc::vi2d pos, float fElapsedTime );
  virtual void draw( olc::PixelGameEngine * pge, olc::vi2d pos, int powderSize );
};
