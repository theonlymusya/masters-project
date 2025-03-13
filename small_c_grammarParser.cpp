
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
      "forStart", "forStop", "forStep", "varDeclaration", "arrayDecl", "math_expr"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'{'", "'}'", "'<'", "'>'", "'<='", "'>='", 
      "'-='", "'+='", "'++'", "'--'", "'='", "'['", "']'", "'int'", "'double'", 
      "'main'", "'if'", "'else'", "'for'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "INT", "DOUBLE", "MAIN", "IF", "ELSE", "FOR", "EXPRESSION_TEXT", "ID", 
      "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,26,112,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,5,0,27,8,0,10,0,12,
  	0,30,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,
  	46,8,2,1,3,1,3,5,3,50,8,3,10,3,12,3,53,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,3,4,66,8,4,1,5,1,5,1,5,3,5,71,8,5,1,5,1,5,3,5,75,8,
  	5,1,5,1,5,3,5,79,8,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,
  	1,8,1,8,3,8,95,8,8,1,9,1,9,1,9,3,9,100,8,9,1,9,1,9,3,9,104,8,9,1,10,1,
  	10,1,10,1,10,1,11,1,11,1,11,0,0,12,0,2,4,6,8,10,12,14,16,18,20,22,0,4,
  	1,0,6,9,1,0,10,11,1,0,12,13,1,0,17,18,113,0,28,1,0,0,0,2,33,1,0,0,0,4,
  	45,1,0,0,0,6,47,1,0,0,0,8,56,1,0,0,0,10,67,1,0,0,0,12,83,1,0,0,0,14,85,
  	1,0,0,0,16,94,1,0,0,0,18,96,1,0,0,0,20,105,1,0,0,0,22,109,1,0,0,0,24,
  	27,3,2,1,0,25,27,3,4,2,0,26,24,1,0,0,0,26,25,1,0,0,0,27,30,1,0,0,0,28,
  	26,1,0,0,0,28,29,1,0,0,0,29,31,1,0,0,0,30,28,1,0,0,0,31,32,5,0,0,1,32,
  	1,1,0,0,0,33,34,5,17,0,0,34,35,5,19,0,0,35,36,5,1,0,0,36,37,5,2,0,0,37,
  	38,3,6,3,0,38,3,1,0,0,0,39,46,3,8,4,0,40,46,3,10,5,0,41,42,3,18,9,0,42,
  	43,5,3,0,0,43,46,1,0,0,0,44,46,3,6,3,0,45,39,1,0,0,0,45,40,1,0,0,0,45,
  	41,1,0,0,0,45,44,1,0,0,0,46,5,1,0,0,0,47,51,5,4,0,0,48,50,3,4,2,0,49,
  	48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,54,1,0,0,0,53,
  	51,1,0,0,0,54,55,5,5,0,0,55,7,1,0,0,0,56,57,5,20,0,0,57,58,5,1,0,0,58,
  	59,3,22,11,0,59,60,5,2,0,0,60,65,3,4,2,0,61,62,5,21,0,0,62,66,3,8,4,0,
  	63,64,5,21,0,0,64,66,3,4,2,0,65,61,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,
  	0,66,9,1,0,0,0,67,68,5,22,0,0,68,70,5,1,0,0,69,71,3,12,6,0,70,69,1,0,
  	0,0,70,71,1,0,0,0,71,72,1,0,0,0,72,74,5,3,0,0,73,75,3,14,7,0,74,73,1,
  	0,0,0,74,75,1,0,0,0,75,76,1,0,0,0,76,78,5,3,0,0,77,79,3,16,8,0,78,77,
  	1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,80,81,5,2,0,0,81,82,3,4,2,0,82,11,
  	1,0,0,0,83,84,3,18,9,0,84,13,1,0,0,0,85,86,5,24,0,0,86,87,7,0,0,0,87,
  	88,3,22,11,0,88,15,1,0,0,0,89,90,5,24,0,0,90,91,7,1,0,0,91,95,3,22,11,
  	0,92,93,5,24,0,0,93,95,7,2,0,0,94,89,1,0,0,0,94,92,1,0,0,0,95,17,1,0,
  	0,0,96,97,7,3,0,0,97,99,5,24,0,0,98,100,3,20,10,0,99,98,1,0,0,0,99,100,
  	1,0,0,0,100,103,1,0,0,0,101,102,5,14,0,0,102,104,3,22,11,0,103,101,1,
  	0,0,0,103,104,1,0,0,0,104,19,1,0,0,0,105,106,5,15,0,0,106,107,3,22,11,
  	0,107,108,5,16,0,0,108,21,1,0,0,0,109,110,5,23,0,0,110,23,1,0,0,0,11,
  	26,28,45,51,65,70,74,78,94,99,103
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
    setState(28);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5636112) != 0)) {
      setState(26);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(24);
        function();
        break;
      }

      case 2: {
        setState(25);
        statement();
        break;
      }

      default:
        break;
      }
      setState(30);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(31);
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

