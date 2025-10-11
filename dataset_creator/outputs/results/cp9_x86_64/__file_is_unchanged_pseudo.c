
undefined8 __file_is_unchanged(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  uVar4 = 0;
  if (((-1 < lVar1) && (lVar2 = *param_2, -1 < lVar2)) && (uVar4 = 1, lVar1 != 0 || lVar2 != 0)) {
    uVar3 = 0;
    uVar4 = 0;
    if (((lVar1 == lVar2) && (uVar4 = uVar3, param_1[1] == param_2[1])) &&
       ((param_1[2] == param_2[2] && ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))))) {
      return CONCAT71((int7)((ulong)param_2[5] >> 8),param_1[5] == param_2[5]);
    }
  }
  return uVar4;
}

