
undefined8 FUN_0051c930(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_3;
  iVar1 = FUN_00422340(&DAT_00941004,FUN_0051a300);
  if ((iVar1 == 0) || (DAT_00941000 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/tb_asnmth.c",199,"ENGINE_pkey_asn1_find_str");
    FUN_0051f8f0(0x26,0xc0100,0);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_004222c0(DAT_00941008);
    uVar2 = 0;
    if (iVar1 != 0) {
      FUN_005fb760(DAT_00941080,FUN_0051c430,&local_48);
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 0x9c) = *(int *)(local_48 + 0x9c) + 1;
        UNLOCK();
      }
      *param_1 = local_48;
      FUN_004222e0(DAT_00941008);
      uVar2 = local_40;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

