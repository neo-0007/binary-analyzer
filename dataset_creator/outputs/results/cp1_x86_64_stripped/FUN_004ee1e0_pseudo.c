
bool FUN_004ee1e0(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x242,"ossl_ec_key_simple_check_key");
    FUN_0051f8f0(0x10,0xc0102,0);
    return false;
  }
  lVar2 = FUN_004b2a70(*(undefined8 *)(param_1 + 0x58));
  if (lVar2 == 0) {
    return false;
  }
  iVar1 = FUN_004ede60(param_1,lVar2);
  if (iVar1 != 0) {
    bVar3 = true;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_004ee24b;
    iVar1 = FUN_004edfc0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_004ee080(param_1,lVar2);
      bVar3 = iVar1 != 0;
      goto LAB_004ee24b;
    }
  }
  bVar3 = false;
LAB_004ee24b:
  FUN_004b2b50(lVar2);
  return bVar3;
}

