
long FUN_004d49d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00541930(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_004d5e90(param_1);
    if (lVar3 != 0) {
      FUN_00541aa0(lVar3 + 8,lVar2);
      uVar1 = FUN_00541a20(lVar2);
      *(long *)(lVar3 + 200) = *(long *)(lVar3 + 200) + 1;
      *(undefined4 *)(lVar3 + 0x3c) = uVar1;
    }
    return lVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dh/dh_group_params.c",0x2f,"ossl_dh_new_by_nid_ex");
  FUN_0051f8f0(5,0x72,0);
  return 0;
}

