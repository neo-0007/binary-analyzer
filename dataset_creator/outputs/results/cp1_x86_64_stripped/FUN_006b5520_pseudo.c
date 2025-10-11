
undefined8 FUN_006b5520(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*param_1 <= param_2) {
    uVar1 = *param_1 + param_1[1] * 4;
    uVar2 = CONCAT71((int7)(uVar1 >> 8),uVar1 < param_2);
  }
  return uVar2;
}

