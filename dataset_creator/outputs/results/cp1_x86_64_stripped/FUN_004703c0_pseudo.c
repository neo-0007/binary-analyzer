
bool FUN_004703c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar3 = thunk_FUN_0041cdd0(param_2,"type");
  if (lVar3 == 0) {
LAB_00470491:
    lVar3 = thunk_FUN_0041cdd0(param_2,"gindex");
    if ((lVar3 != 0) && (iVar2 = thunk_FUN_0041cf60(lVar3,param_1 + 0x38), iVar2 == 0)) {
      return false;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"pcounter");
    if ((lVar3 != 0) && (iVar2 = thunk_FUN_0041cf60(lVar3,param_1 + 0x40), iVar2 == 0)) {
      return false;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"hindex");
    if ((lVar3 != 0) && (iVar2 = thunk_FUN_0041cf60(lVar3,param_1 + 0x44), iVar2 == 0)) {
      return false;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"seed");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 5) {
        return false;
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar3 = *(long *)(lVar3 + 0x18);
      FUN_0041aef0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                   "../providers/implementations/keymgmt/dsa_kmgmt.c",0x1bd);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((lVar4 != 0) && (lVar3 != 0)) {
        lVar4 = FUN_0041c320(lVar4,lVar3,"../providers/implementations/keymgmt/dsa_kmgmt.c",0x1c1);
        *(long *)(param_1 + 0x28) = lVar4;
        if (lVar4 == 0) {
          return false;
        }
        *(long *)(param_1 + 0x30) = lVar3;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"pbits");
    if ((lVar3 != 0) && (iVar2 = thunk_FUN_0041d830(lVar3,param_1 + 0x18), iVar2 == 0)) {
      return false;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"qbits");
    if ((lVar3 != 0) && (iVar2 = thunk_FUN_0041d830(lVar3,param_1 + 0x20), iVar2 == 0)) {
      return false;
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"digest");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        return false;
      }
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x48),
                   "../providers/implementations/keymgmt/dsa_kmgmt.c",0x1f7);
      lVar3 = FUN_0041c2c0(*(undefined8 *)(lVar3 + 0x10),
                           "../providers/implementations/keymgmt/dsa_kmgmt.c",0x1f8);
      *(long *)(param_1 + 0x48) = lVar3;
      if (lVar3 == 0) {
        return false;
      }
    }
    lVar3 = thunk_FUN_0041cdd0(param_2,"properties");
    bVar5 = true;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        return false;
      }
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x50),
                   "../providers/implementations/keymgmt/dsa_kmgmt.c",0x200);
      lVar3 = FUN_0041c2c0(*(undefined8 *)(lVar3 + 0x10),
                           "../providers/implementations/keymgmt/dsa_kmgmt.c",0x201);
      bVar5 = lVar3 != 0;
      *(long *)(param_1 + 0x50) = lVar3;
    }
  }
  else {
    if (*(int *)(lVar3 + 8) == 4) {
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      iVar2 = FUN_0041c9c0("default",uVar1);
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        iVar2 = FUN_0041c9c0("fips186_4",uVar1);
        if (iVar2 == 0) {
          lVar3 = 1;
        }
        else {
          iVar2 = FUN_0041c9c0("fips186_2",uVar1);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
            goto LAB_00470438;
          }
          lVar3 = 2;
        }
      }
      iVar2 = (&DAT_008fa2c8)[lVar3 * 4];
      *(int *)(param_1 + 0x3c) = iVar2;
      if (iVar2 != -1) goto LAB_00470491;
    }
LAB_00470438:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/dsa_kmgmt.c",0x1d8,"dsa_gen_set_params");
    FUN_0051f8f0(0x39,0x80106,0);
    bVar5 = false;
  }
  return bVar5;
}

