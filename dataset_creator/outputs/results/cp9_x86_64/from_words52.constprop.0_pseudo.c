
void from_words52_constprop_0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[0xf] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar5 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x80U >> 3)
      ; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = param_2;
  puVar6 = param_1;
  do {
    puVar1 = puVar4 + 2;
    *puVar6 = *puVar4;
    *(ulong *)((long)puVar6 + 6) = *(ulong *)((long)puVar6 + 6) ^ puVar4[1] << 4;
    puVar6 = (undefined8 *)((long)puVar6 + 0xd);
    puVar4 = puVar1;
  } while (param_2 + 0x12 != puVar1);
  uVar5 = param_2[0x12];
  puVar3 = (undefined1 *)((long)param_1 + 0x75);
  do {
    puVar2 = puVar3 + 1;
    *puVar3 = (char)uVar5;
    uVar5 = uVar5 >> 8;
    puVar3 = puVar2;
  } while ((undefined1 *)((long)param_1 + 0x7c) != puVar2);
  uVar5 = param_2[0x13] << 4 | (ulong)*(ushort *)((long)param_2 + 0x96);
  puVar4 = (undefined8 *)((long)param_1 + 0x7b);
  do {
    puVar6 = (undefined8 *)((long)puVar4 + 1);
    *(char *)puVar4 = (char)uVar5;
    uVar5 = uVar5 >> 8;
    puVar4 = puVar6;
  } while (param_1 + 0x10 != puVar6);
  return;
}

