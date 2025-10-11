
ulong bn_sub_part_words(ulong *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = bn_sub_words(param_1,param_2,param_3,param_4);
  if (param_5 != 0) {
    param_1 = param_1 + param_4;
    param_3 = param_3 + param_4;
    if (-1 < param_5) {
      param_2 = param_2 + param_4;
      uVar3 = 0;
      do {
        if (uVar2 == 0) {
LAB_004b17ff:
          while (((*param_1 = *param_2, param_5 != 1 && (param_1[1] = param_2[1], param_5 != 2)) &&
                 (param_1[2] = param_2[2], param_5 != 3))) {
            param_1[3] = param_2[3];
            param_5 = param_5 + -4;
            if (param_5 == 0) {
              return 0;
            }
            param_2 = param_2 + 4;
            param_1 = param_1 + 4;
          }
          return 0;
        }
        uVar1 = *param_2;
        *param_1 = uVar1 - uVar2;
        if (uVar1 != 0) {
          uVar2 = uVar3;
        }
        if (param_5 == 1) {
          return uVar2;
        }
        uVar1 = param_2[1];
        param_1[1] = uVar1 - uVar2;
        if (uVar1 != 0) {
          uVar2 = uVar3;
        }
        if (param_5 == 2) {
          return uVar2;
        }
        uVar1 = param_2[2];
        param_1[2] = uVar1 - uVar2;
        if (uVar1 != 0) {
          uVar2 = uVar3;
        }
        if (param_5 == 3) {
          return uVar2;
        }
        uVar1 = param_2[3];
        param_5 = param_5 + -4;
        param_1[3] = uVar1 - uVar2;
        if (uVar1 != 0) {
          param_2 = param_2 + 4;
          param_1 = param_1 + 4;
          if (param_5 == 0) {
            return 0;
          }
          goto LAB_004b17ff;
        }
        if (param_5 == 0) {
          return uVar2;
        }
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
      } while( true );
    }
    while( true ) {
      uVar3 = *param_3;
      *param_1 = -(uVar2 + uVar3);
      if (uVar3 != 0) {
        uVar2 = 1;
      }
      if (param_5 == -1) break;
      uVar3 = param_3[1];
      param_1[1] = -(uVar2 + uVar3);
      if (uVar3 != 0) {
        uVar2 = 1;
      }
      if (param_5 == -2) {
        return uVar2;
      }
      uVar3 = param_3[2];
      param_1[2] = -(uVar2 + uVar3);
      if (uVar3 != 0) {
        uVar2 = 1;
      }
      if (param_5 == -3) {
        return uVar2;
      }
      uVar3 = param_3[3];
      param_1[3] = -(uVar2 + uVar3);
      if (uVar3 != 0) {
        uVar2 = 1;
      }
      param_5 = param_5 + 4;
      if (param_5 == 0) {
        return uVar2;
      }
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    }
  }
  return uVar2;
}

