
undefined8 * FUN_0043d6f0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             FUN_0041aec0(0x48,"../providers/implementations/asymciphers/rsa_enc.c",0x58);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = FUN_00485290(param_1);
      *puVar2 = uVar3;
    }
  }
  return puVar2;
}

