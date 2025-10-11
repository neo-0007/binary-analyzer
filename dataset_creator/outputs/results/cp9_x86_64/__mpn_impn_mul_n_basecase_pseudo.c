
void __mpn_impn_mul_n_basecase(void *param_1,long param_2,ulong *param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_3 < 2) {
    if (*param_3 == 1) {
      if (0 < (long)param_4) {
        if ((param_4 - 1 < 3) || (param_1 == (void *)(param_2 + 8))) {
          uVar3 = 0;
          do {
            *(undefined8 *)((long)param_1 + uVar3 * 8) = *(undefined8 *)(param_2 + uVar3 * 8);
            uVar3 = uVar3 + 1;
          } while (uVar3 != param_4);
        }
        else {
          lVar2 = 0;
          do {
            uVar1 = ((undefined8 *)(param_2 + lVar2))[1];
            *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
            ((undefined8 *)((long)param_1 + lVar2))[1] = uVar1;
            lVar2 = lVar2 + 0x10;
          } while (lVar2 != (param_4 >> 1) * 0x10);
          if ((param_4 & 1) != 0) {
            *(undefined8 *)((long)param_1 + (param_4 & 0xfffffffffffffffe) * 8) =
                 *(undefined8 *)(param_2 + (param_4 & 0xfffffffffffffffe) * 8);
          }
        }
      }
    }
    else if (0 < (long)param_4) {
      memset(param_1,0,param_4 * 8);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = __mpn_mul_1(param_1,param_2,param_4);
  }
  *(undefined8 *)((long)param_1 + param_4 * 8) = uVar1;
  lVar2 = (long)param_1 + 8;
  if (1 < (long)param_4) {
    uVar3 = 1;
    do {
      if (param_3[uVar3] < 2) {
        uVar1 = 0;
        if (param_3[uVar3] == 1) {
          uVar1 = __mpn_add_n(lVar2,lVar2,param_2,param_4);
        }
      }
      else {
        uVar1 = __mpn_addmul_1(lVar2,param_2,param_4);
      }
      uVar3 = uVar3 + 1;
      *(undefined8 *)(lVar2 + param_4 * 8) = uVar1;
      lVar2 = lVar2 + 8;
    } while (param_4 != uVar3);
  }
  return;
}

