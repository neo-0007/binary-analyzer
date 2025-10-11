
void FUN_00443130(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  
  lVar1 = param_1 + 0x1f8;
  pbVar2 = local_88;
  pbVar3 = local_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 < 0x41) {
    FUN_00771fb0(local_88,param_2,param_3,0x40);
  }
  else {
    FUN_00434ae0(lVar1);
    FUN_00441860(lVar1,param_2,param_3);
    FUN_00434d50(local_88,lVar1);
  }
  do {
    *pbVar2 = *pbVar2 ^ 0x36;
    pbVar2 = pbVar2 + 1;
  } while (pbVar2 != local_48);
  FUN_00434ae0(lVar1);
  FUN_00441860(lVar1,local_88,0x40);
  do {
    *pbVar3 = *pbVar3 ^ 0x6a;
    pbVar3 = pbVar3 + 1;
  } while (pbVar3 != local_48);
  FUN_00434ae0(param_1 + 0x268);
  FUN_00441860(param_1 + 0x268,local_88,0x40);
  FUN_004227b0(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

