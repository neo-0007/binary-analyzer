
void FUN_004032b5(void)

{
  numpunct<wchar_t> *unaff_R12;
  
  std::locale::facet::_M_remove_reference(*(facet **)(unaff_R12 + 0x18));
  std::__cxx11::numpunct<wchar_t>::~numpunct(unaff_R12);
  operator_delete(unaff_R12);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

