# RcppArmadilloの練習

# パッケージ----
if(!require(Rcpp)){
  install.packages("Rcpp", dependencies = T)
}
require(Rcpp)

if(!require(RcppArmadillo)){
  install.packages("RcppArmadillo", dependencies = T)
}
require(RcppArmadillo)

# メソッド呼び出し----
sourceCpp("method.cpp")

# メソッド確認----
calcCorrate(matSize = 10)

getCorrate(dataMatrix = as.matrix(iris[, -5]))
