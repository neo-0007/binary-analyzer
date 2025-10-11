
int FUN_004190d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)FUN_00417930();
  if ((puVar2 == (undefined8 *)0x0) ||
     (plVar3 = (long *)FUN_00418ef0(puVar2,param_2), plVar3 == (long *)0x0)) {
    return -1;
  }
  if (*plVar3 == 0) {
    lVar5 = FUN_00436410();
    *plVar3 = lVar5;
    if ((lVar5 != 0) && (iVar1 = FUN_00435f80(lVar5,0), iVar1 != 0)) goto LAB_00419126;
    FUN_0051f420();
    uVar6 = 0xa6;
  }
  else {
LAB_00419126:
    puVar4 = (undefined8 *)FUN_0041ad90(0x30,"../crypto/ex_data.c",0xab);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = param_3;
      puVar4[3] = param_5;
      lVar5 = *plVar3;
      puVar4[1] = param_4;
      puVar4[5] = param_6;
      puVar4[4] = param_7;
      *(undefined4 *)(puVar4 + 2) = param_8;
      iVar1 = FUN_00435f80(lVar5,0);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ex_data.c",0xb8,"ossl_crypto_get_ex_new_index_ex");
        iVar1 = -1;
        FUN_0051f8f0(0xf,0xc0100,0);
        FUN_0041ad60(puVar4,"../crypto/ex_data.c",0xb9);
      }
      else {
        iVar1 = FUN_00436480(*plVar3);
        iVar1 = iVar1 + -1;
        FUN_004364d0(*plVar3,iVar1,puVar4);
      }
      goto LAB_0041919c;
    }
    FUN_0051f420();
    uVar6 = 0xad;
  }
  FUN_0051f540("../crypto/ex_data.c",uVar6,"ossl_crypto_get_ex_new_index_ex");
  iVar1 = -1;
  FUN_0051f8f0(0xf,0xc0100,0);
LAB_0041919c:
  FUN_004222e0(*puVar2);
  return iVar1;
}

