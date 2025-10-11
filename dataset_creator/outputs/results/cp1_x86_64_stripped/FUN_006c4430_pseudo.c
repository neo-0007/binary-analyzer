
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c4430(char *param_1,longdouble *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long in_FS_OFFSET;
  longdouble in_ST0;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_006f25d0(param_1,&local_28,*param_4);
  *param_2 = in_ST0;
  if ((local_28 == param_1) || (*local_28 != '\0')) {
    *param_2 = (longdouble)0;
    *param_3 = 4;
  }
  else if (in_ST0 == (longdouble)DAT_00821c50) {
    *param_2 = _DAT_00821c80;
    *param_3 = 4;
  }
  else if (in_ST0 == (longdouble)DAT_00821c54) {
    *param_2 = _DAT_00821c90;
    *param_3 = 4;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

