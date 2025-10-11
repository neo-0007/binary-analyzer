
long FUN_004ea020(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  piVar1 = (int *)FUN_004e8500(0,&local_38);
  if (piVar1 == (int *)0x0) {
    lVar2 = 0;
    FUN_004e8580(0);
  }
  else {
    lVar2 = FUN_004e9eb0(piVar1);
    if (lVar2 == 0) {
      FUN_004e8580(piVar1);
    }
    else {
      if (*piVar1 == 1) {
        *(undefined4 *)(lVar2 + 0x28) = 1;
      }
      if (param_1 != (long *)0x0) {
        FUN_004efd00(*param_1);
        *param_1 = lVar2;
      }
      FUN_004e8580(piVar1);
      *param_2 = local_38;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

