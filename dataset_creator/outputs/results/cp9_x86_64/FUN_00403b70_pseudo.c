
void FUN_00403b70(void)

{
  locale *unaff_R13;
  
  std::locale::~locale(unaff_R13);
  __gnu_cxx::__scoped_lock::~__scoped_lock((__scoped_lock *)&stack0x00000008);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}

