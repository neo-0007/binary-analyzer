
void FUN_004020de(void)

{
  long unaff_R12;
  
  *(undefined ***)(unaff_R12 + 8) = &PTR__wios_0092a578;
  std::ios_base::~ios_base((ios_base *)(unaff_R12 + 8));
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

