
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
      "whileStatement", "returnStatement", "varDeclaration", "assignment", 
      "condition", "expression"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'('", "')'", "';'", "'{'", "'}'", "'if'", 
      "'else'", "'for'", "'while'", "'return'", "'='", "'<'", "'>'", "'=='", 
      "'!='", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "ID", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,119,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,5,0,26,8,0,10,0,12,0,29,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,3,2,51,8,2,1,3,1,3,5,3,55,8,3,10,3,12,3,58,9,3,1,3,1,3,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,69,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,3,8,94,
  	8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,3,11,109,
  	8,11,1,11,1,11,1,11,5,11,114,8,11,10,11,12,11,117,9,11,1,11,0,1,22,12,
  	0,2,4,6,8,10,12,14,16,18,20,22,0,2,1,0,14,17,1,0,18,21,119,0,27,1,0,0,
  	0,2,32,1,0,0,0,4,50,1,0,0,0,6,52,1,0,0,0,8,61,1,0,0,0,10,70,1,0,0,0,12,
  	79,1,0,0,0,14,85,1,0,0,0,16,89,1,0,0,0,18,97,1,0,0,0,20,101,1,0,0,0,22,
  	108,1,0,0,0,24,26,3,2,1,0,25,24,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,
  	28,1,0,0,0,28,30,1,0,0,0,29,27,1,0,0,0,30,31,5,0,0,1,31,1,1,0,0,0,32,
  	33,5,1,0,0,33,34,5,2,0,0,34,35,5,3,0,0,35,36,5,4,0,0,36,37,3,6,3,0,37,
  	3,1,0,0,0,38,51,3,8,4,0,39,51,3,10,5,0,40,51,3,12,6,0,41,51,3,14,7,0,
  	42,51,3,16,8,0,43,44,3,18,9,0,44,45,5,5,0,0,45,51,1,0,0,0,46,47,3,22,
  	11,0,47,48,5,5,0,0,48,51,1,0,0,0,49,51,3,6,3,0,50,38,1,0,0,0,50,39,1,
  	0,0,0,50,40,1,0,0,0,50,41,1,0,0,0,50,42,1,0,0,0,50,43,1,0,0,0,50,46,1,
  	0,0,0,50,49,1,0,0,0,51,5,1,0,0,0,52,56,5,6,0,0,53,55,3,4,2,0,54,53,1,
  	0,0,0,55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,59,1,0,0,0,58,56,1,
  	0,0,0,59,60,5,7,0,0,60,7,1,0,0,0,61,62,5,8,0,0,62,63,5,3,0,0,63,64,3,
  	20,10,0,64,65,5,4,0,0,65,68,3,4,2,0,66,67,5,9,0,0,67,69,3,4,2,0,68,66,
  	1,0,0,0,68,69,1,0,0,0,69,9,1,0,0,0,70,71,5,10,0,0,71,72,5,3,0,0,72,73,
  	3,16,8,0,73,74,3,20,10,0,74,75,5,5,0,0,75,76,3,18,9,0,76,77,5,4,0,0,77,
  	78,3,4,2,0,78,11,1,0,0,0,79,80,5,11,0,0,80,81,5,3,0,0,81,82,3,20,10,0,
  	82,83,5,4,0,0,83,84,3,4,2,0,84,13,1,0,0,0,85,86,5,12,0,0,86,87,3,22,11,
  	0,87,88,5,5,0,0,88,15,1,0,0,0,89,90,5,1,0,0,90,93,5,22,0,0,91,92,5,13,
  	0,0,92,94,3,22,11,0,93,91,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,96,5,
  	5,0,0,96,17,1,0,0,0,97,98,5,22,0,0,98,99,5,13,0,0,99,100,3,22,11,0,100,
  	19,1,0,0,0,101,102,3,22,11,0,102,103,7,0,0,0,103,104,3,22,11,0,104,21,
  	1,0,0,0,105,106,6,11,-1,0,106,109,5,22,0,0,107,109,5,23,0,0,108,105,1,
  	0,0,0,108,107,1,0,0,0,109,115,1,0,0,0,110,111,10,1,0,0,111,112,7,1,0,
  	0,112,114,3,22,11,2,113,110,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,
  	116,1,0,0,0,116,23,1,0,0,0,117,115,1,0,0,0,7,27,50,56,68,93,108,115
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
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == small_c_grammarParser::T__0) {
      setState(24);
      function();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(30);
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
    setState(32);
    match(small_c_grammarParser::T__0);
    setState(33);
    match(small_c_grammarParser::T__1);
    setState(34);
    match(small_c_grammarParser::T__2);
    setState(35);
    match(small_c_grammarParser::T__3);
    setState(36);
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

small_c_grammarParser::AssignmentContext* small_c_grammarParser::StatementContext::assignment() {
  return getRuleContext<small_c_grammarParser::AssignmentContext>(0);
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
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      forStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      whileStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      returnStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(42);
      varDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(43);
      assignment();
      setState(44);
      match(small_c_grammarParser::T__4);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(46);
      expression(0);
      setState(47);
      match(small_c_grammarParser::T__4);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(49);
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
    setState(52);
    match(small_c_grammarParser::T__5);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12590402) != 0)) {
      setState(53);
      statement();
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
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

small_c_grammarParser::ConditionContext* small_c_grammarParser::IfStatementContext::condition() {
  return getRuleContext<small_c_grammarParser::ConditionContext>(0);
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
    setState(61);
    match(small_c_grammarParser::T__7);
    setState(62);
    match(small_c_grammarParser::T__2);
    setState(63);
    condition();
    setState(64);
    match(small_c_grammarParser::T__3);
    setState(65);
    statement();
    setState(68);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(66);
      match(small_c_grammarParser::T__8);
      setState(67);
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

small_c_grammarParser::VarDeclarationContext* small_c_grammarParser::ForStatementContext::varDeclaration() {
  return getRuleContext<small_c_grammarParser::VarDeclarationContext>(0);
}

small_c_grammarParser::ConditionContext* small_c_grammarParser::ForStatementContext::condition() {
  return getRuleContext<small_c_grammarParser::ConditionContext>(0);
}

small_c_grammarParser::AssignmentContext* small_c_grammarParser::ForStatementContext::assignment() {
  return getRuleContext<small_c_grammarParser::AssignmentContext>(0);
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
    setState(70);
    match(small_c_grammarParser::T__9);
    setState(71);
    match(small_c_grammarParser::T__2);
    setState(72);
    varDeclaration();
    setState(73);
    condition();
    setState(74);
    match(small_c_grammarParser::T__4);
    setState(75);
    assignment();
    setState(76);
    match(small_c_grammarParser::T__3);
    setState(77);
    statement();
   
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

small_c_grammarParser::ConditionContext* small_c_grammarParser::WhileStatementContext::condition() {
  return getRuleContext<small_c_grammarParser::ConditionContext>(0);
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
  enterRule(_localctx, 12, small_c_grammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(small_c_grammarParser::T__10);
    setState(80);
    match(small_c_grammarParser::T__2);
    setState(81);
    condition();
    setState(82);
    match(small_c_grammarParser::T__3);
    setState(83);
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
  enterRule(_localctx, 14, small_c_grammarParser::RuleReturnStatement);

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
    match(small_c_grammarParser::T__11);
    setState(86);
    expression(0);
    setState(87);
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
  enterRule(_localctx, 16, small_c_grammarParser::RuleVarDeclaration);
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
    setState(89);
    match(small_c_grammarParser::T__0);
    setState(90);
    match(small_c_grammarParser::ID);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == small_c_grammarParser::T__12) {
      setState(91);
      match(small_c_grammarParser::T__12);
      setState(92);
      expression(0);
    }
    setState(95);
    match(small_c_grammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

small_c_grammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* small_c_grammarParser::AssignmentContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::AssignmentContext::expression() {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(0);
}


size_t small_c_grammarParser::AssignmentContext::getRuleIndex() const {
  return small_c_grammarParser::RuleAssignment;
}

void small_c_grammarParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void small_c_grammarParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any small_c_grammarParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::AssignmentContext* small_c_grammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 18, small_c_grammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(small_c_grammarParser::ID);
    setState(98);
    match(small_c_grammarParser::T__12);
    setState(99);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

small_c_grammarParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<small_c_grammarParser::ExpressionContext *> small_c_grammarParser::ConditionContext::expression() {
  return getRuleContexts<small_c_grammarParser::ExpressionContext>();
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::ConditionContext::expression(size_t i) {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(i);
}


size_t small_c_grammarParser::ConditionContext::getRuleIndex() const {
  return small_c_grammarParser::RuleCondition;
}

void small_c_grammarParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void small_c_grammarParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<small_c_grammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any small_c_grammarParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<small_c_grammarVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

small_c_grammarParser::ConditionContext* small_c_grammarParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 20, small_c_grammarParser::RuleCondition);
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
    setState(101);
    expression(0);
    setState(102);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 245760) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(103);
    expression(0);
   
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

tree::TerminalNode* small_c_grammarParser::ExpressionContext::ID() {
  return getToken(small_c_grammarParser::ID, 0);
}

tree::TerminalNode* small_c_grammarParser::ExpressionContext::INT() {
  return getToken(small_c_grammarParser::INT, 0);
}

std::vector<small_c_grammarParser::ExpressionContext *> small_c_grammarParser::ExpressionContext::expression() {
  return getRuleContexts<small_c_grammarParser::ExpressionContext>();
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<small_c_grammarParser::ExpressionContext>(i);
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
   return expression(0);
}

small_c_grammarParser::ExpressionContext* small_c_grammarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  small_c_grammarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  small_c_grammarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, small_c_grammarParser::RuleExpression, precedence);

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
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case small_c_grammarParser::ID: {
        setState(106);
        match(small_c_grammarParser::ID);
        break;
      }

      case small_c_grammarParser::INT: {
        setState(107);
        match(small_c_grammarParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(115);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(110);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(111);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3932160) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(112);
        expression(2); 
      }
      setState(117);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
    case 11: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool small_c_grammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

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
