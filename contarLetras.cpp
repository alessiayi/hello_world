#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
  string palabra="hola";
  map<char, int> mapa;
  //cin >> "Ingrese texto: " >> palabra;
  for (int i=0; i<palabra.size(); i++){
    mapa.insert (pair <char, int> ('a',0));
    mapa.insert (pair <char, int> ('i',0));
    mapa.insert (pair <char, int> ('u',0));
    mapa.insert (pair <char, int> ('e',0));
    mapa.insert (pair <char, int> ('o',0));
    if (mapa.find(palabra[i])!=mapa.end()){
      mapa.find(palabra[i])->second+=1;
    }
  }
  for (auto it=mapa.begin(); it!=mapa.end(); ++it){
    cout << it->first << " => " << it->second << '\n';
  }
  return 0;
}
