
ulong FUN_004eaa90(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x483,"i2o_ECPublicKey");
    FUN_0051f8f0(0x10,0xc0102,0);
    return 0;
  }
  uVar1 = FUN_004f4c40(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                       *(undefined4 *)(param_1 + 0x34),0,0,0);
  if ((param_2 != (long *)0x0) && (uVar1 != 0)) {
    if (*param_2 == 0) {
      lVar2 = FUN_0041ad90(uVar1,"../crypto/ec/ec_asn1.c",0x48f);
      *param_2 = lVar2;
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x490,"i2o_ECPublicKey");
        FUN_0051f8f0(0x10,0xc0100,0);
        return 0;
      }
      lVar2 = FUN_004f4c40(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x34),lVar2,uVar1,0);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x497,"i2o_ECPublicKey");
        FUN_0051f8f0(0x10,0x80010,0);
        FUN_0041ad60(*param_2,"../crypto/ec/ec_asn1.c",0x499);
        *param_2 = 0;
        return 0;
      }
    }
    else {
      lVar2 = FUN_004f4c40(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x34),*param_2,uVar1,0);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x497,"i2o_ECPublicKey");
        FUN_0051f8f0(0x10,0x80010,0);
        return 0;
      }
      *param_2 = *param_2 + uVar1;
    }
  }
  return uVar1 & 0xffffffff;
}

