
void FUN_004a8930(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_4;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
      return;
    }
    *param_2 = *puVar1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(puVar1 + 2);
    }
  }
  return;
}

