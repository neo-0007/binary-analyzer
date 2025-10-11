
undefined4 FUN_00474130(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_00473e10(), iVar1 != 0)) {
    iVar1 = FUN_0043c4c0(param_1 + 4,param_2,*param_1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1c4,
                 "cmac_gen_set_params");
    FUN_0051f8f0(0x39,0x80106,0);
  }
  return 0;
}