tree::TerminalNode* small_c_grammarParser::FunctionContext::INT() {
  return getToken(small_c_grammarParser::INT, 0);
}

tree::TerminalNode* small_c_grammarParser::FunctionContext::MAIN() {
  return getToken(small_c_grammarParser::MAIN, 0);
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
    setState(33);
    match(small_c_grammarParser::INT);
    setState(34);
    match(small_c_grammarParser::MAIN);
    setState(35);
    match(small_c_grammarParser::T__0);
    setState(36);
    match(small_c_grammarParser::T__1);
    setState(37);
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

small_c_grammarParser::VarDeclarationContext* small_c_grammarParser::StatementContext::varDeclaration() {
  return getRuleContext<small_c_grammarParser::VarDeclarationContext>(0);
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
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(39);
        ifStatement();
        break;
      }

      case small_c_grammarParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(40);
        forStatement();
        break;
      }

      case small_c_grammarParser::INT:
      case small_c_grammarParser::DOUBLE: {
        enterOuterAlt(_localctx, 3);
        setState(41);
        varDeclaration();
        setState(42);
        match(small_c_grammarParser::T__2);
        break;
      }

      case small_c_grammarParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(44);
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
    setState(47);
    match(small_c_grammarParser::T__3);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5636112) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(small_c_grammarParser::T__4);
   
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

tree::TerminalNode* small_c_grammarParser::IfStatementContext::IF() {
  return getToken(small_c_grammarParser::IF, 0);
}

small_c_grammarParser::Math_exprContext* small_c_grammarParser::IfStatementContext::math_expr() {
  return getRuleContext<small_c_grammarParser::Math_exprContext>(0);
}

std::vector<small_c_grammarParser::StatementContext *> small_c_grammarParser::IfStatementContext::statement() {
  return getRuleContexts<small_c_grammarParser::StatementContext>();
}

small_c_grammarParser::StatementContext* small_c_grammarParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<small_c_grammarParser::StatementContext>(i);
}

tree::TerminalNode* small_c_grammarParser::IfStatementContext::ELSE() {
  return getToken(small_c_grammarParser::ELSE, 0);
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
    setState(56);
    match(small_c_grammarParser::IF);
    setState(57);
    match(small_c_grammarParser::T__0);
    setState(58);
    math_expr();
    setState(59);
    match(small_c_grammarParser::T__1);
    setState(60);
    statement();
    setState(65);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(61);
      match(small_c_grammarParser::ELSE);
      setState(62);
      ifStatement();
      break;
    }

    case 2: {
      setState(63);
      match(small_c_grammarParser::ELSE);
      setState(64);
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

tree::TerminalNode* small_c_grammarParser::ForStatementContext::FOR() {
  return getToken(small_c_grammarParser::FOR, 0);
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
    setState(67);
    match(small_c_grammarParser::FOR);
    setState(68);
    match(small_c_grammarParser::T__0);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::INT

    || _la == small_c_grammarParser::DOUBLE) {
      setState(69);
      forStart();
    }
    setState(72);
    match(small_c_grammarParser::T__2);
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::ID) {
      setState(73);
      forStop();
    }
    setState(76);
    match(small_c_grammarParser::T__2);
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::ID) {
      setState(77);
      forStep();
    }
    setState(80);
    match(small_c_grammarParser::T__1);
    setState(81);
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

