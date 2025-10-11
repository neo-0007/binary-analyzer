
undefined8 * FUN_00466340(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x18,"../providers/implementations/exchange/kdf_exch.c",0x2e);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
      uVar3 = FUN_00485290(param_2);
      lVar4 = FUN_0053c390(uVar3,param_1,0);
      if (lVar4 != 0) {
        uVar3 = FUN_0053ba70(lVar4);
        puVar2[1] = uVar3;
        thunk_FUN_0053bf90(lVar4);
        if (puVar2[1] != 0) {
          return puVar2;
        }
      }
      FUN_0041ad60(puVar2,"../providers/implementations/exchange/kdf_exch.c",0x3f);
    }
  }
  return (undefined8 *)0x0;
}

