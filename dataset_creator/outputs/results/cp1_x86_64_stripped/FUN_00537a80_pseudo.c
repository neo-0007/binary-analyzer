
undefined8 FUN_00537a80(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_00537b55:
    lVar4 = param_1[0xf];
  }
  else {
    if (*(long *)(lVar4 + 0x78) != 0) {
      if (param_1[0x15] != 0) {
        if (*(code **)(lVar4 + 0xc0) != (code *)0x0) {
          (**(code **)(lVar4 + 0xc0))();
        }
        param_1[0x15] = 0;
      }
      if (param_1[0x16] != 0) {
        FUN_00537a40();
      }
      goto LAB_00537ada;
    }
    if ((*(code **)(lVar4 + 0x30) != (code *)0x0) &&
       (uVar1 = (**(code **)(lVar4 + 0x30))(), (int)uVar1 == 0)) {
      return uVar1;
    }
    lVar4 = param_1[0xf];
    if ((lVar4 != 0) && (*(int *)(*param_1 + 0x38) != 0)) {
      FUN_004227b0();
      goto LAB_00537b55;
    }
  }
  FUN_0041ad60(lVar4,"../crypto/evp/evp_enc.c",0x3b);
  FUN_0051a270(param_1[1]);
LAB_00537ada:
  *param_1 = 0;
  param_1[0x16] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xb8U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
  }
  return 1;
}

