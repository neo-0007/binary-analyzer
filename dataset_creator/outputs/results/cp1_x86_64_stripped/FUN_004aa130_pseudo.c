
void FUN_004aa130(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      if ((*(int *)((long)puVar2 + 0x24) == 0) && ((code *)puVar2[3] != (code *)0x0)) {
        (*(code *)puVar2[3])(param_1,*puVar2,*(undefined4 *)(puVar2 + 1),puVar2[2]);
      }
      puVar1 = (undefined8 *)puVar2[5];
      FUN_0041ad60(puVar2,"../crypto/async/async_wait.c",0x25);
      puVar2 = puVar1;
    }
    FUN_0041ad60(param_1,"../crypto/async/async_wait.c",0x29);
    return;
  }
  return;
}

