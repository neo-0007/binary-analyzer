
void FUN_00402f7e(void)

{
  facet *unaff_R12;
  
  std::locale::facet::~facet(unaff_R12);
  operator_delete(unaff_R12);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

