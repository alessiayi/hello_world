#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
  string palabra="hola";
  map<char, int> mapa;
  //cin >> "Ingrese texto: " >> palabra;
  for (int i=0; i<palabra.size(); i++){
    if (mapa.find(palabra[i])==mapa.end()){
      mapa.insert (pair <char, int> (palabra[i],1));
    }
    else{
      mapa.find(palabra[i])->second+=1;
    }
  }
  for (auto it=mapa.begin(); it!=mapa.end(); ++it){
    cout << it->first << " => " << it->second << '\n';
  }
  return 0;
}
