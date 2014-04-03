/* This file was generated by SableCC (http://www.sablecc.org/). */

#include "node.h"
#include "list.h"

void rose::_List_helper::insert (_GenericNode *owner, list_t& guts, list_t::iterator pos, Node node)
{
  if ( !node ) return; // Should we throw something instead?

  if ( owner ) {
      if ( node.parent() ) node.parent().removeChild(node);
      node.parent(owner);
  }

  guts.insert (pos, node);
}

bool rose::_List_helper::replace (_GenericNode *owner, list_t& guts, Node node, Node new_node)
{
  if ( node == new_node ) return false; // Should we throw something instead?
  if ( !new_node ) return erase (owner, guts, node);

  for ( list_t::iterator it = guts.begin(); it != guts.end(); it++ ) {
      if ( *it == node ) {
          if (owner) {
              (*it).parent(0);
              if ( new_node.parent() ) new_node.parent().removeChild(new_node);
              new_node.parent(owner);
          }
          *it = new_node;
          return true;
      }
  }

  return false;
}

void rose::_List_helper::assign (_GenericNode *owner, list_t& guts,
    const _GenericNode *fo, const list_t& fg)
{
  _GenericNode *from_owner = const_cast<_GenericNode *>(fo);
  list_t from_guts = const_cast<list_t&>(fg);

  if ( &guts == &from_guts ) return;  // safety

  _List_helper::erase (owner, guts, guts.begin(), guts.end());
  for ( list_t::iterator it = from_guts.begin(); it != from_guts.end(); it++ ) {
      Node n = *it;
      guts.push_back(n);

      if ( owner ) {
          if ( !from_owner && n.parent() )
              n.parent().removeChild (n);

          n.parent (owner);

          if ( from_owner ) {
              it = from_guts.erase(it);
              continue;
          }
      }
  }
}

bool rose::_List_helper::erase (_GenericNode *owner, list_t& guts, Node node)
{
  for ( list_t::iterator it = guts.begin(); it != guts.end(); it++ ) {
      if ( *it == node ) {
          if (owner) (*it).parent(0);
          guts.erase(it);
          return true;
      }
  }

  return false;
}

rose::_List_helper::list_t::iterator rose::_List_helper::erase (_GenericNode *owner, list_t& guts, list_t::iterator begin, list_t::iterator end)
{
  if ( owner ) {
      for ( list_t::iterator it = begin; it != end; it++ )
          (*it).parent(0);
  }

  return guts.erase (begin, end);
}

void rose::_List_helper::apply (list_t& guts, Analysis& analysis)
{
  list_t l = guts;
  for ( list_t::iterator it = l.begin(); it != l.end(); it++ )
      (*it).apply (analysis);
}

void rose::_List_helper::reverse_apply (list_t& guts, Analysis& analysis)
{
  list_t l = guts;
  for ( list_t::reverse_iterator it = l.rbegin(); it != l.rend(); it++ )
      (*it).apply (analysis);
}
