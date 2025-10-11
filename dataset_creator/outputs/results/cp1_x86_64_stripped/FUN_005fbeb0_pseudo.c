
undefined8 FUN_005fbeb0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0041aec0(0x1150,"../crypto/evp/bio_enc.c",0x44);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/bio_enc.c",0x45,"enc_new");
    FUN_0051f8f0(6,0xc0100,0);
    return 0;
  }
  lVar2 = FUN_00535890();
  *(long *)(lVar1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar1 + 8) = 1;
    *(long *)(lVar1 + 0x20) = lVar1 + 0x150;
    *(long *)(lVar1 + 0x28) = lVar1 + 0x150;
    *(undefined4 *)(lVar1 + 0x10) = 1;
    FUN_004ab630(param_1,lVar1);
    FUN_004ab650(param_1,1);
    return 1;
  }
  FUN_0041ad60(lVar1,"../crypto/evp/bio_enc.c",0x4b);
  return 0;
}

