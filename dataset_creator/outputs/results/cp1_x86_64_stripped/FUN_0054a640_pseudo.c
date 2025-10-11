
undefined8 FUN_0054a640(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8)) + 0x5cU >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0xefcdab8967452301;
  param_1[1] = 0x1032547698badcfe;
  return 1;
}

