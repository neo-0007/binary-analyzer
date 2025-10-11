
ulong FUN_004eeac0(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = FUN_004ef7f0(*(undefined8 *)(param_1 + 0x18));
  iVar2 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1 + 7;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = (ulong)(iVar2 >> 3);
    if (param_2 == 0) {
      return uVar3;
    }
    if (uVar3 <= param_3) {
      iVar2 = FUN_004b87b0(*(long *)(param_1 + 0x28),param_2);
      if (iVar2 != -1) {
        return uVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_key.c",0x396,"ossl_ec_key_simple_priv2oct");
      FUN_0051f8f0(0x10,100,0);
      return 0;
    }
  }
  return 0;
}

