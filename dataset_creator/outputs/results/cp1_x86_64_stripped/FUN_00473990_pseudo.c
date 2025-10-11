
undefined8 * FUN_00473990(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x18,"../providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x24);
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = FUN_00422240();
      puVar2[2] = lVar3;
      if (lVar3 != 0) {
        uVar4 = FUN_00485290(param_1);
        *puVar2 = uVar4;
        LOCK();
        *(undefined4 *)(puVar2 + 1) = 1;
        UNLOCK();
        return puVar2;
      }
      FUN_0041ad60(puVar2,"../providers/implementations/keymgmt/kdf_legacy_kmgmt.c",0x2a);
    }
  }
  return (undefined8 *)0x0;
}

