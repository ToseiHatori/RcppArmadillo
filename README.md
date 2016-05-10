# RcppArmadilloの練習

* rcppファイルの関数の上で下記の2行を置く。
```
// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]
```
* ヘッダーにはこれを記入
```
//#include <Armadillo>
#include <RcppArmadillo.h>
```
