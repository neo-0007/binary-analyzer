
undefined4 * FUN_006064f0(undefined8 *param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0 && param_2 == 0) {
    return (undefined4 *)0x0;
  }
  if ((param_2 != 0) && (param_2 = FUN_00424a40(param_2), param_2 == 0)) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_0041aec0(0x20,"../crypto/x509/pcy_data.c",0x34);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004a06b0(param_2);
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/pcy_data.c",0x37,"ossl_policy_data_new");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    lVar2 = FUN_00436410();
    *(long *)(puVar1 + 6) = lVar2;
    if (lVar2 == 0) {
      FUN_0041ad60(puVar1,"../crypto/x509/pcy_data.c",0x3c);
      FUN_004a06b0(param_2);
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/pcy_data.c",0x3e,"ossl_policy_data_new");
      FUN_0051f8f0(0x22,0xc0100,0);
      return (undefined4 *)0x0;
    }
    if (param_3 != 0) {
      *puVar1 = 0x10;
    }
    if (param_2 == 0) {
      *(undefined8 *)(puVar1 + 2) = *param_1;
      *param_1 = 0;
    }
    else {
      *(long *)(puVar1 + 2) = param_2;
      if (param_1 == (undefined8 *)0x0) {
        return puVar1;
      }
    }
    *(undefined8 *)(puVar1 + 4) = param_1[1];
    param_1[1] = 0;
  }
  return puVar1;
}

