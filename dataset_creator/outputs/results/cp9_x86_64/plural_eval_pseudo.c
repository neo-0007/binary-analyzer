
ulong plural_eval(int *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  iVar1 = *param_1;
  iVar2 = iVar1 + -2;
  bVar6 = iVar1 == 2;
  while (!bVar6) {
    if (bVar6 || SBORROW4(iVar1,2) != iVar2 < 0) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          lVar3 = plural_eval(*(undefined8 *)(param_1 + 2),param_2);
          return (ulong)(lVar3 == 0);
        }
        return 0;
      }
      if (param_1[1] != 0) {
        if (param_1[1] == 1) {
          return *(ulong *)(param_1 + 2);
        }
        return 0;
      }
      return param_2;
    }
    if (iVar1 != 3) {
      return 0;
    }
    lVar3 = plural_eval(*(undefined8 *)(param_1 + 2),param_2);
    param_1 = *(int **)(param_1 + ((ulong)(lVar3 == 0) + 1) * 2 + 2);
    iVar1 = *param_1;
    iVar2 = iVar1 + -2;
    bVar6 = iVar2 == 0;
  }
  uVar4 = plural_eval(*(undefined8 *)(param_1 + 2),param_2);
  if (param_1[1] == 0xf) {
    if (uVar4 != 0) {
      return 1;
    }
  }
  else {
    if (param_1[1] != 0xe) {
      uVar5 = plural_eval(*(undefined8 *)(param_1 + 4),param_2);
      switch(param_1[1]) {
      case 3:
        return uVar4 * uVar5;
      case 4:
        if (uVar5 == 0) {
          raise(8);
        }
        break;
      case 5:
        if (uVar5 == 0) {
          raise(8);
        }
        return uVar4 % uVar5;
      case 6:
        return uVar4 + uVar5;
      case 7:
        return uVar4 - uVar5;
      case 8:
        return (ulong)(uVar4 < uVar5);
      case 9:
        return (ulong)(uVar5 < uVar4);
      case 10:
        return (ulong)(uVar4 <= uVar5);
      case 0xb:
        return (ulong)(uVar5 <= uVar4);
      case 0xc:
        return (ulong)(uVar4 == uVar5);
      case 0xd:
        return (ulong)(uVar4 != uVar5);
      default:
        return 0;
      }
      return uVar4 / uVar5;
    }
    if (uVar4 == 0) {
      return 0;
    }
  }
  lVar3 = plural_eval(*(undefined8 *)(param_1 + 4),param_2);
  return (ulong)(lVar3 != 0);
}

