// ZUPFile.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "ZUPFile.h"
#include <list>
#include <vector>

struct Frame
{
  int start;
  int end;

  std::vector<float> _points;
  std::vector<float> _lines;
  std::vector<float> _triangles;
  std::vector<float> _spheres;
};

struct ZIPFileData
{
  std::list<Frame> _frames;
};