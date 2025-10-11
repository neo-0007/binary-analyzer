
long FUN_00406bd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00405f40();
  if (lVar2 != 0) {
    lVar3 = FUN_00413530(param_3,param_1,param_4);
    if (lVar3 != 0) {
      if (param_2 == (undefined4 *)0x0) {
LAB_00406c22:
        FUN_0040b0f0(lVar2,lVar3);
        return lVar2;
      }
      iVar1 = FUN_00414fb0(lVar3,*(undefined8 *)(param_2 + 2),*param_2);
      if (0 < iVar1) goto LAB_00406c22;
      goto LAB_00406c72;
    }
  }
  FUN_0051f420();
  lVar3 = 0;
  FUN_0051f540("../crypto/evp/digest.c",0x71,"evp_md_ctx_new_ex");
  FUN_0051f8f0(0xd,0xc0100,0);
LAB_00406c72:
  FUN_00412f00(lVar3);
  FUN_00406b90(lVar2);
  return 0;
}

