#ifndef TINY_TREE_H
#define TINY_TREE_H

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tree.h"
#include "input.h"

namespace Tiny
{

// This wrapper is similar to cp_tree used in C++ FE
// and is used to keep a location for those trees
// that do not have it
struct Tree
{
public:
  Tree () : t (NULL_TREE), loc (UNKNOWN_LOCATION) {}
  Tree (tree t_) : t (t_), loc (EXPR_LOCATION (t)) {}
  Tree (tree t_, location_t loc_) : t (t_), loc (loc_) {}
  Tree (Tree t_, location_t loc_) : t (t_.get_tree ()), loc (loc_) {}

  location_t
  get_locus () const
  {
    return loc;
  }

  void
  set_locus (location_t loc_)
  {
    loc = loc_;
  }

  tree
  get_tree () const
  {
    return t;
  }

  tree_code
  get_tree_code () const
  {
    return TREE_CODE (t);
  }

  void
  set_tree (tree t_)
  {
    t = t_;
  }

  bool
  is_error () const
  {
    return error_operand_p (t);
  }

  bool
  is_null ()
  {
    return t == NULL_TREE;
  }

  static Tree
  error ()
  {
    return Tree (error_mark_node);
  }

  Tree get_type() const
    {
      return TREE_TYPE(t);
    }

private:
  tree t;
  location_t loc;
};

inline bool operator==(Tree t1, Tree t2) { return t1.get_tree () == t2.get_tree (); }
inline bool operator!=(Tree t1, Tree t2) { return !(t1 == t2); }
}

#endif // TINY_TREE_H
