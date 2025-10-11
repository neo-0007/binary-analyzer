
undefined8
FUN_00602df0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004cca80(param_5,param_4);
  if (lVar2 == 0) {
    if (param_1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = FUN_004208c0(param_2,param_3,param_4);
        return uVar6;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = FUN_004208b0(param_1,param_3,param_4);
      return uVar6;
    }
  }
  else {
    lVar3 = 0;
    if (param_3 != 0) {
      FUN_0041c470(local_248,param_3,0x200);
      FUN_0041c4d0(local_248,&DAT_007dd6bb,0x200);
      lVar3 = thunk_FUN_007129d0(local_248);
    }
    iVar7 = 0;
    iVar1 = FUN_00436480(lVar2);
    if (0 < iVar1) {
      do {
        lVar4 = FUN_004364a0(lVar2,iVar7);
        lVar5 = thunk_FUN_007129d0(*(undefined8 *)(lVar4 + 8));
        if (0x1ff < (ulong)(lVar5 + lVar3)) {
LAB_00602f20:
          uVar6 = 0;
          goto LAB_00602ef4;
        }
        local_248[lVar3] = 0;
        FUN_0041c4d0(local_248,*(undefined8 *)(lVar4 + 8),0x200);
        iVar1 = FUN_00602df0(param_1,param_2,local_248,*(undefined8 *)(lVar4 + 0x10),param_5);
        if (iVar1 == 0) goto LAB_00602f20;
        iVar7 = iVar7 + 1;
        iVar1 = FUN_00436480(lVar2);
      } while (iVar7 < iVar1);
    }
    uVar6 = 1;
LAB_00602ef4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

