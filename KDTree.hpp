#ifndef KDTREE_H_
#define KDTREE_H_

/*
 * K-D Tree implementation.
 *
 * Author: Hugo Mårdbrink
 */


namespace KDTree
{
  template <typename PointT>
  class KDTree
  {
    public:
      KDTree();
      KDTree(std::vector<PointT> points);
      ~KDTree();

    private:
      struct KDNode 
      {
        int index;
        PointT point;
      };

  };



}


#endif /* KDTREE_H_ */