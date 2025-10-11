
void FUN_006702d0(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  while (puVar3 != (undefined8 *)0x0) {
    if (DAT_0093ea10 == '\0') {
      LOCK();
      piVar1 = (int *)((long)puVar3 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)((long)puVar3 + 0x14);
      *(int *)((long)puVar3 + 0x14) = iVar2 + -1;
    }
    if (iVar2 != 0) break;
    puVar3 = (undefined8 *)*puVar3;
    thunk_FUN_007104f0();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

