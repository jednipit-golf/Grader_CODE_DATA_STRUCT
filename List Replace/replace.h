
void replace(const T& x, list<T>& y) {
  //write your code here
  auto it = begin();
  while(it != end()){
    if(*it == x){
      auto it2 = erase(it);
      for(auto j:y){
        it = insert(it2,j);
      }
    }else{
    it++;
    }
  }
}
