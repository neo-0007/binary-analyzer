
undefined4 FUN_00419350(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = FUN_00436410();
    *(long *)(param_1 + 8) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420(0);
      FUN_0051f540("../crypto/ex_data.c",0x1d7,"CRYPTO_set_ex_data");
      FUN_0051f8f0(0xf,0xc0100,0);
      return 0;
    }
  }
  for (iVar1 = FUN_00436480(); iVar1 <= param_2; iVar1 = iVar1 + 1) {
    iVar2 = FUN_00435f80(*(undefined8 *)(param_1 + 8),0);
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ex_data.c",0x1de,"CRYPTO_set_ex_data");
      FUN_0051f8f0(0xf,0xc0100,0);
      return 0;
    }
  }
  lVar3 = FUN_004364d0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (param_3 == lVar3) {
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ex_data.c",0x1e4,"CRYPTO_set_ex_data");
  FUN_0051f8f0(0xf,0x80106,0);
  return 0;
}

