#include <iostream>
#include <fstream> 
#include "TH1F.h"
#include <vector>

using namespace std;

template <typename T> void Print( const vector<T> & v ) {
  for (unsigned int i=0; i<v.size(); i++) cout << v[i] << endl;
};

template <typename T> void Print( const vector<T> & v  , char* filename ) {
 
 ofstream outData(filename);

  sort(v.begin(), v.end());

  if (!outData) {
    cout << "Non posso creare il file " << filename << endl;
    return;
  }

  for (int i = 0; i < v.size(); i++) {
    outData << v[i] << endl;
  }
  outData.close();

  return;

};


template <typename T> vector<T> Read( unsigned int N, char* filename ) {

   vector<T> v;
  fstream inData;
  inData.open(filename, ios::in);

  if (!inData.good()) {
    throw runtime_error("ERROR, failed to open file...");

    inData.clear();
  } else {
    for (int i = 0; i < N; i++) {
      T val = 0;
      inData >> val;
      v.push_back(val);
      if (inData.eof()) {
        cout << "Il file è finito" << endl;
        break;
      }
    }
  }
  inData.close();

  return v;

};

template <typename T> vector<T> ReadAll( const char* filename ) {

  vector<T> v;

  fstream inData;
  inData.open(filename, ios::in);

  if (!inData.good()) {
    throw runtime_error("ERROR, failed to open file...");

    //inData.clear();
  }

  T appo=0;
  while (inData >> appo)
    v.push_back(appo);

  return v;
 
};

template <typename T> double CalcolaMedia( const vector<T> & v) {

 double accumulo = 0;

  if (v.size() == 0) {
    return accumulo;
  } else {
    for (int k = 0; k < v.size(); k++) {
      accumulo += v[k];
    }
  }
  return accumulo / double(v.size());

};


template <typename T> double CalcolaMediana( vector<T> v ) {

   sort( v.begin(), v.end() ) ;  
  
   double mediana = 0;

  if (v.size() % 2 == 0) {
    mediana = (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2;
  } else {
    mediana = v[v.size() / 2];
  }

  return mediana;

};


template <typename T> TH1F FillHisto( const vector<T> & v){
 
  TH1F h ("histo","histo", 100, -10, 100) ;
  h.StatOverflows( kTRUE );
  for ( int k = 0 ; k < v.size() ; k++ ) h.Fill( v[k] );
  return h;

}


