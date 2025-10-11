
undefined8
FUN_00412900(uint *param_1,int param_2,uint param_3,int param_4,long param_5,undefined8 param_6,
            long param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_4 == -1) {
    if ((param_5 == 0) ||
       ((iVar1 = thunk_FUN_00712780(param_5,"distid"), iVar1 != 0 &&
        (iVar1 = thunk_FUN_00712780(param_5,"hexdistid"), iVar1 != 0)))) goto LAB_00412ad0;
  }
  else if (param_4 != 0xf) {
LAB_00412ad0:
    FUN_0051f420();
    uVar4 = 0x5a8;
    goto LAB_00412ae1;
  }
  if (param_2 != -1) {
    iVar1 = FUN_00412830(param_1);
    if (iVar1 < 2) {
      if (-1 < iVar1) {
        if (*(undefined4 **)(param_1 + 0x1e) == (undefined4 *)0x0) {
          FUN_0051f420();
          uVar4 = 0x5bc;
LAB_00412ae1:
          FUN_0051f540("../crypto/evp/pmeth_lib.c",uVar4,"evp_pkey_ctx_store_cached_data");
          FUN_0051f8f0(6,0x93,0);
          return 0xfffffffe;
        }
        iVar1 = FUN_0040e520(**(undefined4 **)(param_1 + 0x1e));
        iVar2 = FUN_0040e520(param_2);
        if (iVar1 != iVar2) {
          FUN_0051f420();
          uVar4 = 0x5c0;
          goto LAB_00412a20;
        }
      }
    }
    else if (iVar1 == 2) {
      if (*(long *)(param_1 + 8) == 0) {
        FUN_0051f420();
        uVar4 = 0x5b0;
        goto LAB_00412ae1;
      }
      uVar4 = FUN_0040e630(param_2);
      iVar1 = FUN_0053e720(*(undefined8 *)(param_1 + 8),uVar4);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar4 = 0x5b5;
        goto LAB_00412a20;
      }
    }
  }
  if ((param_3 != 0xffffffff) && ((param_3 & *param_1) == 0)) {
    FUN_0051f420();
    uVar4 = 0x5c7;
LAB_00412a20:
    FUN_0051f540("../crypto/evp/pmeth_lib.c",uVar4,"evp_pkey_ctx_store_cached_data");
    FUN_0051f8f0(6,0x94,0);
    return 0xffffffff;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x10),"../crypto/evp/pmeth_lib.c",0x5e9);
  FUN_0041ad60(*(undefined8 *)(param_1 + 0xe),"../crypto/evp/pmeth_lib.c",0x5ea);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_5 != 0) {
    lVar3 = FUN_0041c2c0(param_5,"../crypto/evp/pmeth_lib.c",0x5cf);
    *(long *)(param_1 + 0xe) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar4 = 0x5d1;
      goto LAB_00412b59;
    }
  }
  if (param_7 != 0) {
    lVar3 = FUN_0041c320(param_6,param_7,"../crypto/evp/pmeth_lib.c",0x5d6);
    *(long *)(param_1 + 0x10) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar4 = 0x5d8;
LAB_00412b59:
      FUN_0051f540("../crypto/evp/pmeth_lib.c",uVar4,"evp_pkey_ctx_store_cached_data");
      FUN_0051f8f0(6,0xc0100,0);
      return 0;
    }
  }
  *(byte *)(param_1 + 0x14) = (byte)param_1[0x14] | 1;
  *(long *)(param_1 + 0x12) = param_7;
  return 1;
}

