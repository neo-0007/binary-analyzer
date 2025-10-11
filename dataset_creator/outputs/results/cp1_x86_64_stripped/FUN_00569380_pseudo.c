
undefined4 FUN_00569380(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = FUN_00547ef0();
  if (lVar4 == 0) goto LAB_005693fd;
  lVar5 = FUN_0042c500(param_1);
  if (((lVar5 == 0) || (lVar5 = FUN_0042c510(param_1), lVar5 == 0)) ||
     (iVar1 = FUN_0042a6f0(param_1,lVar4,0,1), iVar1 == 0)) {
LAB_005693e7:
    uVar2 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0042c520(param_1);
    uVar6 = 3 - (lVar5 == 0);
    if (*(long *)(param_1 + 0x80) != 0) {
      local_68 = 0;
      local_60 = 0;
      iVar1 = FUN_0042b1b0(*(long *)(param_1 + 0x80),&local_68,&local_60,&local_70,local_6c);
      if (iVar1 != 0) {
        uVar2 = FUN_0040aaf0(local_68);
        uVar3 = FUN_0040aaf0(local_60);
        iVar1 = FUN_004331f0(local_58);
        if (((iVar1 != 0) && (iVar1 = FUN_004332a0(local_58,uVar2), iVar1 != 0)) &&
           ((iVar1 = FUN_004332e0(local_58,uVar3), iVar1 != 0 &&
            (iVar1 = FUN_00433300(local_58,local_70), iVar1 != 0)))) {
          uVar6 = uVar6 | 0x80;
          iVar1 = FUN_0042a8e0(local_58,lVar4,0);
          if (iVar1 != 0) goto LAB_00569508;
        }
      }
      goto LAB_005693e7;
    }
LAB_00569508:
    lVar5 = FUN_00548720(lVar4);
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*param_3)(param_2,uVar6,lVar5);
    }
  }
  FUN_0041ec30(lVar5);
  FUN_00547f60(lVar4);
LAB_005693fd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

