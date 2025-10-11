
void FUN_00402f5c(void)

{
  numpunct<char> *unaff_R12;
  
  std::locale::facet::_M_remove_reference(*(facet **)(unaff_R12 + 0x18));
  std::numpunct<char>::~numpunct(unaff_R12);
  operator_delete(unaff_R12);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

