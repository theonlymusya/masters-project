
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "T__33", "ID", "NUMBER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'('", "')'", "';'", "'{'", "'}'", "'if'", 
      "'else'", "'for'", "'<'", "'>'", "'<='", "'>='", "'-='", "'+='", "'='", 
      "'double'", "'['", "']'", "'++'", "'--'", "'||'", "'&&'", "'=='", 
      "'!='", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "','", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "ID", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,37,197,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,
  	1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,19,
  	1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,
  	1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,33,1,34,1,34,5,34,173,8,34,10,34,
  	12,34,176,9,34,1,35,4,35,179,8,35,11,35,12,35,180,1,35,1,35,4,35,185,
  	8,35,11,35,12,35,186,3,35,189,8,35,1,36,4,36,192,8,36,11,36,12,36,193,
  	1,36,1,36,0,0,37,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,
  	69,35,71,36,73,37,1,0,4,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,
  	97,122,1,0,48,57,3,0,9,10,13,13,32,32,201,0,1,1,0,0,0,0,3,1,0,0,0,0,5,
  	1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,
  	0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,
  	27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,
  	0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,
  	0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,
  	59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,
  	0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,1,75,1,0,0,0,3,79,1,0,0,0,5,84,1,0,0,
  	0,7,86,1,0,0,0,9,88,1,0,0,0,11,90,1,0,0,0,13,92,1,0,0,0,15,94,1,0,0,0,
  	17,97,1,0,0,0,19,102,1,0,0,0,21,106,1,0,0,0,23,108,1,0,0,0,25,110,1,0,
  	0,0,27,113,1,0,0,0,29,116,1,0,0,0,31,119,1,0,0,0,33,122,1,0,0,0,35,124,
  	1,0,0,0,37,131,1,0,0,0,39,133,1,0,0,0,41,135,1,0,0,0,43,138,1,0,0,0,45,
  	141,1,0,0,0,47,144,1,0,0,0,49,147,1,0,0,0,51,150,1,0,0,0,53,153,1,0,0,
  	0,55,155,1,0,0,0,57,157,1,0,0,0,59,159,1,0,0,0,61,161,1,0,0,0,63,163,
  	1,0,0,0,65,165,1,0,0,0,67,167,1,0,0,0,69,170,1,0,0,0,71,178,1,0,0,0,73,
  	191,1,0,0,0,75,76,5,105,0,0,76,77,5,110,0,0,77,78,5,116,0,0,78,2,1,0,
  	0,0,79,80,5,109,0,0,80,81,5,97,0,0,81,82,5,105,0,0,82,83,5,110,0,0,83,
  	4,1,0,0,0,84,85,5,40,0,0,85,6,1,0,0,0,86,87,5,41,0,0,87,8,1,0,0,0,88,
  	89,5,59,0,0,89,10,1,0,0,0,90,91,5,123,0,0,91,12,1,0,0,0,92,93,5,125,0,
  	0,93,14,1,0,0,0,94,95,5,105,0,0,95,96,5,102,0,0,96,16,1,0,0,0,97,98,5,
  	101,0,0,98,99,5,108,0,0,99,100,5,115,0,0,100,101,5,101,0,0,101,18,1,0,
  	0,0,102,103,5,102,0,0,103,104,5,111,0,0,104,105,5,114,0,0,105,20,1,0,
  	0,0,106,107,5,60,0,0,107,22,1,0,0,0,108,109,5,62,0,0,109,24,1,0,0,0,110,
  	111,5,60,0,0,111,112,5,61,0,0,112,26,1,0,0,0,113,114,5,62,0,0,114,115,
  	5,61,0,0,115,28,1,0,0,0,116,117,5,45,0,0,117,118,5,61,0,0,118,30,1,0,
  	0,0,119,120,5,43,0,0,120,121,5,61,0,0,121,32,1,0,0,0,122,123,5,61,0,0,
  	123,34,1,0,0,0,124,125,5,100,0,0,125,126,5,111,0,0,126,127,5,117,0,0,
  	127,128,5,98,0,0,128,129,5,108,0,0,129,130,5,101,0,0,130,36,1,0,0,0,131,
  	132,5,91,0,0,132,38,1,0,0,0,133,134,5,93,0,0,134,40,1,0,0,0,135,136,5,
  	43,0,0,136,137,5,43,0,0,137,42,1,0,0,0,138,139,5,45,0,0,139,140,5,45,
  	0,0,140,44,1,0,0,0,141,142,5,124,0,0,142,143,5,124,0,0,143,46,1,0,0,0,
  	144,145,5,38,0,0,145,146,5,38,0,0,146,48,1,0,0,0,147,148,5,61,0,0,148,
  	149,5,61,0,0,149,50,1,0,0,0,150,151,5,33,0,0,151,152,5,61,0,0,152,52,
  	1,0,0,0,153,154,5,43,0,0,154,54,1,0,0,0,155,156,5,45,0,0,156,56,1,0,0,
  	0,157,158,5,42,0,0,158,58,1,0,0,0,159,160,5,47,0,0,160,60,1,0,0,0,161,
  	162,5,37,0,0,162,62,1,0,0,0,163,164,5,33,0,0,164,64,1,0,0,0,165,166,5,
  	44,0,0,166,66,1,0,0,0,167,168,5,58,0,0,168,169,5,58,0,0,169,68,1,0,0,
  	0,170,174,7,0,0,0,171,173,7,1,0,0,172,171,1,0,0,0,173,176,1,0,0,0,174,
  	172,1,0,0,0,174,175,1,0,0,0,175,70,1,0,0,0,176,174,1,0,0,0,177,179,7,
  	2,0,0,178,177,1,0,0,0,179,180,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,
  	181,188,1,0,0,0,182,184,5,46,0,0,183,185,7,2,0,0,184,183,1,0,0,0,185,
  	186,1,0,0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,182,1,
  	0,0,0,188,189,1,0,0,0,189,72,1,0,0,0,190,192,7,3,0,0,191,190,1,0,0,0,
  	192,193,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,195,1,0,0,0,195,196,
  	6,36,0,0,196,74,1,0,0,0,6,0,174,180,186,188,193,1,6,0,0
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
