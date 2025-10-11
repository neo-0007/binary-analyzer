
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<long double>(char const*, long double&, std::_Ios_Iostate&,
   __locale_struct* const&) */

void std::__convert_to_v<long_double>
               (char *param_1,longdouble *param_2,_Ios_Iostate *param_3,__locale_struct **param_4)

{
  long in_FS_OFFSET;
  longdouble in_ST0;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  strtold_l(param_1,&local_28,*param_4);
  *param_2 = in_ST0;
  if ((local_28 == param_1) || (*local_28 != '\0')) {
    *param_2 = (longdouble)0;
    *(undefined4 *)param_3 = 4;
  }
  else if (in_ST0 == (longdouble)DAT_00816b08) {
    *param_2 = _DAT_00816b30;
    *(undefined4 *)param_3 = 4;
  }
  else if (in_ST0 == (longdouble)DAT_00816b0c) {
    *param_2 = _DAT_00816b40;
    *(undefined4 *)param_3 = 4;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

