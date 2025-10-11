
long FUN_0055cad0(int param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == -1) {
    if (param_2 == 0) {
      FUN_0051f420();
      uVar4 = 0x1b;
LAB_0055cc21:
      FUN_0051f540("../crypto/pkcs12/p12_p8e.c",uVar4,"PKCS8_encrypt_ex");
      FUN_0051f8f0(0x23,0xc0102,0);
      return 0;
    }
    param_1 = -1;
  }
  else {
    FUN_0051f000();
    iVar1 = FUN_00539690(1,param_1,0,0,0);
    if (iVar1 == 0) {
      FUN_0051f050();
      lVar2 = FUN_005bb7c0(param_1,param_7,param_5,param_6,param_9);
      goto LAB_0055cb26;
    }
    FUN_0051f1a0();
    if (param_2 == 0) {
      FUN_0051f420();
      uVar4 = 0x25;
      goto LAB_0055cc21;
    }
  }
  lVar2 = FUN_005bbc10(param_2,param_7,param_5,param_6,0,param_1,param_9);
LAB_0055cb26:
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs12/p12_p8e.c",0x30,"PKCS8_encrypt_ex");
    FUN_0051f8f0(0x23,0x8000d,0);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_0055c9c0(param_3,param_4,param_8,lVar2,param_9,param_10);
    if (lVar3 == 0) {
      FUN_004a87e0(lVar2);
    }
  }
  return lVar3;
}

