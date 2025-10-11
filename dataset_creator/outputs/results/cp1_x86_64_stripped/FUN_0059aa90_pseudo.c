
undefined8
FUN_0059aa90(undefined4 param_1,undefined4 param_2,uint param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_0059a9b0();
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_0041ad90(0x30,"../crypto/x509/v3_purp.c",0xa8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0051f420();
      uVar3 = 0xa9;
      goto LAB_0059ab91;
    }
    puVar2[2] = 1;
    uVar3 = FUN_0041c2c0(param_5,"../crypto/x509/v3_purp.c",0xb6);
    *(undefined8 *)(puVar2 + 6) = uVar3;
    lVar4 = FUN_0041c2c0(param_6,"../crypto/x509/v3_purp.c",0xb7);
    *(long *)(puVar2 + 8) = lVar4;
    if ((*(long *)(puVar2 + 6) == 0) || (lVar4 == 0)) {
      FUN_0051f420();
      uVar3 = 0xb9;
    }
    else {
      *puVar2 = param_1;
      lVar4 = DAT_00942780;
      puVar2[1] = param_2;
      puVar2[2] = param_3 & 0xfffffffe | puVar2[2] & 1 | 2;
      *(undefined8 *)(puVar2 + 4) = param_4;
      *(undefined8 *)(puVar2 + 10) = param_7;
      if (lVar4 == 0) {
        lVar4 = FUN_00436420(FUN_0059a270);
        DAT_00942780 = lVar4;
        if (lVar4 == 0) {
          FUN_0051f420(0);
          uVar3 = 0xca;
          goto LAB_0059ac85;
        }
      }
      iVar1 = FUN_00435f80(lVar4,puVar2);
      if (iVar1 != 0) goto LAB_0059ab3f;
      FUN_0051f420();
      uVar3 = 0xce;
    }
LAB_0059ac85:
    FUN_0051f540("../crypto/x509/v3_purp.c",uVar3,"X509_PURPOSE_add");
    FUN_0051f8f0(0x22,0xc0100,0);
    FUN_0041ad60(*(undefined8 *)(puVar2 + 6),"../crypto/x509/v3_purp.c",0xd5);
    FUN_0041ad60(*(undefined8 *)(puVar2 + 8),"../crypto/x509/v3_purp.c",0xd6);
    FUN_0041ad60(puVar2,"../crypto/x509/v3_purp.c",0xd7);
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0059a910(iVar1);
    if ((*(byte *)(puVar2 + 2) & 2) != 0) {
      FUN_0041ad60(*(undefined8 *)(puVar2 + 6),"../crypto/x509/v3_purp.c",0xb2);
      FUN_0041ad60(*(undefined8 *)(puVar2 + 8),"../crypto/x509/v3_purp.c",0xb3);
    }
    uVar3 = FUN_0041c2c0(param_5,"../crypto/x509/v3_purp.c",0xb6);
    *(undefined8 *)(puVar2 + 6) = uVar3;
    lVar4 = FUN_0041c2c0(param_6,"../crypto/x509/v3_purp.c",0xb7);
    *(long *)(puVar2 + 8) = lVar4;
    if ((*(long *)(puVar2 + 6) == 0) || (lVar4 == 0)) {
      FUN_0051f420();
      uVar3 = 0xb9;
LAB_0059ab91:
      FUN_0051f540("../crypto/x509/v3_purp.c",uVar3,"X509_PURPOSE_add");
      FUN_0051f8f0(0x22,0xc0100,0);
      return 0;
    }
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = puVar2[2] & 1 | param_3 & 0xfffffffe | 2;
    *(undefined8 *)(puVar2 + 4) = param_4;
    *(undefined8 *)(puVar2 + 10) = param_7;
LAB_0059ab3f:
    uVar3 = 1;
  }
  return uVar3;
}

