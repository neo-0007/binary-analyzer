
undefined4 FUN_004e6ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_118 [160];
  byte local_78 [31];
  byte local_59;
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004069d0(param_1,"SHA512",param_4);
  if (lVar2 != 0) {
    iVar1 = FUN_00407440(param_3,0x20,local_78,0,lVar2,0);
    FUN_00406a50(lVar2);
    if (iVar1 == 0) {
      FUN_004227b0(local_78,0x40);
      uVar3 = 0;
    }
    else {
      local_78[0] = local_78[0] & 0xf8;
      uVar3 = 1;
      local_59 = local_59 & 0x3f | 0x40;
      FUN_004e3c50(auStack_118,local_78);
      FUN_004e1200(param_2,auStack_118);
      FUN_004227b0(local_78,0x40);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

