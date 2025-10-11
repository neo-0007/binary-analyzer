
undefined4 FUN_00410260(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((param_1 != (long *)0x0) &&
     (((*(long *)(param_2 + 8) != 0 || (*(long *)(param_2 + 0x1a) != 0)) &&
      (lVar1 = *(long *)(param_2 + 0x18), lVar1 != 0)))) {
    iVar4 = *param_2;
    lVar2 = *(long *)(param_2 + 0x1a);
    uVar5 = FUN_0053e710(lVar1);
    if (iVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/p_lib.c",0x7ca,"evp_pkey_copy_downgraded");
      FUN_0051f8f0(6,0xc0103,"keymgmt key type = %s but legacy type = EVP_PKEY_NONE",uVar5);
      return 0;
    }
    if (iVar4 != -1) {
      uVar5 = FUN_00423b00(iVar4);
    }
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 == (undefined4 *)0x0) {
      lVar7 = FUN_0040ec60();
      *param_1 = lVar7;
      if (lVar7 == 0) {
        FUN_0051f420(0);
        FUN_0051f540("../crypto/evp/p_lib.c",0x7d8,"evp_pkey_copy_downgraded");
        FUN_0051f8f0(6,0xc0100,0);
        return 0;
      }
    }
    else {
      FUN_0053d300(puVar3,1);
      FUN_0040eda0(puVar3);
      if (*(long *)(puVar3 + 0x18) != 0) {
        FUN_0053e7e0(*(long *)(puVar3 + 0x18),*(undefined8 *)(puVar3 + 0x1a));
        FUN_0053e0f0(*(undefined8 *)(puVar3 + 0x18));
        *(undefined8 *)(puVar3 + 0x18) = 0;
        *(undefined8 *)(puVar3 + 0x1a) = 0;
      }
      *puVar3 = 0;
      lVar7 = *param_1;
    }
    iVar4 = FUN_0040f1a0(lVar7,iVar4);
    if (iVar4 != 0) {
      if (lVar2 == 0) {
        return 1;
      }
      if (*(long *)(*(long *)(*param_1 + 8) + 0x128) == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/p_lib.c",0x7e5,"evp_pkey_copy_downgraded");
        FUN_0051f8f0(6,0xce,"key type = %s",uVar5);
      }
      else {
        uVar6 = FUN_00420cf0(*(undefined8 *)(lVar1 + 0x18));
        lVar7 = FUN_00413530(uVar6,*param_1,0);
        if (lVar7 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/p_lib.c",0x7f2,"evp_pkey_copy_downgraded");
          FUN_0051f8f0(6,0xc0100,0);
        }
        else {
          iVar4 = FUN_0053eb30(lVar1,lVar2,0x87,*(undefined8 *)(*(long *)(*param_1 + 8) + 0x128),
                               lVar7);
          if (iVar4 != 0) {
            lVar1 = *param_1;
            uVar5 = (**(code **)(*(long *)(lVar1 + 8) + 0x118))(lVar1);
            *(undefined8 *)(lVar1 + 0x80) = uVar5;
            FUN_00412f00(lVar7);
            return 1;
          }
        }
        FUN_00412f00(lVar7);
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/p_lib.c",0x802,"evp_pkey_copy_downgraded");
      FUN_0051f8f0(6,0xcd,"key type = %s",uVar5);
    }
  }
  return 0;
}

