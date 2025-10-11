
undefined8 * FUN_00465680(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x40,"../providers/implementations/exchange/ecdh_exch.c",0x5a);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = FUN_00485290(param_1);
      *puVar2 = uVar3;
      puVar2[3] = 0xffffffff;
    }
  }
  return puVar2;
}

