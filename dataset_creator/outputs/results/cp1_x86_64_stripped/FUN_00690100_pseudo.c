
void FUN_00690100(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar1 + -0x18);
  if ((*(byte *)((long)plVar1 + lVar4 + 0x19) & 0x20) != 0) {
    cVar2 = FUN_006c2f50();
    if ((cVar2 == '\0') && (plVar1 = *(long **)((long)plVar1 + lVar4 + 0xe8), plVar1 != (long *)0x0)
       ) {
      iVar3 = (**(code **)(*plVar1 + 0x30))();
      if (iVar3 == -1) {
        lVar4 = (long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18);
        FUN_0066f6e0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
      }
    }
    return;
  }
  return;
}

