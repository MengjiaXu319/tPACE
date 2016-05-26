// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// CPPlwls1d
Eigen::VectorXd CPPlwls1d(const double& bw, const std::string kernel_type, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xin, const Eigen::Map<Eigen::VectorXd>& yin, const Eigen::Map<Eigen::VectorXd>& xout, const unsigned int& npoly, const unsigned int& nder);
RcppExport SEXP fdapace_CPPlwls1d(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP winSEXP, SEXP xinSEXP, SEXP yinSEXP, SEXP xoutSEXP, SEXP npolySEXP, SEXP nderSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const double& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xin(xinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type yin(yinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type npoly(npolySEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type nder(nderSEXP);
    __result = Rcpp::wrap(CPPlwls1d(bw, kernel_type, win, xin, yin, xout, npoly, nder));
    return __result;
END_RCPP
}
// dropZeroElementsXYWin
Eigen::MatrixXd dropZeroElementsXYWin(const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xin, const Eigen::Map<Eigen::VectorXd>& yin);
RcppExport SEXP fdapace_dropZeroElementsXYWin(SEXP winSEXP, SEXP xinSEXP, SEXP yinSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xin(xinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type yin(yinSEXP);
    __result = Rcpp::wrap(dropZeroElementsXYWin(win, xin, yin));
    return __result;
END_RCPP
}
// GetIndCEScoresCPP
Rcpp::List GetIndCEScoresCPP(const Eigen::Map<Eigen::VectorXd>& yVec, const Eigen::Map<Eigen::VectorXd>& muVec, const Eigen::Map<Eigen::VectorXd>& lamVec, const Eigen::Map<Eigen::MatrixXd>& phiMat, const Eigen::Map<Eigen::MatrixXd>& SigmaYi);
RcppExport SEXP fdapace_GetIndCEScoresCPP(SEXP yVecSEXP, SEXP muVecSEXP, SEXP lamVecSEXP, SEXP phiMatSEXP, SEXP SigmaYiSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type yVec(yVecSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type muVec(muVecSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type lamVec(lamVecSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type phiMat(phiMatSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type SigmaYi(SigmaYiSEXP);
    __result = Rcpp::wrap(GetIndCEScoresCPP(yVec, muVec, lamVec, phiMat, SigmaYi));
    return __result;
END_RCPP
}
// GetIndCEScoresCPPnewInd
Rcpp::List GetIndCEScoresCPPnewInd(const Eigen::Map<Eigen::VectorXd>& yVec, const Eigen::Map<Eigen::VectorXd>& muVec, const Eigen::Map<Eigen::VectorXd>& lamVec, const Eigen::Map<Eigen::MatrixXd>& phiMat, const Eigen::Map<Eigen::MatrixXd>& SigmaYi, const Eigen::Map<Eigen::MatrixXd>& newPhi, const Eigen::Map<Eigen::VectorXd>& newMu);
RcppExport SEXP fdapace_GetIndCEScoresCPPnewInd(SEXP yVecSEXP, SEXP muVecSEXP, SEXP lamVecSEXP, SEXP phiMatSEXP, SEXP SigmaYiSEXP, SEXP newPhiSEXP, SEXP newMuSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type yVec(yVecSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type muVec(muVecSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type lamVec(lamVecSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type phiMat(phiMatSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type SigmaYi(SigmaYiSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type newPhi(newPhiSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type newMu(newMuSEXP);
    __result = Rcpp::wrap(GetIndCEScoresCPPnewInd(yVec, muVec, lamVec, phiMat, SigmaYi, newPhi, newMu));
    return __result;
END_RCPP
}
// interp2lin
Eigen::VectorXd interp2lin(const Eigen::Map<Eigen::VectorXd>& xin, const Eigen::Map<Eigen::VectorXd>& yin, const Eigen::Map<Eigen::VectorXd>& zin, const Eigen::Map<Eigen::VectorXd>& xou, const Eigen::Map<Eigen::VectorXd>& you);
RcppExport SEXP fdapace_interp2lin(SEXP xinSEXP, SEXP yinSEXP, SEXP zinSEXP, SEXP xouSEXP, SEXP youSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xin(xinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type yin(yinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type zin(zinSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xou(xouSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type you(youSEXP);
    __result = Rcpp::wrap(interp2lin(xin, yin, zin, xou, you));
    return __result;
END_RCPP
}
// RCPPmean
double RCPPmean(const Rcpp::NumericVector X);
RcppExport SEXP fdapace_RCPPmean(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type X(XSEXP);
    __result = Rcpp::wrap(RCPPmean(X));
    return __result;
END_RCPP
}
// RCPPvar
double RCPPvar(const Rcpp::NumericVector X);
RcppExport SEXP fdapace_RCPPvar(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type X(XSEXP);
    __result = Rcpp::wrap(RCPPvar(X));
    return __result;
END_RCPP
}
// RmullwlskCC
Eigen::MatrixXd RmullwlskCC(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xgrid, const Eigen::Map<Eigen::VectorXd>& ygrid, const bool& bwCheck);
RcppExport SEXP fdapace_RmullwlskCC(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xgridSEXP, SEXP ygridSEXP, SEXP bwCheckSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type ygrid(ygridSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    __result = Rcpp::wrap(RmullwlskCC(bw, kernel_type, tPairs, cxxn, win, xgrid, ygrid, bwCheck));
    return __result;
END_RCPP
}
// RmullwlskCCsort2
Eigen::MatrixXd RmullwlskCCsort2(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xgrid, const Eigen::Map<Eigen::VectorXd>& ygrid, const bool& bwCheck);
RcppExport SEXP fdapace_RmullwlskCCsort2(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xgridSEXP, SEXP ygridSEXP, SEXP bwCheckSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type ygrid(ygridSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    __result = Rcpp::wrap(RmullwlskCCsort2(bw, kernel_type, tPairs, cxxn, win, xgrid, ygrid, bwCheck));
    return __result;
END_RCPP
}
// Rmullwlsk
Eigen::MatrixXd Rmullwlsk(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xgrid, const Eigen::Map<Eigen::VectorXd>& ygrid, const bool& bwCheck, const bool& transp);
RcppExport SEXP fdapace_Rmullwlsk(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xgridSEXP, SEXP ygridSEXP, SEXP bwCheckSEXP, SEXP transpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type ygrid(ygridSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    Rcpp::traits::input_parameter< const bool& >::type transp(transpSEXP);
    __result = Rcpp::wrap(Rmullwlsk(bw, kernel_type, tPairs, cxxn, win, xgrid, ygrid, bwCheck, transp));
    return __result;
END_RCPP
}
// RmullwlskUniversal
Eigen::MatrixXd RmullwlskUniversal(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::VectorXd>& xgrid, const Eigen::Map<Eigen::VectorXd>& ygrid, const bool& bwCheck, const bool& autoCov);
RcppExport SEXP fdapace_RmullwlskUniversal(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xgridSEXP, SEXP ygridSEXP, SEXP bwCheckSEXP, SEXP autoCovSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type xgrid(xgridSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type ygrid(ygridSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    Rcpp::traits::input_parameter< const bool& >::type autoCov(autoCovSEXP);
    __result = Rcpp::wrap(RmullwlskUniversal(bw, kernel_type, tPairs, cxxn, win, xgrid, ygrid, bwCheck, autoCov));
    return __result;
END_RCPP
}
// Rrotatedmullwlsk
Eigen::VectorXd Rrotatedmullwlsk(const Eigen::Map<Eigen::VectorXd>& bw, const std::string kernel_type, const Eigen::Map<Eigen::MatrixXd>& tPairs, const Eigen::Map<Eigen::MatrixXd>& cxxn, const Eigen::Map<Eigen::VectorXd>& win, const Eigen::Map<Eigen::MatrixXd>& xygrid, const unsigned int npoly, const bool& bwCheck);
RcppExport SEXP fdapace_Rrotatedmullwlsk(SEXP bwSEXP, SEXP kernel_typeSEXP, SEXP tPairsSEXP, SEXP cxxnSEXP, SEXP winSEXP, SEXP xygridSEXP, SEXP npolySEXP, SEXP bwCheckSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const std::string >::type kernel_type(kernel_typeSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type tPairs(tPairsSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type cxxn(cxxnSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type win(winSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type xygrid(xygridSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type npoly(npolySEXP);
    Rcpp::traits::input_parameter< const bool& >::type bwCheck(bwCheckSEXP);
    __result = Rcpp::wrap(Rrotatedmullwlsk(bw, kernel_type, tPairs, cxxn, win, xygrid, npoly, bwCheck));
    return __result;
END_RCPP
}
// trapzRcpp
double trapzRcpp(const Rcpp::NumericVector X, const Rcpp::NumericVector Y);
RcppExport SEXP fdapace_trapzRcpp(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type Y(YSEXP);
    __result = Rcpp::wrap(trapzRcpp(X, Y));
    return __result;
END_RCPP
}
