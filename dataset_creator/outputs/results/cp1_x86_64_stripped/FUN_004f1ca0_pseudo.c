
undefined4 FUN_004f1ca0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  lVar3 = thunk_FUN_0041cdd0(param_2,"point-format");
  if (lVar3 != 0) {
    iVar1 = FUN_004ebfc0(lVar3,&local_24);
    if (iVar1 != 0) {
      FUN_004ef8c0(param_1,local_24);
      goto LAB_004f1d06;
    }
    FUN_0051f420();
    uVar4 = 0x5e5;
LAB_004f1d89:
    uVar2 = 0;
    FUN_0051f540("../crypto/ec/ec_lib.c",uVar4,"ossl_ec_group_set_params");
    FUN_0051f8f0(0x10,0x68,0);
    goto LAB_004f1da8;
  }
LAB_004f1d06:
  lVar3 = thunk_FUN_0041cdd0(param_2,"encoding");
  if (lVar3 != 0) {
    iVar1 = FUN_004ebf20(lVar3,&local_28);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar4 = 0x5ee;
      goto LAB_004f1d89;
    }
    FUN_004ef8a0(param_1,local_28);
  }
  lVar3 = thunk_FUN_0041cdd0(param_2,"seed");
  if (lVar3 == 0) {
LAB_004f1d6a:
    uVar2 = 1;
  }
  else {
    if (*(int *)(lVar3 + 8) == 5) {
      lVar3 = FUN_004ef8e0(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if (lVar3 != 0) goto LAB_004f1d6a;
    }
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/ec/ec_lib.c",0x5f9,"ossl_ec_group_set_params");
    FUN_0051f8f0(0x10,0xaf,0);
  }
LAB_004f1da8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

