
undefined8 bn_cmp_part_words(long param_1,long param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_4 < 0) {
    plVar2 = (long *)(param_2 + ((long)(param_3 + -1) - (long)(int)param_4) * 8);
    lVar3 = *plVar2;
    while( true ) {
      if (lVar3 != 0) {
        return 0xffffffff;
      }
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)(param_2 + -0x10 + (long)param_3 * 8 + (long)(int)param_4 * -8 +
                            (ulong)~param_4 * -8)) break;
      lVar3 = *plVar2;
    }
  }
  else if (param_4 != 0) {
    lVar3 = (long)(int)param_4;
    do {
      if (*(long *)(param_1 + (long)param_3 * 8 + -8 + lVar3 * 8) != 0) {
        return 1;
      }
      lVar3 = lVar3 + -1;
    } while ((int)lVar3 != 0);
  }
  uVar1 = bn_cmp_words(param_1,param_2);
  return uVar1;
}

