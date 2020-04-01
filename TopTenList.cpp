//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  if(index < 1 || index > _list.size()){
    return;
  }

  _list[index-1] = link;
  return;

}

Hyperlink TopTenList::get(int index)
{
  if(index < 1 || index > _list.size()){
    exit(1);
  }
  return _list[index-1];
}
