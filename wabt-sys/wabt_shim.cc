#include "wabt/include/wabt/wast-lexer.h"
#include "wabt/include/wabt/wast-parser.h"
#include "wabt/include/wabt/resolve-names.h"

extern "C" {

wabt::Result::Enum wabt_resolve_names_script(
    wabt::Script* script,
    wabt::Errors* errors) {
  return ResolveNamesScript(script, errors);
}

wabt::Result::Enum wabt_resolve_names_module(
    wabt::Module* module,
    wabt::Errors* errors) {
  return ResolveNamesModule(module, errors);
}

}
