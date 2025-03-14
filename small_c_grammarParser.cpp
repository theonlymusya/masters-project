
// Generated from small_c_grammar.g4 by ANTLR 4.13.2


#include "small_c_grammarListener.h"
#include "small_c_grammarVisitor.h"

#include "small_c_grammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Small_c_grammarParserStaticData final {
  Small_c_grammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Small_c_grammarParserStaticData(const Small_c_grammarParserStaticData&) = delete;
  Small_c_grammarParserStaticData(Small_c_grammarParserStaticData&&) = delete;
  Small_c_grammarParserStaticData& operator=(const Small_c_grammarParserStaticData&) = delete;
  Small_c_grammarParserStaticData& operator=(Small_c_grammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag small_c_grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Small_c_grammarParserStaticData> small_c_grammarParserStaticData = nullptr;

void small_c_grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (small_c_grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(small_c_grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Small_c_grammarParserStaticData>(
    std::vector<std::string>{
      "program", "function", "statement", "block", "ifStatement", "forStatement", 
      "forStart", "forStop", "forStep", "assignmentOp", "declaration", "varName", 
      "arrayDecl", "incDecOp", "mathExpr", "logicalOrExpr", "logicalAndExpr", 
      "equalityExpr", "relationalExpr", "additiveExpr", "multiplicativeExpr", 
      "unaryExpr", "primaryExpr", "funcCall", "funcName"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'('", "')'", "';'", "'{'", "'}'", "'if'", 
      "'else'", "'for'", "'<'", "'>'", "'<='", "'>='", "'-='", "'+='", "'/='", 
      "'%='", "'='", "'double'", "'['", "']'", "'++'", "'--'", "'||'", "'&&'", 
      "'=='", "'!='", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "','", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "ID", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,39,243,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,5,0,53,8,0,10,0,12,0,56,9,0,
  	1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,
  	2,75,8,2,1,3,1,3,5,3,79,8,3,10,3,12,3,82,9,3,1,3,1,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,3,4,95,8,4,1,5,1,5,1,5,3,5,100,8,5,1,5,1,5,3,5,104,
  	8,5,1,5,1,5,3,5,108,8,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,3,8,123,8,8,1,9,3,9,126,8,9,1,9,1,9,1,9,3,9,131,8,9,1,10,1,10,1,
  	11,1,11,3,11,137,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,146,8,12,
  	1,12,1,12,1,12,1,12,3,12,152,8,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,
  	1,15,5,15,162,8,15,10,15,12,15,165,9,15,1,16,1,16,1,16,5,16,170,8,16,
  	10,16,12,16,173,9,16,1,17,1,17,1,17,5,17,178,8,17,10,17,12,17,181,9,17,
  	1,18,1,18,1,18,5,18,186,8,18,10,18,12,18,189,9,18,1,19,1,19,1,19,5,19,
  	194,8,19,10,19,12,19,197,9,19,1,20,1,20,1,20,5,20,202,8,20,10,20,12,20,
  	205,9,20,1,21,1,21,1,21,3,21,210,8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,
  	22,3,22,219,8,22,1,23,1,23,1,23,1,23,1,23,5,23,226,8,23,10,23,12,23,229,
  	9,23,3,23,231,8,23,1,23,1,23,1,24,1,24,1,24,5,24,238,8,24,10,24,12,24,
  	241,9,24,1,24,0,0,25,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,0,8,1,0,11,14,1,0,15,18,2,0,1,1,20,20,1,0,23,24,
  	1,0,27,28,1,0,29,30,1,0,31,33,2,0,29,30,34,34,248,0,54,1,0,0,0,2,59,1,
  	0,0,0,4,74,1,0,0,0,6,76,1,0,0,0,8,85,1,0,0,0,10,96,1,0,0,0,12,112,1,0,
  	0,0,14,114,1,0,0,0,16,122,1,0,0,0,18,125,1,0,0,0,20,132,1,0,0,0,22,134,
  	1,0,0,0,24,138,1,0,0,0,26,153,1,0,0,0,28,156,1,0,0,0,30,158,1,0,0,0,32,
  	166,1,0,0,0,34,174,1,0,0,0,36,182,1,0,0,0,38,190,1,0,0,0,40,198,1,0,0,
  	0,42,209,1,0,0,0,44,218,1,0,0,0,46,220,1,0,0,0,48,234,1,0,0,0,50,53,3,
  	2,1,0,51,53,3,4,2,0,52,50,1,0,0,0,52,51,1,0,0,0,53,56,1,0,0,0,54,52,1,
  	0,0,0,54,55,1,0,0,0,55,57,1,0,0,0,56,54,1,0,0,0,57,58,5,0,0,1,58,1,1,
  	0,0,0,59,60,5,1,0,0,60,61,5,2,0,0,61,62,5,3,0,0,62,63,5,4,0,0,63,64,3,
  	6,3,0,64,3,1,0,0,0,65,75,3,8,4,0,66,75,3,10,5,0,67,68,3,18,9,0,68,69,
  	5,5,0,0,69,75,1,0,0,0,70,71,3,26,13,0,71,72,5,5,0,0,72,75,1,0,0,0,73,
  	75,3,6,3,0,74,65,1,0,0,0,74,66,1,0,0,0,74,67,1,0,0,0,74,70,1,0,0,0,74,
  	73,1,0,0,0,75,5,1,0,0,0,76,80,5,6,0,0,77,79,3,4,2,0,78,77,1,0,0,0,79,
  	82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,
  	84,5,7,0,0,84,7,1,0,0,0,85,86,5,8,0,0,86,87,5,3,0,0,87,88,3,28,14,0,88,
  	89,5,4,0,0,89,94,3,4,2,0,90,91,5,9,0,0,91,95,3,8,4,0,92,93,5,9,0,0,93,
  	95,3,4,2,0,94,90,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,9,1,0,0,0,96,
  	97,5,10,0,0,97,99,5,3,0,0,98,100,3,12,6,0,99,98,1,0,0,0,99,100,1,0,0,
  	0,100,101,1,0,0,0,101,103,5,5,0,0,102,104,3,14,7,0,103,102,1,0,0,0,103,
  	104,1,0,0,0,104,105,1,0,0,0,105,107,5,5,0,0,106,108,3,16,8,0,107,106,
  	1,0,0,0,107,108,1,0,0,0,108,109,1,0,0,0,109,110,5,4,0,0,110,111,3,4,2,
  	0,111,11,1,0,0,0,112,113,3,18,9,0,113,13,1,0,0,0,114,115,5,37,0,0,115,
  	116,7,0,0,0,116,117,3,28,14,0,117,15,1,0,0,0,118,119,5,37,0,0,119,120,
  	7,1,0,0,120,123,3,28,14,0,121,123,3,26,13,0,122,118,1,0,0,0,122,121,1,
  	0,0,0,123,17,1,0,0,0,124,126,3,20,10,0,125,124,1,0,0,0,125,126,1,0,0,
  	0,126,127,1,0,0,0,127,130,3,22,11,0,128,129,5,19,0,0,129,131,3,28,14,
  	0,130,128,1,0,0,0,130,131,1,0,0,0,131,19,1,0,0,0,132,133,7,2,0,0,133,
  	21,1,0,0,0,134,136,5,37,0,0,135,137,3,24,12,0,136,135,1,0,0,0,136,137,
  	1,0,0,0,137,23,1,0,0,0,138,139,5,21,0,0,139,140,3,28,14,0,140,145,5,22,
  	0,0,141,142,5,21,0,0,142,143,3,28,14,0,143,144,5,22,0,0,144,146,1,0,0,
  	0,145,141,1,0,0,0,145,146,1,0,0,0,146,151,1,0,0,0,147,148,5,21,0,0,148,
  	149,3,28,14,0,149,150,5,22,0,0,150,152,1,0,0,0,151,147,1,0,0,0,151,152,
  	1,0,0,0,152,25,1,0,0,0,153,154,5,37,0,0,154,155,7,3,0,0,155,27,1,0,0,
  	0,156,157,3,30,15,0,157,29,1,0,0,0,158,163,3,32,16,0,159,160,5,25,0,0,
  	160,162,3,32,16,0,161,159,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,0,163,
  	164,1,0,0,0,164,31,1,0,0,0,165,163,1,0,0,0,166,171,3,34,17,0,167,168,
  	5,26,0,0,168,170,3,34,17,0,169,167,1,0,0,0,170,173,1,0,0,0,171,169,1,
  	0,0,0,171,172,1,0,0,0,172,33,1,0,0,0,173,171,1,0,0,0,174,179,3,36,18,
  	0,175,176,7,4,0,0,176,178,3,36,18,0,177,175,1,0,0,0,178,181,1,0,0,0,179,
  	177,1,0,0,0,179,180,1,0,0,0,180,35,1,0,0,0,181,179,1,0,0,0,182,187,3,
  	38,19,0,183,184,7,0,0,0,184,186,3,38,19,0,185,183,1,0,0,0,186,189,1,0,
  	0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,37,1,0,0,0,189,187,1,0,0,0,190,
  	195,3,40,20,0,191,192,7,5,0,0,192,194,3,40,20,0,193,191,1,0,0,0,194,197,
  	1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,39,1,0,0,0,197,195,1,0,0,
  	0,198,203,3,42,21,0,199,200,7,6,0,0,200,202,3,42,21,0,201,199,1,0,0,0,
  	202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,41,1,0,0,0,205,203,
  	1,0,0,0,206,207,7,7,0,0,207,210,3,42,21,0,208,210,3,44,22,0,209,206,1,
  	0,0,0,209,208,1,0,0,0,210,43,1,0,0,0,211,219,3,46,23,0,212,213,5,3,0,
  	0,213,214,3,28,14,0,214,215,5,4,0,0,215,219,1,0,0,0,216,219,3,22,11,0,
  	217,219,5,38,0,0,218,211,1,0,0,0,218,212,1,0,0,0,218,216,1,0,0,0,218,
  	217,1,0,0,0,219,45,1,0,0,0,220,221,3,48,24,0,221,230,5,3,0,0,222,227,
  	3,28,14,0,223,224,5,35,0,0,224,226,3,28,14,0,225,223,1,0,0,0,226,229,
  	1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,
  	0,230,222,1,0,0,0,230,231,1,0,0,0,231,232,1,0,0,0,232,233,5,4,0,0,233,
  	47,1,0,0,0,234,239,5,37,0,0,235,236,5,36,0,0,236,238,5,37,0,0,237,235,
  	1,0,0,0,238,241,1,0,0,0,239,237,1,0,0,0,239,240,1,0,0,0,240,49,1,0,0,
  	0,241,239,1,0,0,0,25,52,54,74,80,94,99,103,107,122,125,130,136,145,151,
  	163,171,179,187,195,203,209,218,227,230,239
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  small_c_grammarParserStaticData = std::move(staticData);
}

}

small_c_grammarParser::small_c_grammarParser(TokenStream *input) : small_c_grammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

small_c_grammarParser::small_c_grammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  small_c_grammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *small_c_grammarParserStaticData->atn, small_c_grammarParserStaticData->decisionToDFA, small_c_grammarParserStaticData->sharedContextCache, options);
}

small_c_grammarParser::~small_c_grammarParser() {
  delete _interpreter;
}

const atn::ATN& small_c_grammarParser::getATN() const {
  return *small_c_grammarParserStaticData->atn;
}

std::string small_c_grammarParser::getGrammarFileName() const {
  return "small_c_grammar.g4";
}

const std::vector<std::string>& small_c_grammarParser::getRuleNames() const {
  return small_c_grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& small_c_grammarParser::getVocabulary() const {
  return small_c_grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView small_c_grammarParser::getSerializedATN() const {
  return small_c_grammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

small_c_grammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::ProgramContext::EOF() {
  return getToken(small_c_grammarParser::EOF, 0);
}

std::vector<small_c_grammarParser::FunctionContext *> small_c_grammarParser::ProgramContext::function() {
  return getRuleContexts<small_c_grammarParser::FunctionContext>();
}

small_c_grammarParser::FunctionContext* small_c_grammarParser::ProgramContext::function(size_t i) {
  return getRuleContext<small_c_grammarParser::FunctionContext>(i);
}

std::vector<small_c_grammarParser::StatementContext *> small_c_grammarParser::ProgramContext::statement() {
  return getRuleContexts<small_c_grammarParser::StatementContext>();
}

small_c_grammarParser::StatementContext* small_c_grammarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<small_c_grammarParser::StatementContext>(i);
}


size_t small_c_grammarParser::ProgramContext::getRuleIndex() const {
  return small_c_grammarParser::RuleProgram;
}

void small_c_grammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void small_c_grammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any small_c_grammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ProgramContext* small_c_grammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, small_c_grammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137440003394) != 0)) {
      setState(52);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(50);
        function();
        break;
      }

      case 2: {
        setState(51);
        statement();
        break;
      }

      default:
        break;
      }
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(57);
    match(small_c_grammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

small_c_grammarParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::BlockContext* small_c_grammarParser::FunctionContext::block() {
  return getRuleContext<small_c_grammarParser::BlockContext>(0);
}


size_t small_c_grammarParser::FunctionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleFunction;
}

