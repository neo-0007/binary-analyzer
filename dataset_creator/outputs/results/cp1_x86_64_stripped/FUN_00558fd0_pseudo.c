
undefined4 FUN_00558fd0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = FUN_00518970(param_2,0x84,&DAT_0080656e,"type-specific",0);
  iVar2 = FUN_00516aa0(uVar4);
  if (iVar2 == 0) {
    uVar3 = 0;
    FUN_00518590(uVar4);
    lVar1 = *(long *)(param_2 + 8);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
      FUN_004aeb30(auStack_88,0x50,"%s PARAMETERS",*(undefined8 *)(lVar1 + 0x10));
      uVar3 = FUN_00555e60(*(undefined8 *)(*(long *)(param_2 + 8) + 0x78),auStack_88,param_1,param_2
                           ,0,0,0,0,0);
    }
  }
  else {
    uVar3 = FUN_00517230(uVar4,param_1);
    FUN_00518590(uVar4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

