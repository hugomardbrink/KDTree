#include <vector>
#include "KDTree.hpp"

struct Point3f
{
  float x,y,z;
};

int main() 
{
  std::vector<Point3f> positions{{0.0f, 0.0f, 0.0f}, {0.9f, 0.3f, 1.2f}, {2.2f, 3.5f, 1.8f}};

  KDTree::KDTree<Point3f> tree{};
  
}