
undefined4 FUN_004205d0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  lVar4 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    if (*param_2 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/provider_core.c",0x174,"ossl_provider_info_add_to_store");
      FUN_0051f8f0(0xf,0xc0103,0);
      return 0;
    }
LAB_00420740:
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x16f,"ossl_provider_info_add_to_store");
    FUN_0051f8f0(0xf,0xc0102,0);
    return 0;
  }
  if (*param_2 == 0) goto LAB_00420740;
  iVar3 = FUN_004222c0(*(undefined8 *)(lVar4 + 0x20));
  if (iVar3 == 0) {
    return 0;
  }
  lVar2 = *(long *)(lVar4 + 0x40);
  if (lVar2 == 0) {
    lVar5 = FUN_0041aec0(400,"../crypto/provider_core.c",0x17b);
    *(long *)(lVar4 + 0x30) = lVar5;
    if (lVar5 == 0) {
      FUN_0051f420();
      uVar7 = 0x17e;
LAB_004207cc:
      FUN_0051f540("../crypto/provider_core.c",uVar7,"ossl_provider_info_add_to_store");
      uVar8 = 0;
      FUN_0051f8f0(0xf,0xc0100,0);
      goto LAB_0042066d;
    }
    *(undefined8 *)(lVar4 + 0x40) = 10;
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x38);
    lVar5 = *(long *)(lVar4 + 0x30);
    if (lVar2 == lVar6) {
      lVar5 = FUN_0041ade0(lVar5,(lVar2 + 10) * 0x28,"../crypto/provider_core.c",0x186);
      if (lVar5 == 0) {
        FUN_0051f420();
        uVar7 = 0x189;
        goto LAB_004207cc;
      }
      *(long *)(lVar4 + 0x30) = lVar5;
      lVar6 = *(long *)(lVar4 + 0x38);
      *(long *)(lVar4 + 0x40) = lVar2 + 10;
    }
  }
  lVar2 = param_2[1];
  uVar8 = 1;
  plVar1 = (long *)(lVar5 + lVar6 * 0x28);
  *plVar1 = *param_2;
  plVar1[1] = lVar2;
  lVar2 = param_2[3];
  plVar1[2] = param_2[2];
  plVar1[3] = lVar2;
  plVar1[4] = param_2[4];
  *(long *)(lVar4 + 0x38) = lVar6 + 1;
LAB_0042066d:
  FUN_004222e0(*(undefined8 *)(lVar4 + 0x20));
  return uVar8;
}

