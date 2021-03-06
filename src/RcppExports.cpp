// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// TransData_c
void TransData_c(std::string bfile, SEXP pBigMat, long maxLine, int threads, bool verbose);
RcppExport SEXP KAML_TransData_c(SEXP bfileSEXP, SEXP pBigMatSEXP, SEXP maxLineSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bfile(bfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< long >::type maxLine(maxLineSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    TransData_c(bfile, pBigMat, maxLine, threads, verbose);
    return R_NilValue;
END_RCPP
}
// gaston_brent
List gaston_brent(NumericVector Y, NumericMatrix X, IntegerVector p_, NumericVector Sigma, NumericMatrix U, double min_h2, double max_h2, double tol, double verbose);
RcppExport SEXP KAML_gaston_brent(SEXP YSEXP, SEXP XSEXP, SEXP p_SEXP, SEXP SigmaSEXP, SEXP USEXP, SEXP min_h2SEXP, SEXP max_h2SEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type U(USEXP);
    Rcpp::traits::input_parameter< double >::type min_h2(min_h2SEXP);
    Rcpp::traits::input_parameter< double >::type max_h2(max_h2SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gaston_brent(Y, X, p_, Sigma, U, min_h2, max_h2, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// crossprodcpp
SEXP crossprodcpp(SEXP X);
RcppExport SEXP KAML_crossprodcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprodcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// geninv
SEXP geninv(SEXP GG);
RcppExport SEXP KAML_geninv(SEXP GGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type GG(GGSEXP);
    rcpp_result_gen = Rcpp::wrap(geninv(GG));
    return rcpp_result_gen;
END_RCPP
}
