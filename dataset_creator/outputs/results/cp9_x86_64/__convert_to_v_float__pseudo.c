
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<float>(char const*, float&, std::_Ios_Iostate&, __locale_struct* const&)
    */

void std::__convert_to_v<float>
               (char *param_1,float *param_2,_Ios_Iostate *param_3,__locale_struct **param_4)

{
  long in_FS_OFFSET;
  float fVar1;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = strtof32_l(param_1,&local_28,*param_4);
  *param_2 = fVar1;
  if ((local_28 == param_1) || (*local_28 != '\0')) {
    *param_2 = 0.0;
    *(undefined4 *)param_3 = 4;
  }
  else if (fVar1 == DAT_00816b08) {
    *param_2 = 3.4028235e+38;
    *(undefined4 *)param_3 = 4;
  }
  else if (fVar1 == DAT_00816b0c) {
    *param_2 = -3.4028235e+38;
    *(undefined4 *)param_3 = 4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

