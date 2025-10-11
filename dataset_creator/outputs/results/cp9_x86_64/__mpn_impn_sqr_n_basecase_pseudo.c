
void __mpn_impn_sqr_n_basecase(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*param_2 < 2) {
    if (*param_2 == 1) {
      if (0 < (long)param_3) {
        if ((param_3 - 1 < 3) || (param_1 == param_2 + 1)) {
          uVar4 = 0;
          do {
            param_1[uVar4] = param_2[uVar4];
            uVar4 = uVar4 + 1;
          } while (uVar4 != param_3);
        }
        else {
          lVar3 = 0;
          do {
            uVar1 = ((undefined8 *)((long)param_2 + lVar3))[1];
            *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
            ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
            lVar3 = lVar3 + 0x10;
          } while (lVar3 != (param_3 >> 1) * 0x10);
          if ((param_3 & 1) != 0) {
            param_1[param_3 & 0xfffffffffffffffe] = param_2[param_3 & 0xfffffffffffffffe];
          }
        }
      }
    }
    else if (0 < (long)param_3) {
      memset(param_1,0,param_3 * 8);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = __mpn_mul_1();
  }
  param_1[param_3] = uVar4;
  param_1 = param_1 + 1;
  if (1 < (long)param_3) {
    uVar4 = 1;
    do {
      if (param_2[uVar4] < 2) {
        uVar2 = 0;
        if (param_2[uVar4] == 1) {
          uVar2 = __mpn_add_n(param_1,param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = __mpn_addmul_1(param_1,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
      param_1[param_3] = uVar2;
      param_1 = param_1 + 1;
    } while (param_3 != uVar4);
  }
  return;
}

