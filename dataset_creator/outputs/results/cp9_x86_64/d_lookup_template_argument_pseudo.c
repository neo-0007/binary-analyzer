
int * d_lookup_template_argument(long param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
    return piVar1;
  }
  uVar2 = *(ulong *)(param_2 + 0x10) & 0xffffffff;
  piVar1 = *(int **)(*(long *)(piVar1 + 2) + 0x18);
  if ((-1 < (int)*(ulong *)(param_2 + 0x10)) && (piVar1 != (int *)0x0)) {
    while( true ) {
      if (*piVar1 != 0x2f) {
        return (int *)0x0;
      }
      if ((int)uVar2 == 0) break;
      piVar1 = *(int **)(piVar1 + 6);
      uVar2 = (ulong)((int)uVar2 - 1);
      if (piVar1 == (int *)0x0) {
        return piVar1;
      }
    }
    piVar1 = *(int **)(piVar1 + 4);
  }
  return piVar1;
}

