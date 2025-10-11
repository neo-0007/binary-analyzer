
undefined8 * FUN_00466260(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar2 = FUN_0043b840();
  if ((iVar2 != 0) &&
     (puVar3 = (undefined8 *)
               FUN_0041aec0(0x18,"../providers/implementations/exchange/kdf_exch.c",0x7d),
     puVar3 != (undefined8 *)0x0)) {
    uVar1 = param_1[1];
    *puVar3 = *param_1;
    puVar3[1] = uVar1;
    uVar1 = param_1[1];
    puVar3[2] = param_1[2];
    lVar4 = FUN_0053bbe0(uVar1);
    puVar3[1] = lVar4;
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
      FUN_0041ad60(puVar3,"../providers/implementations/exchange/kdf_exch.c",0x85);
    }
    else {
      iVar2 = FUN_00473aa0(puVar3[2]);
      puVar5 = puVar3;
      if (iVar2 == 0) {
        FUN_0053bb90(puVar3[1]);
        FUN_0041ad60(puVar3,"../providers/implementations/exchange/kdf_exch.c",0x8a);
        return (undefined8 *)0x0;
      }
    }
    return puVar5;
  }
  return (undefined8 *)0x0;
}

