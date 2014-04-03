/* This file was generated by SableCC (http://www.sablecc.org/). */

#include "node.h"
#include "token.h"
#include "list.h"
#include "prod.h"
#include "analysis.h"

bool rose::_TypeInfo::is (const _TypeInfo *inf) const
{
  if ( inf->type_id == type_id ) return true;
  if ( !parent) return false;
  return parent->is(inf);
}

void rose::_TypeInfo::apply (Analysis& analysis, Node& node) const
{
  (analysis.*apply_ptr) (node);
}


const rose::_TypeInfo rose::Node::type_info = {
    "Node",
    0,
    0,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_other,
    0
};

const rose::_TypeInfo rose::Token::type_info = {
    "Token",
    &Node::type_info,
    1,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_other,
    0
};

const rose::_TypeInfo rose::TEOF::type_info = {
    "TEOF",
    &Token::type_info,
    2,
    33,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTEOF
};

static int _type_elems_start[] = {0, 0};
const rose::_TypeInfo rose::Start::type_info = {
    "Start",
    &Node::type_info,
    3,
    -1,
    false,
    2,
    _type_elems_start,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseStart
};

const rose::_TypeInfo rose::TDone::type_info = {
    "TDone",
    &Token::type_info,
    4,
    0,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTDone
};
const rose::_TypeInfo rose::TDraw::type_info = {
    "TDraw",
    &Token::type_info,
    5,
    1,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTDraw
};
const rose::_TypeInfo rose::TElse::type_info = {
    "TElse",
    &Token::type_info,
    6,
    2,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTElse
};
const rose::_TypeInfo rose::TFace::type_info = {
    "TFace",
    &Token::type_info,
    7,
    3,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTFace
};
const rose::_TypeInfo rose::TFork::type_info = {
    "TFork",
    &Token::type_info,
    8,
    4,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTFork
};
const rose::_TypeInfo rose::TMove::type_info = {
    "TMove",
    &Token::type_info,
    9,
    5,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTMove
};
const rose::_TypeInfo rose::TPlan::type_info = {
    "TPlan",
    &Token::type_info,
    10,
    6,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTPlan
};
const rose::_TypeInfo rose::TProc::type_info = {
    "TProc",
    &Token::type_info,
    11,
    7,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTProc
};
const rose::_TypeInfo rose::TSize::type_info = {
    "TSize",
    &Token::type_info,
    12,
    8,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTSize
};
const rose::_TypeInfo rose::TTemp::type_info = {
    "TTemp",
    &Token::type_info,
    13,
    9,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTTemp
};
const rose::_TypeInfo rose::TTint::type_info = {
    "TTint",
    &Token::type_info,
    14,
    10,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTTint
};
const rose::_TypeInfo rose::TTurn::type_info = {
    "TTurn",
    &Token::type_info,
    15,
    11,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTTurn
};
const rose::_TypeInfo rose::TWait::type_info = {
    "TWait",
    &Token::type_info,
    16,
    12,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTWait
};
const rose::_TypeInfo rose::TWhen::type_info = {
    "TWhen",
    &Token::type_info,
    17,
    13,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTWhen
};
const rose::_TypeInfo rose::TLPar::type_info = {
    "TLPar",
    &Token::type_info,
    18,
    14,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTLPar
};
const rose::_TypeInfo rose::TRPar::type_info = {
    "TRPar",
    &Token::type_info,
    19,
    15,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTRPar
};
const rose::_TypeInfo rose::TPlus::type_info = {
    "TPlus",
    &Token::type_info,
    20,
    16,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTPlus
};
const rose::_TypeInfo rose::TMinus::type_info = {
    "TMinus",
    &Token::type_info,
    21,
    17,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTMinus
};
const rose::_TypeInfo rose::TMul::type_info = {
    "TMul",
    &Token::type_info,
    22,
    18,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTMul
};
const rose::_TypeInfo rose::TDiv::type_info = {
    "TDiv",
    &Token::type_info,
    23,
    19,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTDiv
};
const rose::_TypeInfo rose::TEq::type_info = {
    "TEq",
    &Token::type_info,
    24,
    20,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTEq
};
const rose::_TypeInfo rose::TNe::type_info = {
    "TNe",
    &Token::type_info,
    25,
    21,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTNe
};
const rose::_TypeInfo rose::TLt::type_info = {
    "TLt",
    &Token::type_info,
    26,
    22,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTLt
};
const rose::_TypeInfo rose::TLe::type_info = {
    "TLe",
    &Token::type_info,
    27,
    23,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTLe
};
const rose::_TypeInfo rose::TGt::type_info = {
    "TGt",
    &Token::type_info,
    28,
    24,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTGt
};
const rose::_TypeInfo rose::TGe::type_info = {
    "TGe",
    &Token::type_info,
    29,
    25,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTGe
};
const rose::_TypeInfo rose::TAnd::type_info = {
    "TAnd",
    &Token::type_info,
    30,
    26,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTAnd
};
const rose::_TypeInfo rose::TOr::type_info = {
    "TOr",
    &Token::type_info,
    31,
    27,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTOr
};
const rose::_TypeInfo rose::TAssign::type_info = {
    "TAssign",
    &Token::type_info,
    32,
    28,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTAssign
};
const rose::_TypeInfo rose::TNeg::type_info = {
    "TNeg",
    &Token::type_info,
    33,
    29,
    false,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTNeg
};
const rose::_TypeInfo rose::TNumber::type_info = {
    "TNumber",
    &Token::type_info,
    34,
    30,
    true,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTNumber
};
const rose::_TypeInfo rose::TIdentifier::type_info = {
    "TIdentifier",
    &Token::type_info,
    35,
    31,
    true,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTIdentifier
};
const rose::_TypeInfo rose::TColor::type_info = {
    "TColor",
    &Token::type_info,
    36,
    32,
    true,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTColor
};
const rose::_TypeInfo rose::TBlank::type_info = {
    "TBlank",
    &Token::type_info,
    37,
    -1,
    true,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTBlank
};
const rose::_TypeInfo rose::TComment::type_info = {
    "TComment",
    &Token::type_info,
    38,
    -1,
    true,
    0,
    0,
    _TypeInfo::is_token,
    (_TypeInfo::apply_t)&Analysis::caseTComment
};