void small_c_grammarParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void small_c_grammarParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any small_c_grammarParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::FunctionContext* small_c_grammarParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, small_c_grammarParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(small_c_grammarParser::T__0);
    setState(60);
    match(small_c_grammarParser::T__1);
    setState(61);
    match(small_c_grammarParser::T__2);
    setState(62);
    match(small_c_grammarParser::T__3);
    setState(63);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

small_c_grammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::IfStatementContext* small_c_grammarParser::StatementContext::ifStatement() {
  return getRuleContext<small_c_grammarParser::IfStatementContext>(0);
}

small_c_grammarParser::ForStatementContext* small_c_grammarParser::StatementContext::forStatement() {
  return getRuleContext<small_c_grammarParser::ForStatementContext>(0);
}

small_c_grammarParser::AssignmentOpContext* small_c_grammarParser::StatementContext::assignmentOp() {
  return getRuleContext<small_c_grammarParser::AssignmentOpContext>(0);
}

small_c_grammarParser::IncDecOpContext* small_c_grammarParser::StatementContext::incDecOp() {
  return getRuleContext<small_c_grammarParser::IncDecOpContext>(0);
}

small_c_grammarParser::BlockContext* small_c_grammarParser::StatementContext::block() {
  return getRuleContext<small_c_grammarParser::BlockContext>(0);
}


