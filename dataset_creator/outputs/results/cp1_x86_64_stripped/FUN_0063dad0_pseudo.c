
void FUN_0063dad0(undefined8 *param_1,long param_2,byte param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  *param_1 = &PTR_FUN_00935110;
                    /* try { // try from 0063dafa to 0063dafe has its CatchHandler @ 0063dba9 */
  lVar1 = FUN_006256a0();
  param_1[2] = lVar1;
  *(byte *)(param_1 + 3) = param_2 != 0 & param_3;
  param_1[4] = *(undefined8 *)(lVar1 + 0x78);
  param_1[5] = *(undefined8 *)(lVar1 + 0x70);
  if (param_2 == 0) {
    param_2 = *(long *)(lVar1 + 0x68);
  }
  param_1[6] = param_2;
  puVar3 = (undefined8 *)((long)param_1 + 0x41U & 0xfffffffffffffff8);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x239) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  *(undefined8 *)((long)param_1 + 0x131) = 0;
  uVar2 = (ulong)(((int)param_1 - (int)puVar3) + 0x139U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  *(undefined8 *)((long)param_1 + 0x139) = 0;
  *(undefined8 *)((long)param_1 + 0x231) = 0;
  puVar3 = (undefined8 *)((long)param_1 + 0x141U & 0xfffffffffffffff8);
  uVar2 = (ulong)(((int)param_1 - (int)puVar3) + 0x239U >> 3);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  return;
}

