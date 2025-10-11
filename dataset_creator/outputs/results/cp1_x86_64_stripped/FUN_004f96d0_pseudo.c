
undefined8 FUN_004f96d0(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint7 local_48;
  undefined1 uStack_41;
  undefined6 uStack_40;
  undefined1 local_3a;
  undefined5 uStack_39;
  undefined2 uStack_34;
  undefined6 uStack_32;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004b7d60(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = FUN_004b87e0(param_2,&local_48,0x1c);
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecp_nistp224.c",0x156,"BN_to_felem");
      FUN_0051f8f0(0x10,0x90,0);
    }
    else {
      uVar2 = 1;
      *param_1 = (ulong)local_48;
      param_1[2] = CONCAT26(uStack_34,CONCAT51(uStack_39,local_3a)) & 0xffffffffffffff;
      param_1[1] = (ulong)CONCAT61(uStack_40,uStack_41);
      param_1[3] = CONCAT62(uStack_32,uStack_34) >> 8;
    }
  }
  else {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/ec/ecp_nistp224.c",0x151,"BN_to_felem");
    FUN_0051f8f0(0x10,0x90,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

