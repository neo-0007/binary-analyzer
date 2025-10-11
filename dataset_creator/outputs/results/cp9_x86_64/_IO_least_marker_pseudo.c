
void _IO_least_marker(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  lVar3 = param_2 - *(long *)(param_1 + 0x18);
  while (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 2);
    puVar2 = (undefined8 *)*puVar2;
    if (*piVar1 < lVar3) {
      lVar3 = (long)*piVar1;
    }
  }
  return;
}

