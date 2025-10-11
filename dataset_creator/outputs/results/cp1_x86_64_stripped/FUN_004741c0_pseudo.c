
undefined8 * FUN_004741c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)
             FUN_0041aec0(0x38,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x182);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(undefined4 *)(puVar3 + 1) = param_2;
      iVar1 = FUN_00474130(puVar3,param_3);
      if (iVar1 != 0) {
        return puVar3;
      }
      FUN_0041ad60(puVar3,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x19b);
    }
  }
  return (undefined8 *)0x0;
}

