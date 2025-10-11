
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<double>(char const*, double&, std::_Ios_Iostate&, __locale_struct*
   const&) */

void std::__convert_to_v<double>
               (char *param_1,double *param_2,_Ios_Iostate *param_3,__locale_struct **param_4)

{
  long in_FS_OFFSET;
  double dVar1;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = strtod_l(param_1,&local_28,*param_4);
  *param_2 = dVar1;
  if ((local_28 == param_1) || (*local_28 != '\0')) {
    *param_2 = 0.0;
    *(undefined4 *)param_3 = 4;
  }
  else if (dVar1 == DAT_00816b10) {
    *param_2 = DAT_00816b18;
    *(undefined4 *)param_3 = 4;
  }
  else if (dVar1 == DAT_00816b20) {
    *param_2 = DAT_00816b28;
    *(undefined4 *)param_3 = 4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

