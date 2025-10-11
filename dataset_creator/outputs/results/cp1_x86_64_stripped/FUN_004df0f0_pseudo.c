
void FUN_004df0f0(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0;
  do {
    lVar3 = *(long *)(param_2 + lVar1 * 8) - *(long *)(param_3 + lVar1 * 8);
    if (lVar1 == 4) {
      param_1[4] = lVar3 + 0x1fffffffffffffc;
    }
    else {
      param_1[lVar1] = lVar3 + 0x1fffffffffffffe;
      if ((int)lVar1 == 7) {
        uVar4 = param_1[7];
        puVar2 = param_1 + 6;
        uVar7 = uVar4 >> 0x38;
        param_1[4] = param_1[4] + uVar7;
        puVar5 = puVar2;
        while( true ) {
          uVar6 = uVar4 & 0xffffffffffffff;
          uVar4 = *puVar5;
          puVar5[1] = (uVar4 >> 0x38) + uVar6;
          if (param_1 == puVar5) break;
          puVar5 = puVar5 + -1;
        }
        *param_1 = (*param_1 & 0xffffffffffffff) + uVar7;
        uVar7 = param_1[7] >> 0x38;
        param_1[4] = param_1[4] + uVar7;
        uVar4 = param_1[7];
        while( true ) {
          uVar6 = *puVar2;
          puVar2[1] = (uVar6 >> 0x38) + (uVar4 & 0xffffffffffffff);
          if (param_1 == puVar2) break;
          puVar2 = puVar2 + -1;
          uVar4 = uVar6;
        }
        *param_1 = (*param_1 & 0xffffffffffffff) + uVar7;
        return;
      }
    }
    lVar1 = lVar1 + 1;
  } while( true );
}

