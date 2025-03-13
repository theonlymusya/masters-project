
// Generated from small_c_grammar.g4 by ANTLR 4.13.2


#include "small_c_grammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Small_c_grammarLexerStaticData final {
  Small_c_grammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Small_c_grammarLexerStaticData(const Small_c_grammarLexerStaticData&) = delete;
  Small_c_grammarLexerStaticData(Small_c_grammarLexerStaticData&&) = delete;
  Small_c_grammarLexerStaticData& operator=(const Small_c_grammarLexerStaticData&) = delete;
  Small_c_grammarLexerStaticData& operator=(Small_c_grammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag small_c_grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Small_c_grammarLexerStaticData> small_c_grammarlexerLexerStaticData = nullptr;

void small_c_grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (small_c_grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(small_c_grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Small_c_grammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "INT", 
      "DOUBLE", "MAIN", "IF", "ELSE", "FOR", "EXPRESSION_TEXT", "ID", "NUMBER", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,26,143,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,
  	10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,
  	15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,
  	18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,
  	21,1,22,4,22,121,8,22,11,22,12,22,122,1,23,1,23,5,23,127,8,23,10,23,12,
  	23,130,9,23,1,24,4,24,133,8,24,11,24,12,24,134,1,25,4,25,138,8,25,11,
  	25,12,25,139,1,25,1,25,0,0,26,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,
  	19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,1,0,5,3,0,10,10,13,13,59,59,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,13,13,32,
  	32,146,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,
  	11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,
  	0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,
  	0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,
  	43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,1,53,1,
  	0,0,0,3,55,1,0,0,0,5,57,1,0,0,0,7,59,1,0,0,0,9,61,1,0,0,0,11,63,1,0,0,
  	0,13,65,1,0,0,0,15,67,1,0,0,0,17,70,1,0,0,0,19,73,1,0,0,0,21,76,1,0,0,
  	0,23,79,1,0,0,0,25,82,1,0,0,0,27,85,1,0,0,0,29,87,1,0,0,0,31,89,1,0,0,
  	0,33,91,1,0,0,0,35,95,1,0,0,0,37,102,1,0,0,0,39,107,1,0,0,0,41,110,1,
  	0,0,0,43,115,1,0,0,0,45,120,1,0,0,0,47,124,1,0,0,0,49,132,1,0,0,0,51,
  	137,1,0,0,0,53,54,5,40,0,0,54,2,1,0,0,0,55,56,5,41,0,0,56,4,1,0,0,0,57,
  	58,5,59,0,0,58,6,1,0,0,0,59,60,5,123,0,0,60,8,1,0,0,0,61,62,5,125,0,0,
  	62,10,1,0,0,0,63,64,5,60,0,0,64,12,1,0,0,0,65,66,5,62,0,0,66,14,1,0,0,
  	0,67,68,5,60,0,0,68,69,5,61,0,0,69,16,1,0,0,0,70,71,5,62,0,0,71,72,5,
  	61,0,0,72,18,1,0,0,0,73,74,5,45,0,0,74,75,5,61,0,0,75,20,1,0,0,0,76,77,
  	5,43,0,0,77,78,5,61,0,0,78,22,1,0,0,0,79,80,5,43,0,0,80,81,5,43,0,0,81,
  	24,1,0,0,0,82,83,5,45,0,0,83,84,5,45,0,0,84,26,1,0,0,0,85,86,5,61,0,0,
  	86,28,1,0,0,0,87,88,5,91,0,0,88,30,1,0,0,0,89,90,5,93,0,0,90,32,1,0,0,
  	0,91,92,5,105,0,0,92,93,5,110,0,0,93,94,5,116,0,0,94,34,1,0,0,0,95,96,
  	5,100,0,0,96,97,5,111,0,0,97,98,5,117,0,0,98,99,5,98,0,0,99,100,5,108,
  	0,0,100,101,5,101,0,0,101,36,1,0,0,0,102,103,5,109,0,0,103,104,5,97,0,
  	0,104,105,5,105,0,0,105,106,5,110,0,0,106,38,1,0,0,0,107,108,5,105,0,
  	0,108,109,5,102,0,0,109,40,1,0,0,0,110,111,5,101,0,0,111,112,5,108,0,
  	0,112,113,5,115,0,0,113,114,5,101,0,0,114,42,1,0,0,0,115,116,5,102,0,
  	0,116,117,5,111,0,0,117,118,5,114,0,0,118,44,1,0,0,0,119,121,8,0,0,0,
  	120,119,1,0,0,0,121,122,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,46,
  	1,0,0,0,124,128,7,1,0,0,125,127,7,2,0,0,126,125,1,0,0,0,127,130,1,0,0,
  	0,128,126,1,0,0,0,128,129,1,0,0,0,129,48,1,0,0,0,130,128,1,0,0,0,131,
  	133,7,3,0,0,132,131,1,0,0,0,133,134,1,0,0,0,134,132,1,0,0,0,134,135,1,
  	0,0,0,135,50,1,0,0,0,136,138,7,4,0,0,137,136,1,0,0,0,138,139,1,0,0,0,
  	139,137,1,0,0,0,139,140,1,0,0,0,140,141,1,0,0,0,141,142,6,25,0,0,142,
  	52,1,0,0,0,5,0,122,128,134,139,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  small_c_grammarlexerLexerStaticData = std::move(staticData);
}

}

small_c_grammarLexer::small_c_grammarLexer(CharStream *input) : Lexer(input) {
  small_c_grammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *small_c_grammarlexerLexerStaticData->atn, small_c_grammarlexerLexerStaticData->decisionToDFA, small_c_grammarlexerLexerStaticData->sharedContextCache);
}

small_c_grammarLexer::~small_c_grammarLexer() {
  delete _interpreter;
}

std::string small_c_grammarLexer::getGrammarFileName() const {
  return "small_c_grammar.g4";
}

const std::vector<std::string>& small_c_grammarLexer::getRuleNames() const {
  return small_c_grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& small_c_grammarLexer::getChannelNames() const {
  return small_c_grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& small_c_grammarLexer::getModeNames() const {
  return small_c_grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& small_c_grammarLexer::getVocabulary() const {
  return small_c_grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView small_c_grammarLexer::getSerializedATN() const {
  return small_c_grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& small_c_grammarLexer::getATN() const {
  return *small_c_grammarlexerLexerStaticData->atn;
}




void small_c_grammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  small_c_grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(small_c_grammarlexerLexerOnceFlag, small_c_grammarlexerLexerInitialize);
#endif
}
