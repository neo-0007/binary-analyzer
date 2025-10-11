
undefined8
FUN_004192c0(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_00417930(*param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_00418ef0(puVar1,param_1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_004364a0(*puVar2,param_4);
      FUN_004222e0(*puVar1);
      if ((code *)puVar2[3] != (code *)0x0) {
        (*(code *)puVar2[3])(param_2,0,param_3,param_4,*puVar2,puVar2[1]);
        return 1;
      }
    }
  }
  return 0;
}

