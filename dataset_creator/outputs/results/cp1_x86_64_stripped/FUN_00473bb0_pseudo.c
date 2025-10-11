
bool FUN_00473bb0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      FUN_0051f420();
      uVar3 = 0xbf;
      goto LAB_00473bf2;
    }
    FUN_0041c0b0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc2);
    lVar4 = *(long *)(lVar2 + 0x18);
    if (lVar4 == 0) {
      lVar4 = 1;
    }
    lVar4 = FUN_0041bc60(lVar4,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc4);
    *(long *)(param_1 + 0x18) = lVar4;
    if (lVar4 == 0) {
      FUN_0051f420(0);
      uVar3 = 0xc6;
      goto LAB_00473d81;
    }
    thunk_FUN_00713a50(lVar4,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x18);
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 4) {
      FUN_0051f420();
      uVar3 = 0xd0;
LAB_00473bf2:
      FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar3,
                   "mac_key_fromdata");
      FUN_0051f8f0(0x39,0x80106,0);
      return false;
    }
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x40),
                 "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xd3);
    lVar2 = FUN_0041c2c0(*(undefined8 *)(lVar2 + 0x10),
                         "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xd4);
    *(long *)(param_1 + 0x40) = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      uVar3 = 0xd6;
LAB_00473d81:
      FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar3,
                   "mac_key_fromdata");
      FUN_0051f8f0(0x39,0xc0100,0);
      return false;
    }
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = FUN_0043c4c0(param_1 + 0x28,param_2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xdd,"mac_key_fromdata");
    FUN_0051f8f0(0x39,0x80106,0);
    return false;
  }
  return *(long *)(param_1 + 0x18) != 0;
}

