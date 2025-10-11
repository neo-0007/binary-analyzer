
/* WARNING: Control flow encountered bad instruction data */
/* ~invalid_argument() */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  ~invalid_argument(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