size_t small_c_grammarParser::StatementContext::getRuleIndex() const {
  return small_c_grammarParser::RuleStatement;
}

void small_c_grammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void small_c_grammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any small_c_grammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::StatementContext* small_c_grammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, small_c_grammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      forStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
      assignmentOp();
      setState(68);
      match(small_c_grammarParser::T__4);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(70);
      incDecOp();
      setState(71);
      match(small_c_grammarParser::T__4);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(73);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

small_c_grammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::StatementContext *> small_c_grammarParser::BlockContext::statement() {
  return getRuleContexts<small_c_grammarParser::StatementContext>();
}

small_c_grammarParser::StatementContext* small_c_grammarParser::BlockContext::statement(size_t i) {
  return getRuleContext<small_c_grammarParser::StatementContext>(i);
}


size_t small_c_grammarParser::BlockContext::getRuleIndex() const {
  return small_c_grammarParser::RuleBlock;
}

void small_c_grammarParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void small_c_grammarParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any small_c_grammarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::BlockContext* small_c_grammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, small_c_grammarParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(small_c_grammarParser::T__5);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137440003394) != 0)) {
      setState(77);
      statement();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
    match(small_c_grammarParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

small_c_grammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::IfStatementContext::mathExpr() {
  return getRuleContext<small_c_grammarParser::MathExprContext>(0);
}

std::vector<small_c_grammarParser::StatementContext *> small_c_grammarParser::IfStatementContext::statement() {
  return getRuleContexts<small_c_grammarParser::StatementContext>();
}

small_c_grammarParser::StatementContext* small_c_grammarParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<small_c_grammarParser::StatementContext>(i);
}

small_c_grammarParser::IfStatementContext* small_c_grammarParser::IfStatementContext::ifStatement() {
  return getRuleContext<small_c_grammarParser::IfStatementContext>(0);
}


size_t small_c_grammarParser::IfStatementContext::getRuleIndex() const {
  return small_c_grammarParser::RuleIfStatement;
}

void small_c_grammarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void small_c_grammarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any small_c_grammarParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::IfStatementContext* small_c_grammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, small_c_grammarParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(small_c_grammarParser::T__7);
    setState(86);
    match(small_c_grammarParser::T__2);
    setState(87);
    mathExpr();
    setState(88);
    match(small_c_grammarParser::T__3);
    setState(89);
    statement();
    setState(94);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(90);
      match(small_c_grammarParser::T__8);
      setState(91);
      ifStatement();
      break;
    }

    case 2: {
      setState(92);
      match(small_c_grammarParser::T__8);
      setState(93);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

small_c_grammarParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::StatementContext* small_c_grammarParser::ForStatementContext::statement() {
  return getRuleContext<small_c_grammarParser::StatementContext>(0);
}

small_c_grammarParser::ForStartContext* small_c_grammarParser::ForStatementContext::forStart() {
  return getRuleContext<small_c_grammarParser::ForStartContext>(0);
}

small_c_grammarParser::ForStopContext* small_c_grammarParser::ForStatementContext::forStop() {
  return getRuleContext<small_c_grammarParser::ForStopContext>(0);
}

small_c_grammarParser::ForStepContext* small_c_grammarParser::ForStatementContext::forStep() {
  return getRuleContext<small_c_grammarParser::ForStepContext>(0);
}


size_t small_c_grammarParser::ForStatementContext::getRuleIndex() const {
  return small_c_grammarParser::RuleForStatement;
}

void small_c_grammarParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void small_c_grammarParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


std::any small_c_grammarParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ForStatementContext* small_c_grammarParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, small_c_grammarParser::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(small_c_grammarParser::T__9);
    setState(97);
    match(small_c_grammarParser::T__2);
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137440002050) != 0)) {
      setState(98);
      forStart();
    }
    setState(101);
    match(small_c_grammarParser::T__4);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::ID) {
      setState(102);
      forStop();
    }
    setState(105);
    match(small_c_grammarParser::T__4);
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::ID) {
      setState(106);
      forStep();
    }
    setState(109);
    match(small_c_grammarParser::T__3);
    setState(110);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStartContext ------------------------------------------------------------------

