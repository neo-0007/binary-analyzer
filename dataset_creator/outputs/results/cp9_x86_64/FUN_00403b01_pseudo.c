
void FUN_00403b01(void)

{
  void *unaff_R12;
  locale *unaff_R14;
  
  free(*(void **)((long)unaff_R12 + 8));
  std::locale::~locale(unaff_R14);
  operator_delete(unaff_R12);
  __gnu_cxx::__scoped_lock::~__scoped_lock((__scoped_lock *)&stack0x00000008);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

