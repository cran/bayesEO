// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bayes_smoother_fraction
NumericVector bayes_smoother_fraction(const NumericMatrix& logits, const int& nrows, const int& ncols, const int& window_size, const NumericVector& smoothness, const double& neigh_fraction);
RcppExport SEXP _bayesEO_bayes_smoother_fraction(SEXP logitsSEXP, SEXP nrowsSEXP, SEXP ncolsSEXP, SEXP window_sizeSEXP, SEXP smoothnessSEXP, SEXP neigh_fractionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type logits(logitsSEXP);
    Rcpp::traits::input_parameter< const int& >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< const int& >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int& >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type smoothness(smoothnessSEXP);
    Rcpp::traits::input_parameter< const double& >::type neigh_fraction(neigh_fractionSEXP);
    rcpp_result_gen = Rcpp::wrap(bayes_smoother_fraction(logits, nrows, ncols, window_size, smoothness, neigh_fraction));
    return rcpp_result_gen;
END_RCPP
}
// bayes_var
arma::mat bayes_var(const arma::mat& m, const arma::uword m_nrow, const arma::uword m_ncol, const arma::mat& w, const double neigh_fraction);
RcppExport SEXP _bayesEO_bayes_var(SEXP mSEXP, SEXP m_nrowSEXP, SEXP m_ncolSEXP, SEXP wSEXP, SEXP neigh_fractionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_nrow(m_nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_ncol(m_ncolSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const double >::type neigh_fraction(neigh_fractionSEXP);
    rcpp_result_gen = Rcpp::wrap(bayes_var(m, m_nrow, m_ncol, w, neigh_fraction));
    return rcpp_result_gen;
END_RCPP
}
// C_label_max_prob
arma::colvec C_label_max_prob(const arma::mat& x);
RcppExport SEXP _bayesEO_C_label_max_prob(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_label_max_prob(x));
    return rcpp_result_gen;
END_RCPP
}
// kernel_smoother
arma::mat kernel_smoother(const arma::mat& m, const arma::uword m_nrow, const arma::uword m_ncol, const arma::mat& w, const bool normalised);
RcppExport SEXP _bayesEO_kernel_smoother(SEXP mSEXP, SEXP m_nrowSEXP, SEXP m_ncolSEXP, SEXP wSEXP, SEXP normalisedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_nrow(m_nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_ncol(m_ncolSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const bool >::type normalised(normalisedSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel_smoother(m, m_nrow, m_ncol, w, normalised));
    return rcpp_result_gen;
END_RCPP
}
// bilateral_smoother
arma::mat bilateral_smoother(const arma::mat& m, const arma::uword m_nrow, const arma::uword m_ncol, const arma::mat& w, double tau);
RcppExport SEXP _bayesEO_bilateral_smoother(SEXP mSEXP, SEXP m_nrowSEXP, SEXP m_ncolSEXP, SEXP wSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_nrow(m_nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type m_ncol(m_ncolSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(bilateral_smoother(m, m_nrow, m_ncol, w, tau));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bayesEO_bayes_smoother_fraction", (DL_FUNC) &_bayesEO_bayes_smoother_fraction, 6},
    {"_bayesEO_bayes_var", (DL_FUNC) &_bayesEO_bayes_var, 5},
    {"_bayesEO_C_label_max_prob", (DL_FUNC) &_bayesEO_C_label_max_prob, 1},
    {"_bayesEO_kernel_smoother", (DL_FUNC) &_bayesEO_kernel_smoother, 5},
    {"_bayesEO_bilateral_smoother", (DL_FUNC) &_bayesEO_bilateral_smoother, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayesEO(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
