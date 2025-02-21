
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
      "forInit", "whileStatement", "returnStatement", "varDeclaration", 
      "varDeclarationNoSemi", "arrayDecl", "expression", "expression1", 
      "assignmentExpression", "conditionalExpression", "relationalExpression", 
      "additiveExpression", "multiplicativeExpression", "unaryExpression", 
      "prefixOperator", "postfixExpression", "postfixPart", "primaryExpression"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'('", "')'", "';'", "'{'", "'}'", "'if'", 
      "'else'", "'for'", "'while'", "'return'", "'='", "'['", "']'", "'<'", 
      "'>'", "'<='", "'>='", "'=='", "'!='", "'+'", "'-'", "'*'", "'/'", 
      "'++'", "'--'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "ID", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,211,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,72,8,2,1,3,
  	1,3,5,3,76,8,3,10,3,12,3,79,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,
  	4,90,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,3,6,104,8,6,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,3,9,119,8,9,1,9,1,
  	9,3,9,123,8,9,1,9,1,9,1,10,1,10,1,10,3,10,130,8,10,1,10,1,10,3,10,134,
  	8,10,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,3,14,147,
  	8,14,1,15,1,15,1,16,1,16,1,16,5,16,154,8,16,10,16,12,16,157,9,16,1,17,
  	1,17,1,17,1,17,1,17,1,17,5,17,165,8,17,10,17,12,17,168,9,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,5,18,176,8,18,10,18,12,18,179,9,18,1,19,1,19,1,19,
  	1,19,3,19,185,8,19,1,20,1,20,1,21,1,21,5,21,191,8,21,10,21,12,21,194,
  	9,21,1,22,1,22,1,22,1,22,1,22,3,22,201,8,22,1,23,1,23,1,23,1,23,1,23,
  	1,23,3,23,209,8,23,1,23,0,2,34,36,24,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,0,5,1,0,16,21,1,0,22,23,1,0,24,25,2,
  	0,22,23,26,27,1,0,26,27,209,0,51,1,0,0,0,2,56,1,0,0,0,4,71,1,0,0,0,6,
  	73,1,0,0,0,8,82,1,0,0,0,10,91,1,0,0,0,12,103,1,0,0,0,14,105,1,0,0,0,16,
  	111,1,0,0,0,18,115,1,0,0,0,20,126,1,0,0,0,22,135,1,0,0,0,24,139,1,0,0,
  	0,26,141,1,0,0,0,28,143,1,0,0,0,30,148,1,0,0,0,32,150,1,0,0,0,34,158,
  	1,0,0,0,36,169,1,0,0,0,38,184,1,0,0,0,40,186,1,0,0,0,42,188,1,0,0,0,44,
  	200,1,0,0,0,46,208,1,0,0,0,48,50,3,2,1,0,49,48,1,0,0,0,50,53,1,0,0,0,
  	51,49,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,51,1,0,0,0,54,55,5,0,0,1,
  	55,1,1,0,0,0,56,57,5,1,0,0,57,58,5,2,0,0,58,59,5,3,0,0,59,60,5,4,0,0,
  	60,61,3,6,3,0,61,3,1,0,0,0,62,72,3,8,4,0,63,72,3,10,5,0,64,72,3,14,7,
  	0,65,72,3,16,8,0,66,72,3,18,9,0,67,68,3,24,12,0,68,69,5,5,0,0,69,72,1,
  	0,0,0,70,72,3,6,3,0,71,62,1,0,0,0,71,63,1,0,0,0,71,64,1,0,0,0,71,65,1,
  	0,0,0,71,66,1,0,0,0,71,67,1,0,0,0,71,70,1,0,0,0,72,5,1,0,0,0,73,77,5,
  	6,0,0,74,76,3,4,2,0,75,74,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,
  	0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,81,5,7,0,0,81,7,1,0,0,0,82,83,5,
  	8,0,0,83,84,5,3,0,0,84,85,3,24,12,0,85,86,5,4,0,0,86,89,3,4,2,0,87,88,
  	5,9,0,0,88,90,3,4,2,0,89,87,1,0,0,0,89,90,1,0,0,0,90,9,1,0,0,0,91,92,
  	5,10,0,0,92,93,5,3,0,0,93,94,3,12,6,0,94,95,5,5,0,0,95,96,3,24,12,0,96,
  	97,5,5,0,0,97,98,3,26,13,0,98,99,5,4,0,0,99,100,3,4,2,0,100,11,1,0,0,
  	0,101,104,3,20,10,0,102,104,3,24,12,0,103,101,1,0,0,0,103,102,1,0,0,0,
  	104,13,1,0,0,0,105,106,5,11,0,0,106,107,5,3,0,0,107,108,3,24,12,0,108,
  	109,5,4,0,0,109,110,3,4,2,0,110,15,1,0,0,0,111,112,5,12,0,0,112,113,3,
  	24,12,0,113,114,5,5,0,0,114,17,1,0,0,0,115,116,5,1,0,0,116,118,5,28,0,
  	0,117,119,3,22,11,0,118,117,1,0,0,0,118,119,1,0,0,0,119,122,1,0,0,0,120,
  	121,5,13,0,0,121,123,3,24,12,0,122,120,1,0,0,0,122,123,1,0,0,0,123,124,
  	1,0,0,0,124,125,5,5,0,0,125,19,1,0,0,0,126,127,5,1,0,0,127,129,5,28,0,
  	0,128,130,3,22,11,0,129,128,1,0,0,0,129,130,1,0,0,0,130,133,1,0,0,0,131,
  	132,5,13,0,0,132,134,3,24,12,0,133,131,1,0,0,0,133,134,1,0,0,0,134,21,
  	1,0,0,0,135,136,5,14,0,0,136,137,5,29,0,0,137,138,5,15,0,0,138,23,1,0,
  	0,0,139,140,3,28,14,0,140,25,1,0,0,0,141,142,3,28,14,0,142,27,1,0,0,0,
  	143,146,3,30,15,0,144,145,5,13,0,0,145,147,3,28,14,0,146,144,1,0,0,0,
  	146,147,1,0,0,0,147,29,1,0,0,0,148,149,3,32,16,0,149,31,1,0,0,0,150,155,
  	3,34,17,0,151,152,7,0,0,0,152,154,3,34,17,0,153,151,1,0,0,0,154,157,1,
  	0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,33,1,0,0,0,157,155,1,0,0,0,
  	158,159,6,17,-1,0,159,160,3,36,18,0,160,166,1,0,0,0,161,162,10,2,0,0,
  	162,163,7,1,0,0,163,165,3,36,18,0,164,161,1,0,0,0,165,168,1,0,0,0,166,
  	164,1,0,0,0,166,167,1,0,0,0,167,35,1,0,0,0,168,166,1,0,0,0,169,170,6,
  	18,-1,0,170,171,3,38,19,0,171,177,1,0,0,0,172,173,10,2,0,0,173,174,7,
  	2,0,0,174,176,3,38,19,0,175,172,1,0,0,0,176,179,1,0,0,0,177,175,1,0,0,
  	0,177,178,1,0,0,0,178,37,1,0,0,0,179,177,1,0,0,0,180,181,3,40,20,0,181,
  	182,3,38,19,0,182,185,1,0,0,0,183,185,3,42,21,0,184,180,1,0,0,0,184,183,
  	1,0,0,0,185,39,1,0,0,0,186,187,7,3,0,0,187,41,1,0,0,0,188,192,3,46,23,
  	0,189,191,3,44,22,0,190,189,1,0,0,0,191,194,1,0,0,0,192,190,1,0,0,0,192,
  	193,1,0,0,0,193,43,1,0,0,0,194,192,1,0,0,0,195,196,5,14,0,0,196,197,3,
  	24,12,0,197,198,5,15,0,0,198,201,1,0,0,0,199,201,7,4,0,0,200,195,1,0,
  	0,0,200,199,1,0,0,0,201,45,1,0,0,0,202,209,5,28,0,0,203,209,5,29,0,0,
  	204,205,5,3,0,0,205,206,3,24,12,0,206,207,5,4,0,0,207,209,1,0,0,0,208,
  	202,1,0,0,0,208,203,1,0,0,0,208,204,1,0,0,0,209,47,1,0,0,0,17,51,71,77,
  	89,103,118,122,129,133,146,155,166,177,184,192,200,208
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
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__0) {
      setState(48);
      function();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
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
    setState(56);
    match(small_c_grammarParser::T__0);
    setState(57);
    match(small_c_grammarParser::T__1);
    setState(58);
    match(small_c_grammarParser::T__2);
    setState(59);
    match(small_c_grammarParser::T__3);
    setState(60);
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

small_c_grammarParser::WhileStatementContext* small_c_grammarParser::StatementContext::whileStatement() {
  return getRuleContext<small_c_grammarParser::WhileStatementContext>(0);
}

small_c_grammarParser::ReturnStatementContext* small_c_grammarParser::StatementContext::returnStatement() {
  return getRuleContext<small_c_grammarParser::ReturnStatementContext>(0);
}

small_c_grammarParser::VarDeclarationContext* small_c_grammarParser::StatementContext::varDeclaration() {
  return getRuleContext<small_c_grammarParser::VarDeclarationContext>(0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::StatementContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
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
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        ifStatement();
        break;
      }

      case small_c_grammarParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        forStatement();
        break;
      }

      case small_c_grammarParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(64);
        whileStatement();
        break;
      }

      case small_c_grammarParser::T__11: {
        enterOuterAlt(_localctx, 4);
        setState(65);
        returnStatement();
        break;
      }

      case small_c_grammarParser::T__0: {
        enterOuterAlt(_localctx, 5);
        setState(66);
        varDeclaration();
        break;
      }

      case small_c_grammarParser::T__2:
      case small_c_grammarParser::T__21:
      case small_c_grammarParser::T__22:
      case small_c_grammarParser::T__25:
      case small_c_grammarParser::T__26:
      case small_c_grammarParser::ID:
      case small_c_grammarParser::INT: {
        enterOuterAlt(_localctx, 6);
        setState(67);
        expression();
        setState(68);
        match(small_c_grammarParser::T__4);
        break;
      }

      case small_c_grammarParser::T__5: {
        enterOuterAlt(_localctx, 7);
        setState(70);
        block();
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
    setState(73);
    match(small_c_grammarParser::T__5);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1019223370) != 0)) {
      setState(74);
      statement();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
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

small_c_grammarParser::ExpressionContext* small_c_grammarParser::IfStatementContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}

