
ulong FUN_005bb1e0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar2 = FUN_005bafe0(param_1,0x87,&PTR_s_DER_00914120,param_2);
    return uVar2;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    if (*(code **)(lVar3 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005bb20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar3 + 0xc0))();
      return uVar2;
    }
    if (*(long *)(lVar3 + 0x48) != 0) {
      lVar3 = FUN_005fe170();
      if (lVar3 == 0) {
        return 0;
      }
      uVar1 = FUN_004a2be0(lVar3,param_2);
      FUN_004a2c30(lVar3);
      return (ulong)uVar1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/i2d_evp.c",0x77,"i2d_PrivateKey");
  FUN_0051f8f0(0xd,0xa7,0);
  return 0xffffffff;
}

