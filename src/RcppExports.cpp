// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// main_loop
List main_loop(double temp, double t_min, double r, int fun_length, int nlimit, NumericVector para_0, NumericVector para_i, Function var_func, bool vf_user, bool trace, NumericVector rf, NumericVector lower, NumericVector upper, Function fun, double loss_0, double k, double loss_opt, NumericVector para_opt, bool dyn_rf, double maxgood, double ac_acc, int stopac);
RcppExport SEXP optimization_main_loop(SEXP tempSEXP, SEXP t_minSEXP, SEXP rSEXP, SEXP fun_lengthSEXP, SEXP nlimitSEXP, SEXP para_0SEXP, SEXP para_iSEXP, SEXP var_funcSEXP, SEXP vf_userSEXP, SEXP traceSEXP, SEXP rfSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP funSEXP, SEXP loss_0SEXP, SEXP kSEXP, SEXP loss_optSEXP, SEXP para_optSEXP, SEXP dyn_rfSEXP, SEXP maxgoodSEXP, SEXP ac_accSEXP, SEXP stopacSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< double >::type t_min(t_minSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type fun_length(fun_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type nlimit(nlimitSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type para_0(para_0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type para_i(para_iSEXP);
    Rcpp::traits::input_parameter< Function >::type var_func(var_funcSEXP);
    Rcpp::traits::input_parameter< bool >::type vf_user(vf_userSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rf(rfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< double >::type loss_0(loss_0SEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type loss_opt(loss_optSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type para_opt(para_optSEXP);
    Rcpp::traits::input_parameter< bool >::type dyn_rf(dyn_rfSEXP);
    Rcpp::traits::input_parameter< double >::type maxgood(maxgoodSEXP);
    Rcpp::traits::input_parameter< double >::type ac_acc(ac_accSEXP);
    Rcpp::traits::input_parameter< int >::type stopac(stopacSEXP);
    rcpp_result_gen = Rcpp::wrap(main_loop(temp, t_min, r, fun_length, nlimit, para_0, para_i, var_func, vf_user, trace, rf, lower, upper, fun, loss_0, k, loss_opt, para_opt, dyn_rf, maxgood, ac_acc, stopac));
    return rcpp_result_gen;
END_RCPP
}
