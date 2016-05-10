//#include <Armadillo>
#include <RcppArmadillo.h>

// Cの関数はそのまま書く
arma::mat getRandomMatrix(int matSize = 3){
  arma::mat randomMatrix  = arma::randn(matSize, matSize);
  return (randomMatrix);
}

// Rのから呼び出す関数は下2行を足す
// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]
arma::mat calcCorrate(int matSize = 3){
  arma::mat randomMatrix = getRandomMatrix(matSize);
  arma::mat corMatrix = cor(randomMatrix, randomMatrix);
  return(corMatrix);
}

// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]
arma::mat getCorrate(arma::mat dataMatrix){
  arma::mat corMatrix = cor(dataMatrix, dataMatrix);
  return(corMatrix);
}