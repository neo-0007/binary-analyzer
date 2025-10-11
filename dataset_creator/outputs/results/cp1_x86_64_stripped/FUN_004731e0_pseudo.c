
undefined8 *
FUN_004731e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar3 = (undefined8 *)
             FUN_0041aec0(0x18,"../providers/implementations/keymgmt/ecx_kmgmt.c",0x1e1);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(undefined4 *)(puVar3 + 2) = param_4;
      *(undefined4 *)((long)puVar3 + 0x14) = param_2;
      iVar1 = FUN_004730c0(puVar3,param_3);
      if (iVar1 != 0) {
        return puVar3;
      }
    }
    FUN_0041ad60(puVar3,"../providers/implementations/keymgmt/ecx_kmgmt.c",0x1e7);
  }
  return (undefined8 *)0x0;
}

