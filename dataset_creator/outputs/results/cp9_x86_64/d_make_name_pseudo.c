
undefined8 * d_make_name(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    puVar2 = (undefined8 *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
    *(undefined8 *)((long)puVar2 + 4) = 0;
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if ((param_2 != 0) && (0 < param_3)) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[2] = param_2;
      *(int *)(puVar2 + 3) = param_3;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}

