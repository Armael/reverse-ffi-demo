#include <caml/memory.h>
#include <caml/mlvalues.h>
#include <caml/alloc.h>
#include <caml/callback.h>

void init() {
  char* argv[1];
  argv[0] = NULL;
  caml_startup(argv);
}

void hello(const char* name) {
  CAMLparam0();
  CAMLlocal1(name_ml);
  name_ml = caml_copy_string(name);
  caml_callback(*caml_named_value("hello"), name_ml);
  CAMLreturn0;
}
