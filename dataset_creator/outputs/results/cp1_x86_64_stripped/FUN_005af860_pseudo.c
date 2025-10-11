
long FUN_005af860(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *param_2;
  lVar2 = FUN_005aeb40(0,&local_38);
  if (lVar2 != 0) {
    iVar1 = FUN_0040e580(lVar2);
    if (iVar1 == 0x40b) {
      lVar3 = FUN_00410ba0(lVar2);
      FUN_0040f4f0(lVar2);
      if (lVar3 != 0) {
        *param_2 = local_38;
        if (param_1 != (long *)0x0) {
          FUN_00511590(*param_1);
          *param_1 = lVar3;
        }
        goto LAB_005af8b5;
      }
    }
    else {
      FUN_0040f4f0();
    }
  }
  lVar3 = 0;
LAB_005af8b5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