small_c_grammarParser::ForStartContext::ForStartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::AssignmentOpContext* small_c_grammarParser::ForStartContext::assignmentOp() {
  return getRuleContext<small_c_grammarParser::AssignmentOpContext>(0);
}


size_t small_c_grammarParser::ForStartContext::getRuleIndex() const {
  return small_c_grammarParser::RuleForStart;
}

void small_c_grammarParser::ForStartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStart(this);
}

void small_c_grammarParser::ForStartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStart(this);
}


std::any small_c_grammarParser::ForStartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitForStart(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ForStartContext* small_c_grammarParser::forStart() {
  ForStartContext *_localctx = _tracker.createInstance<ForStartContext>(_ctx, getState());
  enterRule(_localctx, 12, small_c_grammarParser::RuleForStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    assignmentOp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStopContext ------------------------------------------------------------------

small_c_grammarParser::ForStopContext::ForStopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::ForStopContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::ForStopContext::mathExpr() {
  return getRuleContext<small_c_grammarParser::MathExprContext>(0);
}


size_t small_c_grammarParser::ForStopContext::getRuleIndex() const {
  return small_c_grammarParser::RuleForStop;
}

void small_c_grammarParser::ForStopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStop(this);
}

void small_c_grammarParser::ForStopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStop(this);
}


std::any small_c_grammarParser::ForStopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitForStop(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ForStopContext* small_c_grammarParser::forStop() {
  ForStopContext *_localctx = _tracker.createInstance<ForStopContext>(_ctx, getState());
  enterRule(_localctx, 14, small_c_grammarParser::RuleForStop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(small_c_grammarParser::ID);
    setState(115);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30720) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(116);
    mathExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStepContext ------------------------------------------------------------------

small_c_grammarParser::ForStepContext::ForStepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::ForStepContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::ForStepContext::mathExpr() {
  return getRuleContext<small_c_grammarParser::MathExprContext>(0);
}

small_c_grammarParser::IncDecOpContext* small_c_grammarParser::ForStepContext::incDecOp() {
  return getRuleContext<small_c_grammarParser::IncDecOpContext>(0);
}


size_t small_c_grammarParser::ForStepContext::getRuleIndex() const {
  return small_c_grammarParser::RuleForStep;
}

void small_c_grammarParser::ForStepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStep(this);
}

void small_c_grammarParser::ForStepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStep(this);
}


std::any small_c_grammarParser::ForStepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitForStep(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ForStepContext* small_c_grammarParser::forStep() {
  ForStepContext *_localctx = _tracker.createInstance<ForStepContext>(_ctx, getState());
  enterRule(_localctx, 16, small_c_grammarParser::RuleForStep);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      match(small_c_grammarParser::ID);
      setState(119);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 491520) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(120);
      mathExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(121);
      incDecOp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOpContext ------------------------------------------------------------------

small_c_grammarParser::AssignmentOpContext::AssignmentOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::VarNameContext* small_c_grammarParser::AssignmentOpContext::varName() {
  return getRuleContext<small_c_grammarParser::VarNameContext>(0);
}

small_c_grammarParser::DeclarationContext* small_c_grammarParser::AssignmentOpContext::declaration() {
  return getRuleContext<small_c_grammarParser::DeclarationContext>(0);
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::AssignmentOpContext::mathExpr() {
  return getRuleContext<small_c_grammarParser::MathExprContext>(0);
}


size_t small_c_grammarParser::AssignmentOpContext::getRuleIndex() const {
  return small_c_grammarParser::RuleAssignmentOp;
}

void small_c_grammarParser::AssignmentOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOp(this);
}

void small_c_grammarParser::AssignmentOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOp(this);
}


std::any small_c_grammarParser::AssignmentOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitAssignmentOp(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::AssignmentOpContext* small_c_grammarParser::assignmentOp() {
  AssignmentOpContext *_localctx = _tracker.createInstance<AssignmentOpContext>(_ctx, getState());
  enterRule(_localctx, 18, small_c_grammarParser::RuleAssignmentOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__0

    || _la == small_c_grammarParser::T__19) {
      setState(124);
      declaration();
    }
    setState(127);
    varName();
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__18) {
      setState(128);
      match(small_c_grammarParser::T__18);
      setState(129);
      mathExpr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

small_c_grammarParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t small_c_grammarParser::DeclarationContext::getRuleIndex() const {
  return small_c_grammarParser::RuleDeclaration;
}

void small_c_grammarParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void small_c_grammarParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any small_c_grammarParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::DeclarationContext* small_c_grammarParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, small_c_grammarParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    _la = _input->LA(1);
    if (!(_la == small_c_grammarParser::T__0

    || _la == small_c_grammarParser::T__19)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameContext ------------------------------------------------------------------

small_c_grammarParser::VarNameContext::VarNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::VarNameContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

small_c_grammarParser::ArrayDeclContext* small_c_grammarParser::VarNameContext::arrayDecl() {
  return getRuleContext<small_c_grammarParser::ArrayDeclContext>(0);
}


size_t small_c_grammarParser::VarNameContext::getRuleIndex() const {
  return small_c_grammarParser::RuleVarName;
}

void small_c_grammarParser::VarNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarName(this);
}

void small_c_grammarParser::VarNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarName(this);
}


std::any small_c_grammarParser::VarNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitVarName(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::VarNameContext* small_c_grammarParser::varName() {
  VarNameContext *_localctx = _tracker.createInstance<VarNameContext>(_ctx, getState());
  enterRule(_localctx, 22, small_c_grammarParser::RuleVarName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(small_c_grammarParser::ID);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__20) {
      setState(135);
      arrayDecl();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDeclContext ------------------------------------------------------------------

small_c_grammarParser::ArrayDeclContext::ArrayDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::MathExprContext *> small_c_grammarParser::ArrayDeclContext::mathExpr() {
  return getRuleContexts<small_c_grammarParser::MathExprContext>();
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::ArrayDeclContext::mathExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::MathExprContext>(i);
}


size_t small_c_grammarParser::ArrayDeclContext::getRuleIndex() const {
  return small_c_grammarParser::RuleArrayDecl;
}

void small_c_grammarParser::ArrayDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayDecl(this);
}

void small_c_grammarParser::ArrayDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayDecl(this);
}


std::any small_c_grammarParser::ArrayDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitArrayDecl(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ArrayDeclContext* small_c_grammarParser::arrayDecl() {
  ArrayDeclContext *_localctx = _tracker.createInstance<ArrayDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, small_c_grammarParser::RuleArrayDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(small_c_grammarParser::T__20);
    setState(139);
    mathExpr();
    setState(140);
    match(small_c_grammarParser::T__21);
    setState(145);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(141);
      match(small_c_grammarParser::T__20);
      setState(142);
      mathExpr();
      setState(143);
      match(small_c_grammarParser::T__21);
      break;
    }

    default:
      break;
    }
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__20) {
      setState(147);
      match(small_c_grammarParser::T__20);
      setState(148);
      mathExpr();
      setState(149);
      match(small_c_grammarParser::T__21);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncDecOpContext ------------------------------------------------------------------

small_c_grammarParser::IncDecOpContext::IncDecOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::IncDecOpContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}


size_t small_c_grammarParser::IncDecOpContext::getRuleIndex() const {
  return small_c_grammarParser::RuleIncDecOp;
}

void small_c_grammarParser::IncDecOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncDecOp(this);
}

void small_c_grammarParser::IncDecOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncDecOp(this);
}


