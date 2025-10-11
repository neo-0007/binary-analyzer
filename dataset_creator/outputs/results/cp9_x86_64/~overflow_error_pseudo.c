
/* WARNING: Control flow encountered bad instruction data */
/* ~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  ~overflow_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

