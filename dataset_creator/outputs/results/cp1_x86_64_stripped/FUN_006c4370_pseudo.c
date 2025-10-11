
void FUN_006c4370(char *param_1,double *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long in_FS_OFFSET;
  double dVar1;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  dVar1 = (double)FUN_006efac0(param_1,&local_28,*param_4);
  *param_2 = dVar1;
  if ((local_28 == param_1) || (*local_28 != '\0')) {
    *param_2 = 0.0;
    *param_3 = 4;
  }
  else if (dVar1 == DAT_00821c58) {
    *param_2 = DAT_00821c60;
    *param_3 = 4;
  }
  else if (dVar1 == DAT_00821c68) {
    *param_2 = DAT_00821c70;
    *param_3 = 4;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