std::any small_c_grammarParser::IncDecOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitIncDecOp(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::IncDecOpContext* small_c_grammarParser::incDecOp() {
  IncDecOpContext *_localctx = _tracker.createInstance<IncDecOpContext>(_ctx, getState());
  enterRule(_localctx, 26, small_c_grammarParser::RuleIncDecOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(small_c_grammarParser::ID);
    setState(154);
    _la = _input->LA(1);
    if (!(_la == small_c_grammarParser::T__22

    || _la == small_c_grammarParser::T__23)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathExprContext ------------------------------------------------------------------

small_c_grammarParser::MathExprContext::MathExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::LogicalOrExprContext* small_c_grammarParser::MathExprContext::logicalOrExpr() {
  return getRuleContext<small_c_grammarParser::LogicalOrExprContext>(0);
}


size_t small_c_grammarParser::MathExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleMathExpr;
}

void small_c_grammarParser::MathExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathExpr(this);
}

void small_c_grammarParser::MathExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathExpr(this);
}


std::any small_c_grammarParser::MathExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitMathExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::mathExpr() {
  MathExprContext *_localctx = _tracker.createInstance<MathExprContext>(_ctx, getState());
  enterRule(_localctx, 28, small_c_grammarParser::RuleMathExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    logicalOrExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExprContext ------------------------------------------------------------------

small_c_grammarParser::LogicalOrExprContext::LogicalOrExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::LogicalAndExprContext *> small_c_grammarParser::LogicalOrExprContext::logicalAndExpr() {
  return getRuleContexts<small_c_grammarParser::LogicalAndExprContext>();
}

small_c_grammarParser::LogicalAndExprContext* small_c_grammarParser::LogicalOrExprContext::logicalAndExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::LogicalAndExprContext>(i);
}


size_t small_c_grammarParser::LogicalOrExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleLogicalOrExpr;
}

void small_c_grammarParser::LogicalOrExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpr(this);
}

