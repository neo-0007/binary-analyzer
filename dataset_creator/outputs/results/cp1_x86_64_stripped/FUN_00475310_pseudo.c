
undefined8 * FUN_00475310(undefined8 param_1,ulong param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if ((param_2 & 3) == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_0041aec0(0x58,"../providers/implementations/keymgmt/rsa_kmgmt.c",0x1cd)
  ;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar2;
    lVar4 = FUN_004b7690();
    puVar3[4] = lVar4;
    if (lVar4 != 0) {
      iVar1 = FUN_004b8190(lVar4,0x10001);
      if (iVar1 != 0) {
        puVar3[3] = 0x800;
        puVar3[5] = 2;
        *(undefined4 *)(puVar3 + 2) = param_3;
        if (param_4 == 0) {
          return puVar3;
        }
        iVar1 = FUN_004751f0(puVar3,param_4);
        if (iVar1 != 0) {
          return puVar3;
        }
      }
      lVar4 = puVar3[4];
    }
    FUN_004b7fa0(lVar4);
  }
  FUN_0041ad60(puVar3,"../providers/implementations/keymgmt/rsa_kmgmt.c",0x1e1);
  return (undefined8 *)0x0;
}

