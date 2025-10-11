
ulong FUN_00423630(long *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  uVar3 = iVar1 - *(int *)(&DAT_008de2f4 + (ulong)*param_2 * 0x28);
  if ((uVar3 == 0) && (iVar1 != 0)) {
    uVar2 = thunk_FUN_00713570(*(undefined8 *)(*param_1 + 0x18),
                               *(undefined8 *)(&DAT_008de2f8 + (ulong)*param_2 * 0x28));
    return uVar2;
  }
  return (ulong)uVar3;
}

