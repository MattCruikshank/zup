#pragma once
#include <memory>
#include <string>

struct ZIPFileData;

class ZUPFile
{
public:
  ZUPFile() {}

  void SaveToFile(std::string fileName);

  void LoadFromFile(std::string fileName);

  void ShowAlways();

  void ShowFrame(int f);

  void ShowFrameRange(int f1, int f2); // [f1, f2)

  void AddPoint(float x, float y, float z);

  void AddLine(float x1, float y1, float z1, float x2, float y2, float z2);

  void AddTriangle(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);

  void AddSphere(float x, float y, float z, float r);

  //void PushText();

  //void AddText(std::string line);

  //void PopText();

  //void SetText(std::string line);

private:
  std::unique_ptr<ZIPFileData> _data;
};