small_c_grammarParser::VarDeclarationContext* small_c_grammarParser::ForStartContext::varDeclaration() {
  return getRuleContext<small_c_grammarParser::VarDeclarationContext>(0);
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
    setState(83);
    varDeclaration();
   
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

small_c_grammarParser::Math_exprContext* small_c_grammarParser::ForStopContext::math_expr() {
  return getRuleContext<small_c_grammarParser::Math_exprContext>(0);
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
    setState(85);
    match(small_c_grammarParser::ID);
    setState(86);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 960) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(87);
    math_expr();
   
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

small_c_grammarParser::Math_exprContext* small_c_grammarParser::ForStepContext::math_expr() {
  return getRuleContext<small_c_grammarParser::Math_exprContext>(0);
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
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(89);
      match(small_c_grammarParser::ID);
      setState(90);
      _la = _input->LA(1);
      if (!(_la == small_c_grammarParser::T__9

      || _la == small_c_grammarParser::T__10)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(91);
      math_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      match(small_c_grammarParser::ID);
      setState(93);
      _la = _input->LA(1);
      if (!(_la == small_c_grammarParser::T__11

      || _la == small_c_grammarParser::T__12)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
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

//----------------- VarDeclarationContext ------------------------------------------------------------------

small_c_grammarParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::VarDeclarationContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

tree::TerminalNode* small_c_grammarParser::VarDeclarationContext::INT() {
  return getToken(small_c_grammarParser::INT, 0);
}

tree::TerminalNode* small_c_grammarParser::VarDeclarationContext::DOUBLE() {
  return getToken(small_c_grammarParser::DOUBLE, 0);
}

small_c_grammarParser::ArrayDeclContext* small_c_grammarParser::VarDeclarationContext::arrayDecl() {
  return getRuleContext<small_c_grammarParser::ArrayDeclContext>(0);
}

small_c_grammarParser::Math_exprContext* small_c_grammarParser::VarDeclarationContext::math_expr() {
  return getRuleContext<small_c_grammarParser::Math_exprContext>(0);
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
    setState(96);
    _la = _input->LA(1);
    if (!(_la == small_c_grammarParser::INT

    || _la == small_c_grammarParser::DOUBLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(97);
    match(small_c_grammarParser::ID);
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__14) {
      setState(98);
      arrayDecl();
    }
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__13) {
      setState(101);
      match(small_c_grammarParser::T__13);
      setState(102);
      math_expr();
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

small_c_grammarParser::Math_exprContext* small_c_grammarParser::ArrayDeclContext::math_expr() {
  return getRuleContext<small_c_grammarParser::Math_exprContext>(0);
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
  enterRule(_localctx, 20, small_c_grammarParser::RuleArrayDecl);

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
    match(small_c_grammarParser::T__14);
    setState(106);
    math_expr();
    setState(107);
    match(small_c_grammarParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Math_exprContext ------------------------------------------------------------------

small_c_grammarParser::Math_exprContext::Math_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::Math_exprContext::EXPRESSION_TEXT() {
  return getToken(small_c_grammarParser::EXPRESSION_TEXT, 0);
}


size_t small_c_grammarParser::Math_exprContext::getRuleIndex() const {
  return small_c_grammarParser::RuleMath_expr;
}

void small_c_grammarParser::Math_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMath_expr(this);
}

void small_c_grammarParser::Math_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMath_expr(this);
}


std::any small_c_grammarParser::Math_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitMath_expr(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::Math_exprContext* small_c_grammarParser::math_expr() {
  Math_exprContext *_localctx = _tracker.createInstance<Math_exprContext>(_ctx, getState());
  enterRule(_localctx, 22, small_c_grammarParser::RuleMath_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(small_c_grammarParser::EXPRESSION_TEXT);
   
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
