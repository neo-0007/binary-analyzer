
void FUN_004020be(void)

{
  long unaff_R14;
  
  *(undefined ***)(unaff_R14 + 8) = &PTR__ios_0092a558;
  std::ios_base::~ios_base((ios_base *)(unaff_R14 + 8));
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

