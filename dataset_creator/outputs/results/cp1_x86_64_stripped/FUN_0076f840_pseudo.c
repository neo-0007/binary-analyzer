
undefined8 * FUN_0076f840(undefined8 param_1,ulong *param_2,code *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong *puVar4;
  
  if (param_2 != (ulong *)0x0) {
    uVar1 = *param_2;
    while (puVar2 = (undefined8 *)(uVar1 & 0xfffffffffffffffe), puVar2 != (undefined8 *)0x0) {
      iVar3 = (*param_3)(param_1,*puVar2);
      if (iVar3 == 0) {
        return puVar2;
      }
      puVar4 = puVar2 + 2;
      if (iVar3 < 0) {
        puVar4 = puVar2 + 1;
      }
      uVar1 = *puVar4;
    }
  }
  return (undefined8 *)0x0;
}

