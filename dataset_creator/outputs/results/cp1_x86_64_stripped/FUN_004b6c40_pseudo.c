
/* WARNING: Removing unreachable block (ram,0x004b6cb0) */

undefined8 FUN_004b6c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) && (lVar3 = FUN_004b2a70(0), lVar3 == 0)) {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/bn/bn_gcd.c",0x20b,"BN_mod_inverse");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    uVar2 = FUN_004b6260(param_1);
    FUN_004b2b50(lVar3);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

