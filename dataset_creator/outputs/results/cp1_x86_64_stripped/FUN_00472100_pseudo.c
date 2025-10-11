
undefined8 FUN_00472100(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    lVar2 = FUN_004ee2d0(param_2);
    if (lVar2 != 0) {
      lVar2 = FUN_004f0340(lVar2);
      if (lVar2 != 0) {
        FUN_004efd00(*(undefined8 *)(param_1 + 0x80));
        *(long *)(param_1 + 0x80) = lVar2;
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/keymgmt/ec_kmgmt.c",0x401,"ec_gen_set_group");
      FUN_0051f8f0(0x39,0xb0,0);
    }
  }
  return 0;
}

