
undefined8 FUN_00569b10(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = FUN_00415850();
  iVar1 = FUN_004148f0(param_1,&local_30);
  if (((0 < iVar1) && (iVar1 = FUN_0042cc10(param_1,&local_28), 0 < iVar1)) &&
     (iVar1 = FUN_0042cef0(param_1,&local_34), iVar1 != 0)) {
    if (local_34 == -1) {
      local_34 = FUN_0040ac10(local_30);
    }
    else if (local_34 + 3U < 2) {
      iVar1 = FUN_0040fb50(uVar4);
      iVar2 = FUN_0040ac10(local_30);
      local_34 = (iVar1 - iVar2) + -2;
      uVar3 = FUN_0040ddf0(uVar4);
      if ((uVar3 & 7) == 1) {
        local_34 = local_34 + -1;
      }
      if (local_34 < 0) goto LAB_00569bf8;
    }
    lVar5 = FUN_00569860(local_30,local_28,local_34);
    if (lVar5 != 0) {
      uVar4 = FUN_0056a410();
      uVar4 = FUN_004a2560(lVar5,uVar4,0);
      FUN_0056a4a0(lVar5);
      goto LAB_00569bfb;
    }
  }
LAB_00569bf8:
  uVar4 = 0;
LAB_00569bfb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

