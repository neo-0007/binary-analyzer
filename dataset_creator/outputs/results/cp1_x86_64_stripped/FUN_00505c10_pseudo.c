
undefined8 FUN_00505c10(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined6 uStack_60;
  undefined1 local_5a;
  undefined6 uStack_59;
  undefined1 uStack_53;
  undefined7 uStack_52;
  undefined7 local_4b;
  undefined1 uStack_44;
  undefined6 uStack_43;
  undefined1 local_3d;
  undefined6 uStack_3c;
  undefined1 uStack_36;
  undefined7 uStack_35;
  ulong local_2e;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004b7d60(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = FUN_004b87e0(param_2,&local_68,0x42);
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecp_nistp521.c",0xba,"BN_to_felem");
      FUN_0051f8f0(0x10,0x90,0);
    }
    else {
      uVar2 = 1;
      *param_1 = CONCAT17(uStack_61,local_68) & 0x3ffffffffffffff;
      param_1[1] = CONCAT17(local_5a,CONCAT61(uStack_60,uStack_61)) >> 2 & 0x3ffffffffffffff;
      param_1[2] = CONCAT17(uStack_53,CONCAT61(uStack_59,local_5a)) >> 4 & 0x3ffffffffffffff;
      param_1[3] = CONCAT71(uStack_52,uStack_53) >> 6;
      param_1[4] = CONCAT17(uStack_44,local_4b) & 0x3ffffffffffffff;
      param_1[5] = CONCAT17(local_3d,CONCAT61(uStack_43,uStack_44)) >> 2 & 0x3ffffffffffffff;
      param_1[6] = CONCAT17(uStack_36,CONCAT61(uStack_3c,local_3d)) >> 4 & 0x3ffffffffffffff;
      param_1[7] = CONCAT71(uStack_35,uStack_36) >> 6;
      param_1[8] = local_2e & 0x1ffffffffffffff;
    }
  }
  else {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/ec/ecp_nistp521.c",0xb5,"BN_to_felem");
    FUN_0051f8f0(0x10,0x90,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

