
undefined8 FUN_006195a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_006194d0(param_3,auStack_38,6);
  if ((iVar1 == 0) || (6 < iVar1)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_gf2m.c",399,"BN_GF2m_mod");
    FUN_0051f8f0(3,0x6a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00618590(param_1,param_2,auStack_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