void small_c_grammarParser::LogicalOrExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpr(this);
}


std::any small_c_grammarParser::LogicalOrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::LogicalOrExprContext* small_c_grammarParser::logicalOrExpr() {
  LogicalOrExprContext *_localctx = _tracker.createInstance<LogicalOrExprContext>(_ctx, getState());
  enterRule(_localctx, 30, small_c_grammarParser::RuleLogicalOrExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    logicalAndExpr();
    setState(163);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__24) {
      setState(159);
      match(small_c_grammarParser::T__24);
      setState(160);
      logicalAndExpr();
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExprContext ------------------------------------------------------------------

small_c_grammarParser::LogicalAndExprContext::LogicalAndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::EqualityExprContext *> small_c_grammarParser::LogicalAndExprContext::equalityExpr() {
  return getRuleContexts<small_c_grammarParser::EqualityExprContext>();
}

small_c_grammarParser::EqualityExprContext* small_c_grammarParser::LogicalAndExprContext::equalityExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::EqualityExprContext>(i);
}


size_t small_c_grammarParser::LogicalAndExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleLogicalAndExpr;
}

void small_c_grammarParser::LogicalAndExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpr(this);
}

void small_c_grammarParser::LogicalAndExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpr(this);
}


std::any small_c_grammarParser::LogicalAndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::LogicalAndExprContext* small_c_grammarParser::logicalAndExpr() {
  LogicalAndExprContext *_localctx = _tracker.createInstance<LogicalAndExprContext>(_ctx, getState());
  enterRule(_localctx, 32, small_c_grammarParser::RuleLogicalAndExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    equalityExpr();
    setState(171);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__25) {
      setState(167);
      match(small_c_grammarParser::T__25);
      setState(168);
      equalityExpr();
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExprContext ------------------------------------------------------------------

small_c_grammarParser::EqualityExprContext::EqualityExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::RelationalExprContext *> small_c_grammarParser::EqualityExprContext::relationalExpr() {
  return getRuleContexts<small_c_grammarParser::RelationalExprContext>();
}

small_c_grammarParser::RelationalExprContext* small_c_grammarParser::EqualityExprContext::relationalExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::RelationalExprContext>(i);
}


size_t small_c_grammarParser::EqualityExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleEqualityExpr;
}

