
/* WARNING: Control flow encountered bad instruction data */
/* ~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  ~logic_error(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

