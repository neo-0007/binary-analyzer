
void FUN_0051aa90(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((param_2 == 0 || (iVar3 = FUN_004222c0(DAT_00941008), iVar3 != 0)))) {
    lVar1 = *(long *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_1 + 200);
    }
    lVar2 = *(long *)(param_1 + 200);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0xd0) = lVar1;
    }
    if (param_1 == DAT_00941028) {
      DAT_00941028 = *(long *)(param_1 + 0xd0);
    }
    if (param_1 != DAT_00941020) {
      lVar2 = DAT_00941020;
    }
    DAT_00941020 = lVar2;
    if (param_2 != 0) {
      FUN_004222e0(DAT_00941008);
      return;
    }
  }
  return;
}

