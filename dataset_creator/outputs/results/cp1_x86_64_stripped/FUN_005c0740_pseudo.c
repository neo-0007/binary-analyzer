
ulong FUN_005c0740(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar11 = (ulong *)*puVar1;
  puVar8 = (ulong *)puVar1[1];
  uVar10 = *(uint *)(param_1 + 0x30) & 0x200;
  puVar5 = puVar8;
  puVar9 = puVar11;
  if (uVar10 != 0) {
    puVar5 = puVar11;
    puVar9 = puVar8;
  }
  uVar2 = puVar5[1];
  uVar3 = puVar9[1];
  uVar6 = uVar2 - uVar3;
  if (uVar2 == uVar3) {
    uVar6 = 0;
  }
  uVar4 = *puVar5;
  uVar7 = (undefined4)param_3;
  if (param_2 < 0xd) {
    param_3 = uVar4;
    switch(param_2) {
    case 1:
      param_3 = 1;
      if (puVar11[1] != 0) {
        if (uVar10 == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0x400) == 0) {
            thunk_FUN_00713720(puVar11[1],0,puVar11[2]);
            *puVar11 = 0;
            puVar8 = (ulong *)puVar1[1];
            puVar11 = (ulong *)*puVar1;
          }
          uVar2 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar2;
          uVar2 = puVar11[3];
          puVar8[2] = puVar11[2];
          puVar8[3] = uVar2;
          param_3 = 1;
        }
        else {
          uVar2 = puVar8[1];
          *puVar11 = *puVar8;
          puVar11[1] = uVar2;
          uVar2 = puVar8[3];
          puVar11[2] = puVar8[2];
          puVar11[3] = uVar2;
        }
      }
      break;
    case 2:
      param_3 = (ulong)(uVar4 == 0);
      break;
    case 3:
      if (param_4 != (ulong *)0x0) {
        *param_4 = uVar2;
      }
      break;
    default:
switchD_005c07b6_caseD_4:
      param_3 = 0;
      break;
    case 8:
      param_3 = (long)*(int *)(param_1 + 0x2c);
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      param_3 = 1;
      break;
    case 10:
      break;
    case 0xb:
    case 0xc:
      param_3 = 1;
    }
  }
  else {
    switch(param_2) {
    case 0x72:
      if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        if (uVar10 != 0) {
          puVar11[1] = 0;
        }
        FUN_004c4ff0(puVar11);
        puVar8 = (ulong *)puVar1[1];
      }
      uVar2 = *param_4;
      uVar3 = param_4[1];
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      param_3 = 1;
      *puVar1 = param_4;
      *puVar8 = uVar2;
      puVar8[1] = uVar3;
      uVar2 = param_4[3];
      puVar8[2] = param_4[2];
      puVar8[3] = uVar2;
      break;
    case 0x73:
      param_3 = 1;
      if (param_4 != (ulong *)0x0) {
        if ((uVar10 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
          FUN_005c06f0(puVar1);
          puVar11 = (ulong *)*puVar1;
        }
        *param_4 = (ulong)puVar11;
        param_3 = 1;
      }
      break;
    default:
      goto switchD_005c07b6_caseD_4;
    case 0x80:
      if (((long)param_3 < 0) || ((long)(uVar6 + uVar4) < (long)param_3)) {
        param_3 = 0xffffffffffffffff;
      }
      else {
        uVar2 = *puVar9;
        puVar5[1] = uVar3 + param_3;
        *puVar5 = uVar2 - param_3;
        puVar5[2] = puVar9[2] - param_3;
      }
      break;
    case 0x82:
      *(undefined4 *)(param_1 + 0x38) = uVar7;
      param_3 = 1;
      break;
    case 0x85:
      param_3 = uVar6;
    }
  }
  return param_3;
}

