#include "pompe.hh"

using namespace std;

pompe::pompe(){
  id = 0;
  name = 'P'+id;
  type = 'N';
  state = true;
  failure = false;
}

pompe::pompe(const pompe &p){
  this->name = p.name;
  this->id = p.id;
  this->type = p.type;
  this->state = p.state;
  this->failure = p.failure;
}

pompe::pompe(int id){
  this->id = id;
  name = 'P'+this->id;
  type = 'N';
  state = true;
  failure = false;
}

pompe::pompe(int id, bool state){
  this->id = id;
  name = 'P'+this->id;
  type = 'N';
  this->state = state;
  failure = false;
}

pompe::pompe(int id, bool state, char type){
  this->id = id;
  name = 'P'+this->id;
  this->type = type;
  this->state = state;
  failure = false;
}

pompe::~pompe(){
  delete this;
}

pompe & pompe::operator=(const pompe &p){
  if (this==&p){
    return *this;
  }

  this->name = p.name;
  this->id = p.id;
  this->type = p.type;
  this->state = p.state;
  this->failure = p.failure;

  return *this;
}
