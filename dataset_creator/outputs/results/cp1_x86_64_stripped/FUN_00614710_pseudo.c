
undefined8
FUN_00614710(undefined4 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = param_2 & 0xfffffffe | 2;
  iVar1 = FUN_006145c0();
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_0041ad90(0x28,"../crypto/x509/x509_trust.c",0x8a);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0051f420();
      uVar4 = 0x8b;
      goto LAB_006148d1;
    }
    puVar2[1] = 1;
    lVar5 = FUN_0041c2c0(param_4,"../crypto/x509/x509_trust.c",0x96);
    *(long *)(puVar2 + 4) = lVar5;
    lVar3 = DAT_00942858;
    if (lVar5 == 0) {
      FUN_0051f420();
      uVar4 = 0x97;
    }
    else {
      *puVar2 = param_1;
      *(undefined8 *)(puVar2 + 2) = param_3;
      puVar2[6] = param_5;
      puVar2[1] = puVar2[1] & 1 | uVar6;
      *(undefined8 *)(puVar2 + 8) = param_6;
      if (lVar3 == 0) {
        lVar3 = FUN_00436420(FUN_006142f0);
        DAT_00942858 = lVar3;
        if (lVar3 == 0) {
          FUN_0051f420(0);
          uVar4 = 0xa8;
          goto LAB_00614874;
        }
      }
      iVar1 = FUN_00435f80(lVar3,puVar2);
      if (iVar1 != 0) goto LAB_006147b8;
      FUN_0051f420();
      uVar4 = 0xac;
    }
LAB_00614874:
    FUN_0051f540("../crypto/x509/x509_trust.c",uVar4,"X509_TRUST_add");
    FUN_0051f8f0(0xb,0xc0100,0);
    FUN_0041ad60(*(undefined8 *)(puVar2 + 4),"../crypto/x509/x509_trust.c",0xb3);
    FUN_0041ad60(puVar2,"../crypto/x509/x509_trust.c",0xb4);
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00614580(iVar1);
    if ((*(byte *)(puVar2 + 1) & 2) != 0) {
      FUN_0041ad60(*(undefined8 *)(puVar2 + 4),"../crypto/x509/x509_trust.c",0x94);
    }
    lVar3 = FUN_0041c2c0(param_4,"../crypto/x509/x509_trust.c",0x96);
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar4 = 0x97;
LAB_006148d1:
      FUN_0051f540("../crypto/x509/x509_trust.c",uVar4,"X509_TRUST_add");
      FUN_0051f8f0(0xb,0xc0100,0);
      return 0;
    }
    *puVar2 = param_1;
    *(undefined8 *)(puVar2 + 2) = param_3;
    puVar2[6] = param_5;
    puVar2[1] = puVar2[1] & 1 | uVar6;
    *(undefined8 *)(puVar2 + 8) = param_6;
LAB_006147b8:
    uVar4 = 1;
  }
  return uVar4;
}

