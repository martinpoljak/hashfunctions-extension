// Include the Ruby headers and goodies
#include "ruby.h"
#include "AP_GeneralHashFunctions.h"

// Defining a space for information and references about the module to be stored internally
VALUE GeneralHashFunctionsC = Qnil;

// Prototype for the initialization method - Ruby calls this, not you
void Init_generalhashfunctionsc();

// Prototype for our methods
VALUE method_rshash(VALUE self, VALUE str);
VALUE method_jshash(VALUE self, VALUE str);
VALUE method_pjwhash(VALUE self, VALUE str);
VALUE method_elfhash(VALUE self, VALUE str);
VALUE method_bkdrhash(VALUE self, VALUE str);
VALUE method_sdbmhash(VALUE self, VALUE str);
VALUE method_djbhash(VALUE self, VALUE str);
VALUE method_dekhash(VALUE self, VALUE str);
VALUE method_bphash(VALUE self, VALUE str);
VALUE method_fnvhash(VALUE self, VALUE str);
VALUE method_aphash(VALUE self, VALUE str);

// The initialization method for this module
void Init_generalhashfunctionsc() {
	GeneralHashFunctionsC = rb_define_module("GeneralHashFunctionsC");
	rb_define_singleton_method(GeneralHashFunctionsC, "rshash", method_rshash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "jshash", method_jshash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "pjwhash", method_pjwhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "elfhash", method_elfhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "bkdrhash", method_bkdrhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "sdbmhash", method_sdbmhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "djbhash", method_djbhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "dekhash", method_dekhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "bphash", method_bphash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "fnvhash", method_fnvhash, 1);
  rb_define_singleton_method(GeneralHashFunctionsC, "aphash", method_aphash, 1);
}

VALUE method_rshash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(RSHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_jshash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(JSHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_pjwhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(PJWHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_elfhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(ELFHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_bkdrhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(BKDRHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_sdbmhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(SDBMHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_djbhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(DJBHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_dekhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(DEKHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_bphash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(BPHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_fnvhash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(FNVHash(StringValuePtr(str), RSTRING_LEN(str)));
}

VALUE method_aphash(VALUE self, VALUE str) {
    StringValue(str);
    return UINT2NUM(APHash(StringValuePtr(str), RSTRING_LEN(str)));
}
