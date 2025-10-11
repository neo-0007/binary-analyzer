
/* WARNING: Control flow encountered bad instruction data */
/* ~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
  ~length_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

