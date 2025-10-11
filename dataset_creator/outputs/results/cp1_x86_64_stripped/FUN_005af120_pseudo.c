
long FUN_005af120(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  lVar1 = FUN_005aeb40(0,&local_38);
  if (lVar1 != 0) {
    lVar2 = FUN_00410a90(lVar1);
    FUN_0040f4f0(lVar1);
    if (lVar2 != 0) {
      *param_2 = local_38;
      if (param_1 != (long *)0x0) {
        FUN_004d8960(*param_1);
        *param_1 = lVar2;
      }
      goto LAB_005af18c;
    }
  }
  lVar2 = 0;
LAB_005af18c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

