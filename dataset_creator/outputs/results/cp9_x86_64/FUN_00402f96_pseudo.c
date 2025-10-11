
void FUN_00402f96(void)

{
  moneypunct<wchar_t,false> *unaff_R12;
  
  std::locale::facet::_M_remove_reference(*(facet **)(unaff_R12 + 0x18));
  std::moneypunct<wchar_t,false>::~moneypunct(unaff_R12);
  operator_delete(unaff_R12);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

