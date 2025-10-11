
void call_destructors(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  if (param_1[0x22] != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1[0x22] + 8) + *param_1);
    iVar1 = (int)(*(ulong *)(param_1[0x24] + 8) >> 3);
    if (iVar1 != 0) {
      puVar2 = puVar3 + (iVar1 - 1);
      do {
        (*(code *)*puVar2)();
        bVar4 = puVar3 != puVar2;
        puVar2 = puVar2 + -1;
      } while (bVar4);
    }
  }
  if (param_1[0x15] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*param_1 + *(long *)(param_1[0x15] + 8)))();
    return;
  }
  return;
}