const rose::_TypeInfo rose::PProgram::type_info = {
    "PProgram",
    &Node::type_info,
    39,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};
const rose::_TypeInfo rose::PEvent::type_info = {
    "PEvent",
    &Node::type_info,
    40,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};
const rose::_TypeInfo rose::PProcedure::type_info = {
    "PProcedure",
    &Node::type_info,
    41,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};
const rose::_TypeInfo rose::PLocal::type_info = {
    "PLocal",
    &Node::type_info,
    42,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};
const rose::_TypeInfo rose::PStatement::type_info = {
    "PStatement",
    &Node::type_info,
    43,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};
const rose::_TypeInfo rose::PExpression::type_info = {
    "PExpression",
    &Node::type_info,
    44,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};
const rose::_TypeInfo rose::PBinop::type_info = {
    "PBinop",
    &Node::type_info,
    45,
    -1,
    false,
    0,
    0,
    _TypeInfo::is_prod,
    0
};

static int _type_elems_1[] = {1, 1};
const rose::_TypeInfo rose::AProgram::type_info = {
    "AProgram",
    &PProgram::type_info,
    46,
    -1,
    false,
    2,
    _type_elems_1,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAProgram
};
static int _type_elems_2[] = {0};
const rose::_TypeInfo rose::AWaitEvent::type_info = {
    "AWaitEvent",
    &PEvent::type_info,
    47,
    -1,
    false,
    1,
    _type_elems_2,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAWaitEvent
};
static int _type_elems_3[] = {0};
const rose::_TypeInfo rose::AColorEvent::type_info = {
    "AColorEvent",
    &PEvent::type_info,
    48,
    -1,
    false,
    1,
    _type_elems_3,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAColorEvent
};
static int _type_elems_4[] = {0, 1, 1};
const rose::_TypeInfo rose::AProcedure::type_info = {
    "AProcedure",
    &PProcedure::type_info,
    49,
    -1,
    false,
    3,
    _type_elems_4,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAProcedure
};
static int _type_elems_5[] = {0};
const rose::_TypeInfo rose::ALocal::type_info = {
    "ALocal",
    &PLocal::type_info,
    50,
    -1,
    false,
    1,
    _type_elems_5,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseALocal
};
static int _type_elems_6[] = {0};
const rose::_TypeInfo rose::ADrawStatement::type_info = {
    "ADrawStatement",
    &PStatement::type_info,
    51,
    -1,
    false,
    1,
    _type_elems_6,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseADrawStatement
};
static int _type_elems_7[] = {0, 0, 1};
const rose::_TypeInfo rose::AForkStatement::type_info = {
    "AForkStatement",
    &PStatement::type_info,
    52,
    -1,
    false,
    3,
    _type_elems_7,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAForkStatement
};
static int _type_elems_8[] = {0, 0};
const rose::_TypeInfo rose::AMoveStatement::type_info = {
    "AMoveStatement",
    &PStatement::type_info,
    53,
    -1,
    false,
    2,
    _type_elems_8,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAMoveStatement
};
static int _type_elems_9[] = {0, 0};
const rose::_TypeInfo rose::ASizeStatement::type_info = {
    "ASizeStatement",
    &PStatement::type_info,
    54,
    -1,
    false,
    2,
    _type_elems_9,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseASizeStatement
};
static int _type_elems_10[] = {0, 0};
const rose::_TypeInfo rose::ATempStatement::type_info = {
    "ATempStatement",
    &PStatement::type_info,
    55,
    -1,
    false,
    2,
    _type_elems_10,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseATempStatement
};
static int _type_elems_11[] = {0, 0};
const rose::_TypeInfo rose::ATintStatement::type_info = {
    "ATintStatement",
    &PStatement::type_info,
    56,
    -1,
    false,
    2,
    _type_elems_11,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseATintStatement
};
static int _type_elems_12[] = {0, 0};
const rose::_TypeInfo rose::ATurnStatement::type_info = {
    "ATurnStatement",
    &PStatement::type_info,
    57,
    -1,
    false,
    2,
    _type_elems_12,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseATurnStatement
};
static int _type_elems_13[] = {0, 0};
const rose::_TypeInfo rose::AFaceStatement::type_info = {
    "AFaceStatement",
    &PStatement::type_info,
    58,
    -1,
    false,
    2,
    _type_elems_13,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAFaceStatement
};
static int _type_elems_14[] = {0, 0};
const rose::_TypeInfo rose::AWaitStatement::type_info = {
    "AWaitStatement",
    &PStatement::type_info,
    59,
    -1,
    false,
    2,
    _type_elems_14,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAWaitStatement
};
static int _type_elems_15[] = {0, 0, 1, 1};
const rose::_TypeInfo rose::AWhenStatement::type_info = {
    "AWhenStatement",
    &PStatement::type_info,
    60,
    -1,
    false,
    4,
    _type_elems_15,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAWhenStatement
};
static int _type_elems_16[] = {0};
const rose::_TypeInfo rose::ANumberExpression::type_info = {
    "ANumberExpression",
    &PExpression::type_info,
    61,
    -1,
    false,
    1,
    _type_elems_16,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseANumberExpression
};
static int _type_elems_17[] = {0};
const rose::_TypeInfo rose::AVarExpression::type_info = {
    "AVarExpression",
    &PExpression::type_info,
    62,
    -1,
    false,
    1,
    _type_elems_17,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAVarExpression
};
static int _type_elems_18[] = {0, 0, 0};
const rose::_TypeInfo rose::ABinaryExpression::type_info = {
    "ABinaryExpression",
    &PExpression::type_info,
    63,
    -1,
    false,
    3,
    _type_elems_18,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseABinaryExpression
};
static int _type_elems_19[] = {0, 0};
const rose::_TypeInfo rose::ANegExpression::type_info = {
    "ANegExpression",
    &PExpression::type_info,
    64,
    -1,
    false,
    2,
    _type_elems_19,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseANegExpression
};
static int _type_elems_20[] = {0};
const rose::_TypeInfo rose::APlusBinop::type_info = {
    "APlusBinop",
    &PBinop::type_info,
    65,
    -1,
    false,
    1,
    _type_elems_20,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAPlusBinop
};
static int _type_elems_21[] = {0};
const rose::_TypeInfo rose::AMinusBinop::type_info = {
    "AMinusBinop",
    &PBinop::type_info,
    66,
    -1,
    false,
    1,
    _type_elems_21,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAMinusBinop
};
static int _type_elems_22[] = {0};
const rose::_TypeInfo rose::AMultiplyBinop::type_info = {
    "AMultiplyBinop",
    &PBinop::type_info,
    67,
    -1,
    false,
    1,
    _type_elems_22,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAMultiplyBinop
};
static int _type_elems_23[] = {0};
const rose::_TypeInfo rose::ADivideBinop::type_info = {
    "ADivideBinop",
    &PBinop::type_info,
    68,
    -1,
    false,
    1,
    _type_elems_23,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseADivideBinop
};
static int _type_elems_24[] = {0};
const rose::_TypeInfo rose::AEqBinop::type_info = {
    "AEqBinop",
    &PBinop::type_info,
    69,
    -1,
    false,
    1,
    _type_elems_24,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAEqBinop
};
static int _type_elems_25[] = {0};
const rose::_TypeInfo rose::ANeBinop::type_info = {
    "ANeBinop",
    &PBinop::type_info,
    70,
    -1,
    false,
    1,
    _type_elems_25,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseANeBinop
};
static int _type_elems_26[] = {0};
const rose::_TypeInfo rose::ALtBinop::type_info = {
    "ALtBinop",
    &PBinop::type_info,
    71,
    -1,
    false,
    1,
    _type_elems_26,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseALtBinop
};
static int _type_elems_27[] = {0};
const rose::_TypeInfo rose::ALeBinop::type_info = {
    "ALeBinop",
    &PBinop::type_info,
    72,
    -1,
    false,
    1,
    _type_elems_27,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseALeBinop
};
static int _type_elems_28[] = {0};
const rose::_TypeInfo rose::AGtBinop::type_info = {
    "AGtBinop",
    &PBinop::type_info,
    73,
    -1,
    false,
    1,
    _type_elems_28,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAGtBinop
};
static int _type_elems_29[] = {0};
const rose::_TypeInfo rose::AGeBinop::type_info = {
    "AGeBinop",
    &PBinop::type_info,
    74,
    -1,
    false,
    1,
    _type_elems_29,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAGeBinop
};
static int _type_elems_30[] = {0};
const rose::_TypeInfo rose::AAndBinop::type_info = {
    "AAndBinop",
    &PBinop::type_info,
    75,
    -1,
    false,
    1,
    _type_elems_30,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAAndBinop
};
static int _type_elems_31[] = {0};
const rose::_TypeInfo rose::AOrBinop::type_info = {
    "AOrBinop",
    &PBinop::type_info,
    76,
    -1,
    false,
    1,
    _type_elems_31,
    _TypeInfo::is_prod,
    (_TypeInfo::apply_t)&Analysis::caseAOrBinop
};