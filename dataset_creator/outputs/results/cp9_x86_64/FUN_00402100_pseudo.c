
void FUN_00402100(void)

{
  long unaff_R13;
  
  *(undefined ***)(unaff_R13 + 0x10) = &PTR__wios_0092a578;
  std::ios_base::~ios_base((ios_base *)(unaff_R13 + 0x10));
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

