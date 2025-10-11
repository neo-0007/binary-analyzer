
undefined4 * FUN_004a1850(undefined4 param_1,uint param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_0041aec0(0x140,"../crypto/asn1/ameth_lib.c",0xdf);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/ameth_lib.c",0xe2,"EVP_PKEY_asn1_new");
    FUN_0051f8f0(0xd,0xc0100,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_1;
  *(long *)(puVar1 + 2) = (long)(int)(param_2 | 2);
  if (param_4 != 0) {
    lVar2 = FUN_0041c2c0(param_4,"../crypto/asn1/ameth_lib.c",0xeb);
    *(long *)(puVar1 + 6) = lVar2;
    if (lVar2 == 0) goto LAB_004a18f0;
  }
  if (param_3 == 0) {
    return puVar1;
  }
  lVar2 = FUN_0041c2c0(param_3,"../crypto/asn1/ameth_lib.c",0xf1);
  *(long *)(puVar1 + 4) = lVar2;
  if (lVar2 != 0) {
    return puVar1;
  }
LAB_004a18f0:
  FUN_004a17d0(puVar1);
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/ameth_lib.c",0xfa,"EVP_PKEY_asn1_new");
  FUN_0051f8f0(0xd,0xc0100,0);
  return (undefined4 *)0x0;
}

