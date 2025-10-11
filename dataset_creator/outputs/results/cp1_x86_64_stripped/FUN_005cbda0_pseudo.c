
undefined8 FUN_005cbda0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(DAT_009427c0 + param_1 * 0x18);
  *param_2 = *puVar1;
  uVar2 = puVar1[1];
  *param_3 = puVar1[2];
  return uVar2;
}

