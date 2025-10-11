
void FUN_006c42b0(char *param_1,float *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long in_FS_OFFSET;
  float fVar1;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = (float)FUN_006ece30(param_1,&local_28,*param_4);
  *param_2 = fVar1;
  if ((local_28 == param_1) || (*local_28 != '\0')) {
    *param_2 = 0.0;
    *param_3 = 4;
  }
  else if (fVar1 == DAT_00821c50) {
    *param_2 = 3.4028235e+38;
    *param_3 = 4;
  }
  else if (fVar1 == DAT_00821c54) {
    *param_2 = -3.4028235e+38;
    *param_3 = 4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