std::vector<small_c_grammarParser::StatementContext *> small_c_grammarParser::IfStatementContext::statement() {
  return getRuleContexts<small_c_grammarParser::StatementContext>();
}

small_c_grammarParser::StatementContext* small_c_grammarParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<small_c_grammarParser::StatementContext>(i);
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
    setState(82);
    match(small_c_grammarParser::T__7);
    setState(83);
    match(small_c_grammarParser::T__2);
    setState(84);
    expression();
    setState(85);
    match(small_c_grammarParser::T__3);
    setState(86);
    statement();
    setState(89);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(87);
      match(small_c_grammarParser::T__8);
      setState(88);
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

small_c_grammarParser::ForInitContext* small_c_grammarParser::ForStatementContext::forInit() {
  return getRuleContext<small_c_grammarParser::ForInitContext>(0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::ForStatementContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}

small_c_grammarParser::Expression1Context* small_c_grammarParser::ForStatementContext::expression1() {
  return getRuleContext<small_c_grammarParser::Expression1Context>(0);
}

small_c_grammarParser::StatementContext* small_c_grammarParser::ForStatementContext::statement() {
  return getRuleContext<small_c_grammarParser::StatementContext>(0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(small_c_grammarParser::T__9);
    setState(92);
    match(small_c_grammarParser::T__2);
    setState(93);
    forInit();
    setState(94);
    match(small_c_grammarParser::T__4);
    setState(95);
    expression();
    setState(96);
    match(small_c_grammarParser::T__4);
    setState(97);
    expression1();
    setState(98);
    match(small_c_grammarParser::T__3);
    setState(99);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

small_c_grammarParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::VarDeclarationNoSemiContext* small_c_grammarParser::ForInitContext::varDeclarationNoSemi() {
  return getRuleContext<small_c_grammarParser::VarDeclarationNoSemiContext>(0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::ForInitContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::ForInitContext::getRuleIndex() const {
  return small_c_grammarParser::RuleForInit;
}

void small_c_grammarParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void small_c_grammarParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}


std::any small_c_grammarParser::ForInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitForInit(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ForInitContext* small_c_grammarParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 12, small_c_grammarParser::RuleForInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(101);
        varDeclarationNoSemi();
        break;
      }

      case small_c_grammarParser::T__2:
      case small_c_grammarParser::T__21:
      case small_c_grammarParser::T__22:
      case small_c_grammarParser::T__25:
      case small_c_grammarParser::T__26:
      case small_c_grammarParser::ID:
      case small_c_grammarParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(102);
        expression();
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

//----------------- WhileStatementContext ------------------------------------------------------------------

small_c_grammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::WhileStatementContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}

small_c_grammarParser::StatementContext* small_c_grammarParser::WhileStatementContext::statement() {
  return getRuleContext<small_c_grammarParser::StatementContext>(0);
}


size_t small_c_grammarParser::WhileStatementContext::getRuleIndex() const {
  return small_c_grammarParser::RuleWhileStatement;
}

void small_c_grammarParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void small_c_grammarParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any small_c_grammarParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::WhileStatementContext* small_c_grammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, small_c_grammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(small_c_grammarParser::T__10);
    setState(106);
    match(small_c_grammarParser::T__2);
    setState(107);
    expression();
    setState(108);
    match(small_c_grammarParser::T__3);
    setState(109);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

small_c_grammarParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::ReturnStatementContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::ReturnStatementContext::getRuleIndex() const {
  return small_c_grammarParser::RuleReturnStatement;
}

void small_c_grammarParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void small_c_grammarParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


std::any small_c_grammarParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ReturnStatementContext* small_c_grammarParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, small_c_grammarParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(small_c_grammarParser::T__11);
    setState(112);
    expression();
    setState(113);
    match(small_c_grammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

small_c_grammarParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::VarDeclarationContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

small_c_grammarParser::ArrayDeclContext* small_c_grammarParser::VarDeclarationContext::arrayDecl() {
  return getRuleContext<small_c_grammarParser::ArrayDeclContext>(0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::VarDeclarationContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::VarDeclarationContext::getRuleIndex() const {
  return small_c_grammarParser::RuleVarDeclaration;
}

void small_c_grammarParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void small_c_grammarParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}


std::any small_c_grammarParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::VarDeclarationContext* small_c_grammarParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, small_c_grammarParser::RuleVarDeclaration);
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
    setState(115);
    match(small_c_grammarParser::T__0);
    setState(116);
    match(small_c_grammarParser::ID);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__13) {
      setState(117);
      arrayDecl();
    }
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__12) {
      setState(120);
      match(small_c_grammarParser::T__12);
      setState(121);
      expression();
    }
    setState(124);
    match(small_c_grammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationNoSemiContext ------------------------------------------------------------------

small_c_grammarParser::VarDeclarationNoSemiContext::VarDeclarationNoSemiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::VarDeclarationNoSemiContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

small_c_grammarParser::ArrayDeclContext* small_c_grammarParser::VarDeclarationNoSemiContext::arrayDecl() {
  return getRuleContext<small_c_grammarParser::ArrayDeclContext>(0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::VarDeclarationNoSemiContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::VarDeclarationNoSemiContext::getRuleIndex() const {
  return small_c_grammarParser::RuleVarDeclarationNoSemi;
}

void small_c_grammarParser::VarDeclarationNoSemiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclarationNoSemi(this);
}

void small_c_grammarParser::VarDeclarationNoSemiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclarationNoSemi(this);
}


std::any small_c_grammarParser::VarDeclarationNoSemiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitVarDeclarationNoSemi(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::VarDeclarationNoSemiContext* small_c_grammarParser::varDeclarationNoSemi() {
  VarDeclarationNoSemiContext *_localctx = _tracker.createInstance<VarDeclarationNoSemiContext>(_ctx, getState());
  enterRule(_localctx, 20, small_c_grammarParser::RuleVarDeclarationNoSemi);
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
    setState(126);
    match(small_c_grammarParser::T__0);
    setState(127);
    match(small_c_grammarParser::ID);
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__13) {
      setState(128);
      arrayDecl();
    }
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__12) {
      setState(131);
      match(small_c_grammarParser::T__12);
      setState(132);
      expression();
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

tree::TerminalNode* small_c_grammarParser::ArrayDeclContext::INT() {
  return getToken(small_c_grammarParser::INT, 0);
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
  enterRule(_localctx, 22, small_c_grammarParser::RuleArrayDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(small_c_grammarParser::T__13);
    setState(136);
    match(small_c_grammarParser::INT);
    setState(137);
    match(small_c_grammarParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

small_c_grammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::AssignmentExpressionContext* small_c_grammarParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<small_c_grammarParser::AssignmentExpressionContext>(0);
}


size_t small_c_grammarParser::ExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleExpression;
}

void small_c_grammarParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void small_c_grammarParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any small_c_grammarParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, small_c_grammarParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression1Context ------------------------------------------------------------------

small_c_grammarParser::Expression1Context::Expression1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::AssignmentExpressionContext* small_c_grammarParser::Expression1Context::assignmentExpression() {
  return getRuleContext<small_c_grammarParser::AssignmentExpressionContext>(0);
}


size_t small_c_grammarParser::Expression1Context::getRuleIndex() const {
  return small_c_grammarParser::RuleExpression1;
}

void small_c_grammarParser::Expression1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression1(this);
}

void small_c_grammarParser::Expression1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression1(this);
}


std::any small_c_grammarParser::Expression1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitExpression1(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::Expression1Context* small_c_grammarParser::expression1() {
  Expression1Context *_localctx = _tracker.createInstance<Expression1Context>(_ctx, getState());
  enterRule(_localctx, 26, small_c_grammarParser::RuleExpression1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

small_c_grammarParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::ConditionalExpressionContext* small_c_grammarParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<small_c_grammarParser::ConditionalExpressionContext>(0);
}

small_c_grammarParser::AssignmentExpressionContext* small_c_grammarParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<small_c_grammarParser::AssignmentExpressionContext>(0);
}


size_t small_c_grammarParser::AssignmentExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleAssignmentExpression;
}

void small_c_grammarParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void small_c_grammarParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


std::any small_c_grammarParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::AssignmentExpressionContext* small_c_grammarParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, small_c_grammarParser::RuleAssignmentExpression);
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
    setState(143);
    conditionalExpression();
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__12) {
      setState(144);
      match(small_c_grammarParser::T__12);
      setState(145);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

small_c_grammarParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::RelationalExpressionContext* small_c_grammarParser::ConditionalExpressionContext::relationalExpression() {
  return getRuleContext<small_c_grammarParser::RelationalExpressionContext>(0);
}


size_t small_c_grammarParser::ConditionalExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleConditionalExpression;
}

void small_c_grammarParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void small_c_grammarParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


std::any small_c_grammarParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ConditionalExpressionContext* small_c_grammarParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, small_c_grammarParser::RuleConditionalExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    relationalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

small_c_grammarParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::AdditiveExpressionContext *> small_c_grammarParser::RelationalExpressionContext::additiveExpression() {
  return getRuleContexts<small_c_grammarParser::AdditiveExpressionContext>();
}

small_c_grammarParser::AdditiveExpressionContext* small_c_grammarParser::RelationalExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<small_c_grammarParser::AdditiveExpressionContext>(i);
}


