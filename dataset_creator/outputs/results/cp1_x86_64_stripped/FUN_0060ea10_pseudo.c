
bool FUN_0060ea10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0060e5f0();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_004a7f30(puVar1[1]);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    FUN_0060e970(param_1,0,puVar1);
  }
  return puVar1 != (undefined8 *)0x0;
}

