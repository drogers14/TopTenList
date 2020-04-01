//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

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

void TopTenList::display_forward(){
  for(int i=0; i<_list.size(); i++){
    cout<<i+1<<". <a href="<<'"';
    cout<<_list[i].url;
    cout<<'"'<<'>'<<_list[i].text<<"</a>"<<endl;
  }
}

void TopTenList::display_backward(){
  for(int i=_list.size()-1; i>=0; i--){
    cout<<i+1<<". <a href="<<'"';
    cout<<_list[i].url;
    cout<<'"'<<'>'<<_list[i].text<<"</a>"<<endl;
  }

}