size_t small_c_grammarParser::RelationalExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleRelationalExpression;
}

void small_c_grammarParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void small_c_grammarParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


std::any small_c_grammarParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::RelationalExpressionContext* small_c_grammarParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, small_c_grammarParser::RuleRelationalExpression);
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
    setState(150);
    additiveExpression(0);
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4128768) != 0)) {
      setState(151);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4128768) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(152);
      additiveExpression(0);
      setState(157);
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

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

small_c_grammarParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::MultiplicativeExpressionContext* small_c_grammarParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<small_c_grammarParser::MultiplicativeExpressionContext>(0);
}

small_c_grammarParser::AdditiveExpressionContext* small_c_grammarParser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<small_c_grammarParser::AdditiveExpressionContext>(0);
}


size_t small_c_grammarParser::AdditiveExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleAdditiveExpression;
}

void small_c_grammarParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void small_c_grammarParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


std::any small_c_grammarParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}


small_c_grammarParser::AdditiveExpressionContext* small_c_grammarParser::additiveExpression() {
   return additiveExpression(0);
}

small_c_grammarParser::AdditiveExpressionContext* small_c_grammarParser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  small_c_grammarParser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  small_c_grammarParser::AdditiveExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, small_c_grammarParser::RuleAdditiveExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(159);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(166);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
        setState(161);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(162);
        _la = _input->LA(1);
        if (!(_la == small_c_grammarParser::T__21

        || _la == small_c_grammarParser::T__22)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(163);
        multiplicativeExpression(0); 
      }
      setState(168);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

