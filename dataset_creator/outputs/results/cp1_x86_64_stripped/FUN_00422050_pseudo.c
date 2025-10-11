
void FUN_00422050(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00417730(param_1,0xc,&DAT_008de1a0);
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *puVar1;
    }
    *param_2 = uVar2;
  }
  if (param_3 != (undefined8 *)0x0) {
    if (puVar1 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)puVar1[1];
    }
    *param_3 = puVar1;
  }
  return;
}

