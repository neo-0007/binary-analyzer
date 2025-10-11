
undefined8 FUN_00591700(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 5) & 0xfffffffffffffff8)) + 0x6cU >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0x4914b2b97380166f;
  param_1[1] = 0xda8a0600172442d7;
  param_1[2] = 0x163138aaa96f30bc;
  param_1[3] = 0xb0fb0e4ee38dee4d;
  return 1;
}