small_c_grammarParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::UnaryExpressionContext* small_c_grammarParser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContext<small_c_grammarParser::UnaryExpressionContext>(0);
}

small_c_grammarParser::MultiplicativeExpressionContext* small_c_grammarParser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<small_c_grammarParser::MultiplicativeExpressionContext>(0);
}


size_t small_c_grammarParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleMultiplicativeExpression;
}

void small_c_grammarParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void small_c_grammarParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


std::any small_c_grammarParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}


small_c_grammarParser::MultiplicativeExpressionContext* small_c_grammarParser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

small_c_grammarParser::MultiplicativeExpressionContext* small_c_grammarParser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  small_c_grammarParser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  small_c_grammarParser::MultiplicativeExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, small_c_grammarParser::RuleMultiplicativeExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(170);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(177);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
        setState(172);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(173);
        _la = _input->LA(1);
        if (!(_la == small_c_grammarParser::T__23

        || _la == small_c_grammarParser::T__24)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(174);
        unaryExpression(); 
      }
      setState(179);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

small_c_grammarParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::PrefixOperatorContext* small_c_grammarParser::UnaryExpressionContext::prefixOperator() {
  return getRuleContext<small_c_grammarParser::PrefixOperatorContext>(0);
}

small_c_grammarParser::UnaryExpressionContext* small_c_grammarParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<small_c_grammarParser::UnaryExpressionContext>(0);
}

