
undefined1 * FUN_0074c4d0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = param_1;
  if (param_3 != 0) {
    puVar1 = param_1 + param_3;
    if (param_2 <= param_1) {
      if (param_1 == param_2) {
        return puVar1;
      }
      if (param_1 < param_2 + param_3) {
        puVar2 = param_2 + param_3 + -1;
        puVar3 = param_1 + param_3 + -1;
        for (; param_3 != 0; param_3 = param_3 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + -1;
          puVar3 = puVar3 + -1;
        }
        return puVar1;
      }
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return puVar1;
}