void small_c_grammarParser::EqualityExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpr(this);
}

void small_c_grammarParser::EqualityExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpr(this);
}


std::any small_c_grammarParser::EqualityExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitEqualityExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::EqualityExprContext* small_c_grammarParser::equalityExpr() {
  EqualityExprContext *_localctx = _tracker.createInstance<EqualityExprContext>(_ctx, getState());
  enterRule(_localctx, 34, small_c_grammarParser::RuleEqualityExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    relationalExpr();
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__26

    || _la == small_c_grammarParser::T__27) {
      setState(175);
      _la = _input->LA(1);
      if (!(_la == small_c_grammarParser::T__26

      || _la == small_c_grammarParser::T__27)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(176);
      relationalExpr();
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExprContext ------------------------------------------------------------------

small_c_grammarParser::RelationalExprContext::RelationalExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::AdditiveExprContext *> small_c_grammarParser::RelationalExprContext::additiveExpr() {
  return getRuleContexts<small_c_grammarParser::AdditiveExprContext>();
}

small_c_grammarParser::AdditiveExprContext* small_c_grammarParser::RelationalExprContext::additiveExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::AdditiveExprContext>(i);
}


size_t small_c_grammarParser::RelationalExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleRelationalExpr;
}

void small_c_grammarParser::RelationalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpr(this);
}

void small_c_grammarParser::RelationalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpr(this);
}


std::any small_c_grammarParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::RelationalExprContext* small_c_grammarParser::relationalExpr() {
  RelationalExprContext *_localctx = _tracker.createInstance<RelationalExprContext>(_ctx, getState());
  enterRule(_localctx, 36, small_c_grammarParser::RuleRelationalExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    additiveExpr();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30720) != 0)) {
      setState(183);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30720) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(184);
      additiveExpr();
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExprContext ------------------------------------------------------------------

small_c_grammarParser::AdditiveExprContext::AdditiveExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::MultiplicativeExprContext *> small_c_grammarParser::AdditiveExprContext::multiplicativeExpr() {
  return getRuleContexts<small_c_grammarParser::MultiplicativeExprContext>();
}

small_c_grammarParser::MultiplicativeExprContext* small_c_grammarParser::AdditiveExprContext::multiplicativeExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::MultiplicativeExprContext>(i);
}


size_t small_c_grammarParser::AdditiveExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleAdditiveExpr;
}

void small_c_grammarParser::AdditiveExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpr(this);
}

void small_c_grammarParser::AdditiveExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpr(this);
}


std::any small_c_grammarParser::AdditiveExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::AdditiveExprContext* small_c_grammarParser::additiveExpr() {
  AdditiveExprContext *_localctx = _tracker.createInstance<AdditiveExprContext>(_ctx, getState());
  enterRule(_localctx, 38, small_c_grammarParser::RuleAdditiveExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    multiplicativeExpr();
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__28

    || _la == small_c_grammarParser::T__29) {
      setState(191);
      _la = _input->LA(1);
      if (!(_la == small_c_grammarParser::T__28

      || _la == small_c_grammarParser::T__29)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(192);
      multiplicativeExpr();
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExprContext ------------------------------------------------------------------

small_c_grammarParser::MultiplicativeExprContext::MultiplicativeExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::UnaryExprContext *> small_c_grammarParser::MultiplicativeExprContext::unaryExpr() {
  return getRuleContexts<small_c_grammarParser::UnaryExprContext>();
}

small_c_grammarParser::UnaryExprContext* small_c_grammarParser::MultiplicativeExprContext::unaryExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::UnaryExprContext>(i);
}


size_t small_c_grammarParser::MultiplicativeExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleMultiplicativeExpr;
}

void small_c_grammarParser::MultiplicativeExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpr(this);
}

void small_c_grammarParser::MultiplicativeExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpr(this);
}


std::any small_c_grammarParser::MultiplicativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::MultiplicativeExprContext* small_c_grammarParser::multiplicativeExpr() {
  MultiplicativeExprContext *_localctx = _tracker.createInstance<MultiplicativeExprContext>(_ctx, getState());
  enterRule(_localctx, 40, small_c_grammarParser::RuleMultiplicativeExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    unaryExpr();
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15032385536) != 0)) {
      setState(199);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 15032385536) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(200);
      unaryExpr();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExprContext ------------------------------------------------------------------

small_c_grammarParser::UnaryExprContext::UnaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::UnaryExprContext* small_c_grammarParser::UnaryExprContext::unaryExpr() {
  return getRuleContext<small_c_grammarParser::UnaryExprContext>(0);
}

small_c_grammarParser::PrimaryExprContext* small_c_grammarParser::UnaryExprContext::primaryExpr() {
  return getRuleContext<small_c_grammarParser::PrimaryExprContext>(0);
}