small_c_grammarParser::PostfixExpressionContext* small_c_grammarParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<small_c_grammarParser::PostfixExpressionContext>(0);
}


size_t small_c_grammarParser::UnaryExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleUnaryExpression;
}

void small_c_grammarParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void small_c_grammarParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


std::any small_c_grammarParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::UnaryExpressionContext* small_c_grammarParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, small_c_grammarParser::RuleUnaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::T__21:
      case small_c_grammarParser::T__22:
      case small_c_grammarParser::T__25:
      case small_c_grammarParser::T__26: {
        enterOuterAlt(_localctx, 1);
        setState(180);
        prefixOperator();
        setState(181);
        unaryExpression();
        break;
      }

      case small_c_grammarParser::T__2:
      case small_c_grammarParser::ID:
      case small_c_grammarParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(183);
        postfixExpression();
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

//----------------- PrefixOperatorContext ------------------------------------------------------------------

small_c_grammarParser::PrefixOperatorContext::PrefixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t small_c_grammarParser::PrefixOperatorContext::getRuleIndex() const {
  return small_c_grammarParser::RulePrefixOperator;
}

void small_c_grammarParser::PrefixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixOperator(this);
}

void small_c_grammarParser::PrefixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixOperator(this);
}


std::any small_c_grammarParser::PrefixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitPrefixOperator(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::PrefixOperatorContext* small_c_grammarParser::prefixOperator() {
  PrefixOperatorContext *_localctx = _tracker.createInstance<PrefixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 40, small_c_grammarParser::RulePrefixOperator);
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
    setState(186);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 213909504) != 0))) {
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

small_c_grammarParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::PrimaryExpressionContext* small_c_grammarParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<small_c_grammarParser::PrimaryExpressionContext>(0);
}

