
undefined8
FUN_005390d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((DAT_00941208 != 0) || (DAT_00941208 = FUN_00436420(FUN_00539090), DAT_00941208 != 0)) &&
     (puVar3 = (undefined4 *)FUN_0041ad90(0x20,"../crypto/evp/evp_pbe.c",0xcb),
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = param_1;
    lVar1 = DAT_00941208;
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    puVar3[3] = param_4;
    *(undefined8 *)(puVar3 + 4) = param_5;
    iVar2 = FUN_00435f80(lVar1,puVar3);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_0041ad60(puVar3,"../crypto/evp/evp_pbe.c",0xd5);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/evp_pbe.c",0xdb,"EVP_PBE_alg_add_type");
  FUN_0051f8f0(6,0xc0100,0);
  return 0;
}

