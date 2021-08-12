// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/BayesFactor.h"
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// hFunc
double hFunc(const double rho, const int n, const double r, const bool hg_checkmod, const int hg_iter);
RcppExport SEXP _BayesFactor_hFunc(SEXP rhoSEXP, SEXP nSEXP, SEXP rSEXP, SEXP hg_checkmodSEXP, SEXP hg_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    Rcpp::traits::input_parameter< const bool >::type hg_checkmod(hg_checkmodSEXP);
    Rcpp::traits::input_parameter< const int >::type hg_iter(hg_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(hFunc(rho, n, r, hg_checkmod, hg_iter));
    return rcpp_result_gen;
END_RCPP
}
// jeffreys_approx_corr
double jeffreys_approx_corr(const double rho, const int n, const double r);
RcppExport SEXP _BayesFactor_jeffreys_approx_corr(SEXP rhoSEXP, SEXP nSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(jeffreys_approx_corr(rho, n, r));
    return rcpp_result_gen;
END_RCPP
}
// metropCorrRcpp_jeffreys
NumericMatrix metropCorrRcpp_jeffreys(NumericVector r, NumericVector n, double a_prior, double b_prior, bool approx, int iterations, bool doInterval, NumericVector intervalz, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP _BayesFactor_metropCorrRcpp_jeffreys(SEXP rSEXP, SEXP nSEXP, SEXP a_priorSEXP, SEXP b_priorSEXP, SEXP approxSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalzSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a_prior(a_priorSEXP);
    Rcpp::traits::input_parameter< double >::type b_prior(b_priorSEXP);
    Rcpp::traits::input_parameter< bool >::type approx(approxSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intervalz(intervalzSEXP);
    Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP);
    Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(metropCorrRcpp_jeffreys(r, n, a_prior, b_prior, approx, iterations, doInterval, intervalz, intervalCompl, nullModel, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}
// dinvgamma1_Rcpp
double dinvgamma1_Rcpp(const double x, const double a, const double b);
RcppExport SEXP _BayesFactor_dinvgamma1_Rcpp(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(dinvgamma1_Rcpp(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// dinvgamma1_logx_Rcpp
double dinvgamma1_logx_Rcpp(const double x, const double a, const double b);
RcppExport SEXP _BayesFactor_dinvgamma1_logx_Rcpp(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(dinvgamma1_logx_Rcpp(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// ddinvgamma1_Rcpp
double ddinvgamma1_Rcpp(const double x, const double a, const double b);
RcppExport SEXP _BayesFactor_ddinvgamma1_Rcpp(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(ddinvgamma1_Rcpp(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// d2dinvgamma1_Rcpp
double d2dinvgamma1_Rcpp(const double x, const double a, const double b);
RcppExport SEXP _BayesFactor_d2dinvgamma1_Rcpp(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(d2dinvgamma1_Rcpp(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// genhypergeo_series_pos
NumericVector genhypergeo_series_pos(NumericVector U, NumericVector L, NumericVector z, const double tol, const int maxiter, const bool check_mod, const bool check_conds, const bool polynomial);
static SEXP _BayesFactor_genhypergeo_series_pos_try(SEXP USEXP, SEXP LSEXP, SEXP zSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP check_modSEXP, SEXP check_condsSEXP, SEXP polynomialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< NumericVector >::type U(USEXP);
    Rcpp::traits::input_parameter< NumericVector >::type L(LSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const bool >::type check_mod(check_modSEXP);
    Rcpp::traits::input_parameter< const bool >::type check_conds(check_condsSEXP);
    Rcpp::traits::input_parameter< const bool >::type polynomial(polynomialSEXP);
    rcpp_result_gen = Rcpp::wrap(genhypergeo_series_pos(U, L, z, tol, maxiter, check_mod, check_conds, polynomial));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BayesFactor_genhypergeo_series_pos(SEXP USEXP, SEXP LSEXP, SEXP zSEXP, SEXP tolSEXP, SEXP maxiterSEXP, SEXP check_modSEXP, SEXP check_condsSEXP, SEXP polynomialSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BayesFactor_genhypergeo_series_pos_try(USEXP, LSEXP, zSEXP, tolSEXP, maxiterSEXP, check_modSEXP, check_condsSEXP, polynomialSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// jzs_log_marginal_posterior_logg
Rcpp::List jzs_log_marginal_posterior_logg(const NumericVector q, const double sumSq, const int N, const NumericMatrix XtCnX0, const NumericMatrix CnytCnX0, const NumericVector rscale, const IntegerVector gMap, const NumericVector gMapCounts, const NumericMatrix priorX, const int incCont, const bool limit, const NumericVector limits, const int which);
RcppExport SEXP _BayesFactor_jzs_log_marginal_posterior_logg(SEXP qSEXP, SEXP sumSqSEXP, SEXP NSEXP, SEXP XtCnX0SEXP, SEXP CnytCnX0SEXP, SEXP rscaleSEXP, SEXP gMapSEXP, SEXP gMapCountsSEXP, SEXP priorXSEXP, SEXP incContSEXP, SEXP limitSEXP, SEXP limitsSEXP, SEXP whichSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type sumSq(sumSqSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type XtCnX0(XtCnX0SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type CnytCnX0(CnytCnX0SEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type gMap(gMapSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type gMapCounts(gMapCountsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type priorX(priorXSEXP);
    Rcpp::traits::input_parameter< const int >::type incCont(incContSEXP);
    Rcpp::traits::input_parameter< const bool >::type limit(limitSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type limits(limitsSEXP);
    Rcpp::traits::input_parameter< const int >::type which(whichSEXP);
    rcpp_result_gen = Rcpp::wrap(jzs_log_marginal_posterior_logg(q, sumSq, N, XtCnX0, CnytCnX0, rscale, gMap, gMapCounts, priorX, incCont, limit, limits, which));
    return rcpp_result_gen;
END_RCPP
}
// jzs_Gibbs
NumericMatrix jzs_Gibbs(const int iterations, const NumericVector y, const NumericMatrix X, const NumericVector rscale, const double sig2start, const IntegerVector gMap, const NumericVector gMapCounts, const int incCont, bool nullModel, const IntegerVector ignoreCols, const int thin, const int progress, const Function callback, const double callbackInterval);
RcppExport SEXP _BayesFactor_jzs_Gibbs(SEXP iterationsSEXP, SEXP ySEXP, SEXP XSEXP, SEXP rscaleSEXP, SEXP sig2startSEXP, SEXP gMapSEXP, SEXP gMapCountsSEXP, SEXP incContSEXP, SEXP nullModelSEXP, SEXP ignoreColsSEXP, SEXP thinSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< const double >::type sig2start(sig2startSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type gMap(gMapSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type gMapCounts(gMapCountsSEXP);
    Rcpp::traits::input_parameter< const int >::type incCont(incContSEXP);
    Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type ignoreCols(ignoreColsSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< const Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< const double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(jzs_Gibbs(iterations, y, X, rscale, sig2start, gMap, gMapCounts, incCont, nullModel, ignoreCols, thin, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}
// jzs_sampler
NumericVector jzs_sampler(const int iterations, const NumericVector y, const NumericMatrix X, const NumericVector rscale, const IntegerVector gMap, const int incCont, const NumericVector importanceMu, const NumericVector importanceSig, const int progress, const Function callback, const double callbackInterval, const int which);
RcppExport SEXP _BayesFactor_jzs_sampler(SEXP iterationsSEXP, SEXP ySEXP, SEXP XSEXP, SEXP rscaleSEXP, SEXP gMapSEXP, SEXP incContSEXP, SEXP importanceMuSEXP, SEXP importanceSigSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP, SEXP whichSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type gMap(gMapSEXP);
    Rcpp::traits::input_parameter< const int >::type incCont(incContSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type importanceMu(importanceMuSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type importanceSig(importanceSigSEXP);
    Rcpp::traits::input_parameter< const int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< const Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< const double >::type callbackInterval(callbackIntervalSEXP);
    Rcpp::traits::input_parameter< const int >::type which(whichSEXP);
    rcpp_result_gen = Rcpp::wrap(jzs_sampler(iterations, y, X, rscale, gMap, incCont, importanceMu, importanceSig, progress, callback, callbackInterval, which));
    return rcpp_result_gen;
END_RCPP
}
// GibbsLinearRegRcpp
NumericMatrix GibbsLinearRegRcpp(const int iterations, const NumericVector y, const NumericMatrix X, const double r, const double sig2start, const bool nullModel, const int progress, const Function callback, const double callbackInterval);
RcppExport SEXP _BayesFactor_GibbsLinearRegRcpp(SEXP iterationsSEXP, SEXP ySEXP, SEXP XSEXP, SEXP rSEXP, SEXP sig2startSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const double >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double >::type sig2start(sig2startSEXP);
    Rcpp::traits::input_parameter< const bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< const int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< const Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< const double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(GibbsLinearRegRcpp(iterations, y, X, r, sig2start, nullModel, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}
// log_determinant_pos_def
double log_determinant_pos_def(Eigen::MatrixXd A);
RcppExport SEXP _BayesFactor_log_determinant_pos_def(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(log_determinant_pos_def(A));
    return rcpp_result_gen;
END_RCPP
}
// logSummaryStats
List logSummaryStats(NumericVector x);
RcppExport SEXP _BayesFactor_logSummaryStats(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logSummaryStats(x));
    return rcpp_result_gen;
END_RCPP
}
// log1pExp
double log1pExp(double x);
RcppExport SEXP _BayesFactor_log1pExp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log1pExp(x));
    return rcpp_result_gen;
END_RCPP
}
// logExpXplusExpY
double logExpXplusExpY(const double x, const double y);
RcppExport SEXP _BayesFactor_logExpXplusExpY(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(logExpXplusExpY(x, y));
    return rcpp_result_gen;
END_RCPP
}
// logExpXminusExpY
double logExpXminusExpY(const double x, const double y);
RcppExport SEXP _BayesFactor_logExpXminusExpY(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(logExpXminusExpY(x, y));
    return rcpp_result_gen;
END_RCPP
}
// metropMetaTRcpp
NumericMatrix metropMetaTRcpp(NumericVector t, NumericVector n1, NumericVector n2, bool twoSample, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP _BayesFactor_metropMetaTRcpp(SEXP tSEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP twoSampleSEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< bool >::type twoSample(twoSampleSEXP);
    Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP);
    Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP);
    Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(metropMetaTRcpp(t, n1, n2, twoSample, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}
// metropProportionRcpp
NumericMatrix metropProportionRcpp(NumericVector y, NumericVector n, double p0, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP _BayesFactor_metropProportionRcpp(SEXP ySEXP, SEXP nSEXP, SEXP p0SEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP);
    Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP);
    Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(metropProportionRcpp(y, n, p0, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}
// gibbsTwoSampleRcpp
NumericMatrix gibbsTwoSampleRcpp(NumericVector ybar, NumericVector s2, NumericVector N, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP _BayesFactor_gibbsTwoSampleRcpp(SEXP ybarSEXP, SEXP s2SEXP, SEXP NSEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ybar(ybarSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP);
    Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP);
    Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbsTwoSampleRcpp(ybar, s2, N, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}
// gibbsOneSampleRcpp
NumericMatrix gibbsOneSampleRcpp(double ybar, double s2, int N, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP _BayesFactor_gibbsOneSampleRcpp(SEXP ybarSEXP, SEXP s2SEXP, SEXP NSEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ybar(ybarSEXP);
    Rcpp::traits::input_parameter< double >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP);
    Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP);
    Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbsOneSampleRcpp(ybar, s2, N, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _BayesFactor_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("NumericVector(*genhypergeo_series_pos)(NumericVector,NumericVector,NumericVector,const double,const int,const bool,const bool,const bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _BayesFactor_RcppExport_registerCCallable() { 
    R_RegisterCCallable("BayesFactor", "_BayesFactor_genhypergeo_series_pos", (DL_FUNC)_BayesFactor_genhypergeo_series_pos_try);
    R_RegisterCCallable("BayesFactor", "_BayesFactor_RcppExport_validate", (DL_FUNC)_BayesFactor_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesFactor_hFunc", (DL_FUNC) &_BayesFactor_hFunc, 5},
    {"_BayesFactor_jeffreys_approx_corr", (DL_FUNC) &_BayesFactor_jeffreys_approx_corr, 3},
    {"_BayesFactor_metropCorrRcpp_jeffreys", (DL_FUNC) &_BayesFactor_metropCorrRcpp_jeffreys, 13},
    {"_BayesFactor_dinvgamma1_Rcpp", (DL_FUNC) &_BayesFactor_dinvgamma1_Rcpp, 3},
    {"_BayesFactor_dinvgamma1_logx_Rcpp", (DL_FUNC) &_BayesFactor_dinvgamma1_logx_Rcpp, 3},
    {"_BayesFactor_ddinvgamma1_Rcpp", (DL_FUNC) &_BayesFactor_ddinvgamma1_Rcpp, 3},
    {"_BayesFactor_d2dinvgamma1_Rcpp", (DL_FUNC) &_BayesFactor_d2dinvgamma1_Rcpp, 3},
    {"_BayesFactor_genhypergeo_series_pos", (DL_FUNC) &_BayesFactor_genhypergeo_series_pos, 8},
    {"_BayesFactor_jzs_log_marginal_posterior_logg", (DL_FUNC) &_BayesFactor_jzs_log_marginal_posterior_logg, 13},
    {"_BayesFactor_jzs_Gibbs", (DL_FUNC) &_BayesFactor_jzs_Gibbs, 14},
    {"_BayesFactor_jzs_sampler", (DL_FUNC) &_BayesFactor_jzs_sampler, 12},
    {"_BayesFactor_GibbsLinearRegRcpp", (DL_FUNC) &_BayesFactor_GibbsLinearRegRcpp, 9},
    {"_BayesFactor_log_determinant_pos_def", (DL_FUNC) &_BayesFactor_log_determinant_pos_def, 1},
    {"_BayesFactor_logSummaryStats", (DL_FUNC) &_BayesFactor_logSummaryStats, 1},
    {"_BayesFactor_log1pExp", (DL_FUNC) &_BayesFactor_log1pExp, 1},
    {"_BayesFactor_logExpXplusExpY", (DL_FUNC) &_BayesFactor_logExpXplusExpY, 2},
    {"_BayesFactor_logExpXminusExpY", (DL_FUNC) &_BayesFactor_logExpXminusExpY, 2},
    {"_BayesFactor_metropMetaTRcpp", (DL_FUNC) &_BayesFactor_metropMetaTRcpp, 13},
    {"_BayesFactor_metropProportionRcpp", (DL_FUNC) &_BayesFactor_metropProportionRcpp, 12},
    {"_BayesFactor_gibbsTwoSampleRcpp", (DL_FUNC) &_BayesFactor_gibbsTwoSampleRcpp, 12},
    {"_BayesFactor_gibbsOneSampleRcpp", (DL_FUNC) &_BayesFactor_gibbsOneSampleRcpp, 12},
    {"_BayesFactor_RcppExport_registerCCallable", (DL_FUNC) &_BayesFactor_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesFactor(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
