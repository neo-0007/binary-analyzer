
undefined8 FUN_00420bd0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar2 = FUN_0041cdd0(param_2,"openssl-version");
  if (lVar2 != 0) {
    FUN_0041e380(lVar2,"3.0.2");
  }
  lVar2 = FUN_0041cdd0(param_2,"provider-name");
  if (lVar2 != 0) {
    FUN_0041e380(lVar2,*(undefined8 *)(param_1 + 0x28));
  }
  lVar2 = FUN_0041cdd0(param_2,"module-filename");
  if (lVar2 != 0) {
    uVar3 = FUN_00420bc0(param_1);
    FUN_0041e380(lVar2,uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  iVar5 = 0;
  if (lVar2 != 0) {
    for (; iVar1 = FUN_00436480(lVar2), iVar5 < iVar1; iVar5 = iVar5 + 1) {
      puVar4 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x48),iVar5);
      lVar2 = FUN_0041cdd0(param_2,*puVar4);
      if (lVar2 != 0) {
        FUN_0041e380(lVar2,puVar4[1]);
      }
      lVar2 = *(long *)(param_1 + 0x48);
    }
  }
  return 1;
}