std::vector<small_c_grammarParser::PostfixPartContext *> small_c_grammarParser::PostfixExpressionContext::postfixPart() {
  return getRuleContexts<small_c_grammarParser::PostfixPartContext>();
}

small_c_grammarParser::PostfixPartContext* small_c_grammarParser::PostfixExpressionContext::postfixPart(size_t i) {
  return getRuleContext<small_c_grammarParser::PostfixPartContext>(i);
}


size_t small_c_grammarParser::PostfixExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RulePostfixExpression;
}

void small_c_grammarParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void small_c_grammarParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


std::any small_c_grammarParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::PostfixExpressionContext* small_c_grammarParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, small_c_grammarParser::RulePostfixExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(188);
    primaryExpression();
    setState(192);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(189);
        postfixPart(); 
      }
      setState(194);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixPartContext ------------------------------------------------------------------

small_c_grammarParser::PostfixPartContext::PostfixPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::PostfixPartContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::PostfixPartContext::getRuleIndex() const {
  return small_c_grammarParser::RulePostfixPart;
}

void small_c_grammarParser::PostfixPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixPart(this);
}

void small_c_grammarParser::PostfixPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixPart(this);
}


std::any small_c_grammarParser::PostfixPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitPostfixPart(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::PostfixPartContext* small_c_grammarParser::postfixPart() {
  PostfixPartContext *_localctx = _tracker.createInstance<PostfixPartContext>(_ctx, getState());
  enterRule(_localctx, 44, small_c_grammarParser::RulePostfixPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(195);
        match(small_c_grammarParser::T__13);
        setState(196);
        expression();
        setState(197);
        match(small_c_grammarParser::T__14);
        break;
      }

      case small_c_grammarParser::T__25:
      case small_c_grammarParser::T__26: {
        enterOuterAlt(_localctx, 2);
        setState(199);
        _la = _input->LA(1);
        if (!(_la == small_c_grammarParser::T__25

        || _la == small_c_grammarParser::T__26)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
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

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

small_c_grammarParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::PrimaryExpressionContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

tree::TerminalNode* small_c_grammarParser::PrimaryExpressionContext::INT() {
  return getToken(small_c_grammarParser::INT, 0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::PrimaryExpressionContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::PrimaryExpressionContext::getRuleIndex() const {
  return small_c_grammarParser::RulePrimaryExpression;
}

void small_c_grammarParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void small_c_grammarParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


std::any small_c_grammarParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::PrimaryExpressionContext* small_c_grammarParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, small_c_grammarParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(202);
        match(small_c_grammarParser::ID);
        break;
      }

      case small_c_grammarParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(203);
        match(small_c_grammarParser::INT);
        break;
      }

      case small_c_grammarParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(204);
        match(small_c_grammarParser::T__2);
        setState(205);
        expression();
        setState(206);
        match(small_c_grammarParser::T__3);
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

bool small_c_grammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return additiveExpressionSempred(antlrcpp::downCast<AdditiveExpressionContext *>(context), predicateIndex);
    case 18: return multiplicativeExpressionSempred(antlrcpp::downCast<MultiplicativeExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool small_c_grammarParser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool small_c_grammarParser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void small_c_grammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  small_c_grammarParserInitialize();
#else
  ::antlr4::internal::call_once(small_c_grammarParserOnceFlag, small_c_grammarParserInitialize);
#endif
}
