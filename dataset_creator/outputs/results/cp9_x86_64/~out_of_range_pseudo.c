
/* WARNING: Control flow encountered bad instruction data */
/* ~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  ~out_of_range(this);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

