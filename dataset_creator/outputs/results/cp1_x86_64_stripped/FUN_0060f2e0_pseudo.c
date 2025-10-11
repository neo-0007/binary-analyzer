
undefined8 FUN_0060f2e0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_0060f1c0(param_2);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_lib.c",0x5c,"X509V3_EXT_add_alias");
    FUN_0051f8f0(0x22,0x66,0);
    return 0;
  }
  puVar2 = (undefined8 *)FUN_0041ad90(0x68,"../crypto/x509/v3_lib.c",0x5f);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    uVar3 = puVar1[3];
    puVar2[2] = puVar1[2];
    puVar2[3] = uVar3;
    uVar3 = puVar1[5];
    puVar2[4] = puVar1[4];
    puVar2[5] = uVar3;
    uVar3 = puVar1[7];
    puVar2[6] = puVar1[6];
    puVar2[7] = uVar3;
    uVar3 = puVar1[9];
    puVar2[8] = puVar1[8];
    puVar2[9] = uVar3;
    uVar3 = puVar1[0xb];
    puVar2[10] = puVar1[10];
    puVar2[0xb] = uVar3;
    uVar3 = puVar1[0xc];
    *(uint *)((long)puVar2 + 4) = *(uint *)((long)puVar2 + 4) | 1;
    puVar2[0xc] = uVar3;
    *(undefined4 *)puVar2 = param_1;
    uVar3 = FUN_0060f100();
    return uVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/v3_lib.c",0x60,"X509V3_EXT_add_alias");
  FUN_0051f8f0(0x22,0xc0100,0);
  return 0;
}

