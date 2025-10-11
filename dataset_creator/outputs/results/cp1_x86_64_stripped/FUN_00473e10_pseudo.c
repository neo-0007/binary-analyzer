
undefined8 FUN_00473e10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  lVar1 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) != 5) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac,
                   "mac_gen_set_params");
      FUN_0051f8f0(0x39,0x80106,0);
      return 0;
    }
    lVar2 = FUN_0041bc60(*(undefined8 *)(lVar1 + 0x18),
                         "../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1af);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420(0);
      uVar3 = 0;
      FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1b1,
                   "mac_gen_set_params");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      thunk_FUN_00713a50(lVar2,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    }
  }
  return uVar3;
}

