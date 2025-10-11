
undefined8 FUN_0046f3a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((((param_2 == 0) || (iVar1 = FUN_0046f1c0(), iVar1 != 0)) &&
       ((lVar2 = thunk_FUN_0041cdd0(param_2,"gindex"), lVar2 == 0 ||
        (iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 0x38), iVar1 != 0)))) &&
      ((lVar2 = thunk_FUN_0041cdd0(param_2,"pcounter"), lVar2 == 0 ||
       (iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 0x44), iVar1 != 0)))) &&
     ((lVar2 = thunk_FUN_0041cdd0(param_2,"hindex"), lVar2 == 0 ||
      (iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 0x48), iVar1 != 0)))) {
    lVar2 = thunk_FUN_0041cdd0(param_2,"seed");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        return 0;
      }
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar2 = *(long *)(lVar2 + 0x18);
      FUN_0041aef0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   "../providers/implementations/keymgmt/dh_kmgmt.c",0x1fc);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((lVar3 != 0) && (lVar2 != 0)) {
        lVar3 = FUN_0041c320(lVar3,lVar2,"../providers/implementations/keymgmt/dh_kmgmt.c",0x200);
        *(long *)(param_1 + 0x28) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        *(long *)(param_1 + 0x30) = lVar2;
      }
    }
    lVar2 = thunk_FUN_0041cdd0(param_2,"qbits");
    if ((lVar2 == 0) || (iVar1 = thunk_FUN_0041d830(lVar2,param_1 + 0x20), iVar1 != 0)) {
      lVar2 = thunk_FUN_0041cdd0(param_2,"digest");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        FUN_0041ad60(*(undefined8 *)(param_1 + 0x50),
                     "../providers/implementations/keymgmt/dh_kmgmt.c",0x271);
        lVar2 = FUN_0041c2c0(*(undefined8 *)(lVar2 + 0x10),
                             "../providers/implementations/keymgmt/dh_kmgmt.c",0x272);
        *(long *)(param_1 + 0x50) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        FUN_0041ad60(*(undefined8 *)(param_1 + 0x58),
                     "../providers/implementations/keymgmt/dh_kmgmt.c",0x27a);
        lVar2 = FUN_0041c2c0(*(undefined8 *)(lVar2 + 0x10),
                             "../providers/implementations/keymgmt/dh_kmgmt.c",0x27b);
        *(long *)(param_1 + 0x58) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"safeprime-generator");
      if (lVar2 == 0) {
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/dh_kmgmt.c",0x283,"dhx_gen_set_params");
      FUN_0051f8f0(0x39,0x8010c,0);
    }
  }
  return 0;
}

