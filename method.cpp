//#include <Armadillo>
#include <RcppArmadillo.h>

int jisakudouble(int x){
  int y = x*2;
  return(y);
}

arma::mat jisakumat(int n = 3,int t=2){
  arma::mat m = arma::zeros<arma::mat>(n,n);
  int k = 0;
  for(int r=0; r<n; ++r){
    for(int c=0; c<n; ++c){
      m(r, c) = ++k + jisakudouble(t*r);
    }
  }
  return(m);
}

// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]
arma::mat toR(int n, int t){
  arma::mat m = jisakumat(n,t);
  return(m);
}