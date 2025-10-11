
void _dl_find_object_from_map(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  
  *param_2 = param_1[0x6b];
  param_2[1] = param_1[0x6c];
  param_2[2] = (long)param_1;
  piVar2 = (int *)param_1[0x55];
  piVar1 = piVar2 + (ulong)*(ushort *)(param_1 + 0x57) * 0xe;
  while( true ) {
    if (piVar1 <= piVar2) {
      param_2[3] = 0;
      return;
    }
    if (*piVar2 == 0x6474e550) break;
    piVar2 = piVar2 + 0xe;
  }
  param_2[3] = *param_1 + *(long *)(piVar2 + 4);
  return;
}

