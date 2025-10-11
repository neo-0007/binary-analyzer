
undefined8 FUN_004a0e80(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((DAT_00940fa0 != 0) || (DAT_00940fa0 = FUN_00436420(&LAB_004a0b70), DAT_00940fa0 != 0)) {
    puVar2 = (undefined4 *)FUN_004a0d00(param_1);
    if ((puVar2 != (undefined4 *)0x0) && ((*(byte *)(puVar2 + 8) & 1) != 0)) {
LAB_004a0f42:
      if (-1 < param_2) {
        *(long *)(puVar2 + 2) = param_2;
      }
      if (-1 < param_3) {
        *(long *)(puVar2 + 4) = param_3;
      }
      if (param_4 != 0) {
        *(long *)(puVar2 + 6) = param_4;
      }
      if (param_5 == 0) {
        return 1;
      }
      *(ulong *)(puVar2 + 8) = param_5 | 1;
      return 1;
    }
    puVar3 = (undefined4 *)FUN_0041aec0(0x28,"../crypto/asn1/a_strnid.c",0xa2);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_strnid.c",0xa3,"stable_get");
      FUN_0051f8f0(0xd,0xc0100,0);
    }
    else {
      iVar1 = FUN_00435f80(DAT_00940fa0,puVar3);
      if (iVar1 != 0) {
        if (puVar2 == (undefined4 *)0x0) {
          *puVar3 = param_1;
          *(undefined8 *)(puVar3 + 2) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 4) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 1;
          puVar2 = puVar3;
        }
        else {
          *puVar3 = *puVar2;
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
          *(ulong *)(puVar3 + 8) = *(ulong *)(puVar2 + 8) | 1;
          puVar2 = puVar3;
        }
        goto LAB_004a0f42;
      }
      FUN_0041ad60(puVar3,"../crypto/asn1/a_strnid.c",0xa7);
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/a_strnid.c",0xc1,"ASN1_STRING_TABLE_add");
  FUN_0051f8f0(0xd,0xc0100,0);
  return 0;
}