size_t small_c_grammarParser::UnaryExprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleUnaryExpr;
}

void small_c_grammarParser::UnaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpr(this);
}

void small_c_grammarParser::UnaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpr(this);
}


std::any small_c_grammarParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::UnaryExprContext* small_c_grammarParser::unaryExpr() {
  UnaryExprContext *_localctx = _tracker.createInstance<UnaryExprContext>(_ctx, getState());
  enterRule(_localctx, 42, small_c_grammarParser::RuleUnaryExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::T__28:
      case small_c_grammarParser::T__29:
      case small_c_grammarParser::T__33: {
        enterOuterAlt(_localctx, 1);
        setState(206);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 18790481920) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(207);
        unaryExpr();
        break;
      }

      case small_c_grammarParser::T__2:
      case small_c_grammarParser::ID:
      case small_c_grammarParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(208);
        primaryExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExprContext ------------------------------------------------------------------

small_c_grammarParser::PrimaryExprContext::PrimaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::FuncCallContext* small_c_grammarParser::PrimaryExprContext::funcCall() {
  return getRuleContext<small_c_grammarParser::FuncCallContext>(0);
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::PrimaryExprContext::mathExpr() {
  return getRuleContext<small_c_grammarParser::MathExprContext>(0);
}

small_c_grammarParser::VarNameContext* small_c_grammarParser::PrimaryExprContext::varName() {
  return getRuleContext<small_c_grammarParser::VarNameContext>(0);
}

tree::TerminalNode* small_c_grammarParser::PrimaryExprContext::NUMBER() {
  return getToken(small_c_grammarParser::NUMBER, 0);
}


size_t small_c_grammarParser::PrimaryExprContext::getRuleIndex() const {
  return small_c_grammarParser::RulePrimaryExpr;
}

void small_c_grammarParser::PrimaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpr(this);
}

void small_c_grammarParser::PrimaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpr(this);
}


std::any small_c_grammarParser::PrimaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::PrimaryExprContext* small_c_grammarParser::primaryExpr() {
  PrimaryExprContext *_localctx = _tracker.createInstance<PrimaryExprContext>(_ctx, getState());
  enterRule(_localctx, 44, small_c_grammarParser::RulePrimaryExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      funcCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(212);
      match(small_c_grammarParser::T__2);
      setState(213);
      mathExpr();
      setState(214);
      match(small_c_grammarParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(216);
      varName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(217);
      match(small_c_grammarParser::NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallContext ------------------------------------------------------------------

small_c_grammarParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::FuncNameContext* small_c_grammarParser::FuncCallContext::funcName() {
  return getRuleContext<small_c_grammarParser::FuncNameContext>(0);
}

std::vector<small_c_grammarParser::MathExprContext *> small_c_grammarParser::FuncCallContext::mathExpr() {
  return getRuleContexts<small_c_grammarParser::MathExprContext>();
}

small_c_grammarParser::MathExprContext* small_c_grammarParser::FuncCallContext::mathExpr(size_t i) {
  return getRuleContext<small_c_grammarParser::MathExprContext>(i);
}


size_t small_c_grammarParser::FuncCallContext::getRuleIndex() const {
  return small_c_grammarParser::RuleFuncCall;
}

void small_c_grammarParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void small_c_grammarParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}


std::any small_c_grammarParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::FuncCallContext* small_c_grammarParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 46, small_c_grammarParser::RuleFuncCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    funcName();
    setState(221);
    match(small_c_grammarParser::T__2);
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 431107342344) != 0)) {
      setState(222);
      mathExpr();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == small_c_grammarParser::T__34) {
        setState(223);
        match(small_c_grammarParser::T__34);
        setState(224);
        mathExpr();
        setState(229);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(232);
    match(small_c_grammarParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncNameContext ------------------------------------------------------------------

small_c_grammarParser::FuncNameContext::FuncNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> small_c_grammarParser::FuncNameContext::ID() {
  return getTokens(small_c_grammarParser::ID);
}

tree::TerminalNode* small_c_grammarParser::FuncNameContext::ID(size_t i) {
  return getToken(small_c_grammarParser::ID, i);
}


size_t small_c_grammarParser::FuncNameContext::getRuleIndex() const {
  return small_c_grammarParser::RuleFuncName;
}

void small_c_grammarParser::FuncNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncName(this);
}

void small_c_grammarParser::FuncNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncName(this);
}


std::any small_c_grammarParser::FuncNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitFuncName(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::FuncNameContext* small_c_grammarParser::funcName() {
  FuncNameContext *_localctx = _tracker.createInstance<FuncNameContext>(_ctx, getState());
  enterRule(_localctx, 48, small_c_grammarParser::RuleFuncName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(small_c_grammarParser::ID);
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__35) {
      setState(235);
      match(small_c_grammarParser::T__35);
      setState(236);
      match(small_c_grammarParser::ID);
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void small_c_grammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  small_c_grammarParserInitialize();
#else
  ::antlr4::internal::call_once(small_c_grammarParserOnceFlag, small_c_grammarParserInitialize);
#endif
}
