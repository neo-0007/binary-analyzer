
void FUN_00402120(void)

{
  long unaff_RBX;
  
  *(undefined ***)(unaff_RBX + 8) = &PTR__wios_0092a578;
  std::ios_base::~ios_base((ios_base *)(unaff_RBX + 8));
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

