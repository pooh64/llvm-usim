#include "USimMCAsmInfo.h"
using namespace llvm;

void USimMCAsmInfo::anchor() {}

USimMCAsmInfo::USimMCAsmInfo(const Triple &TT) {
  SupportsDebugInformation = false;
  Data16bitsDirective = "\t.short\t";
  Data32bitsDirective = "\t.word\t";
  Data64bitsDirective = nullptr;
  ZeroDirective = "\t.space\t";
  CommentString = ";";

  UsesELFSectionDirectiveForBSS = false;
  AllowAtInName = true;
  HiddenVisibilityAttr = MCSA_Invalid;
  HiddenDeclarationVisibilityAttr = MCSA_Invalid;
  ProtectedVisibilityAttr = MCSA_Invalid;

  ExceptionsType = ExceptionHandling::None;
}
