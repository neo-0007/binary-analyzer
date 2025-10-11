
undefined8 FUN_005bb2b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar2 = FUN_005bafe0(param_1,0x86,&PTR_s_DER_009140e0,param_2);
    return uVar2;
  }
  iVar1 = FUN_0040e590();
  if (iVar1 == 0x74) {
    uVar2 = FUN_00410c70(param_1);
    uVar2 = FUN_004d7c10(uVar2,param_2);
    return uVar2;
  }
  if (iVar1 == 0x198) {
    uVar2 = thunk_FUN_00541030(param_1);
    uVar2 = FUN_004eaa90(uVar2,param_2);
    return uVar2;
  }
  if (iVar1 != 6) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/i2d_evp.c",0x92,"i2d_PublicKey");
    FUN_0051f8f0(0xd,0xa7,0);
    return 0xffffffff;
  }
  uVar2 = thunk_FUN_00540f20(param_1);
  uVar2 = FUN_0056a620(uVar2,param_2);
  return uVar2;
}

