
undefined8 FUN_0060e840(int *param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_1 == *param_2)) {
    switch(*param_1) {
    case 0:
      uVar3 = FUN_0060e7e0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    case 1:
    case 2:
    case 3:
    case 6:
      lVar4 = *(long *)(param_2 + 2);
      lVar5 = *(long *)(param_1 + 2);
LAB_0060e888:
      uVar3 = FUN_004a2350(lVar5,lVar4);
      return uVar3;
    case 4:
      uVar3 = FUN_0059eab0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    case 5:
      plVar1 = *(long **)(param_1 + 2);
      plVar2 = *(long **)(param_2 + 2);
      if ((plVar1 != (long *)0x0) && (plVar2 != (long *)0x0)) {
        if (*plVar1 == 0) {
          if (*plVar2 != 0) {
            return 0xffffffff;
          }
        }
        else {
          if (*plVar2 == 0) {
            return 1;
          }
          uVar3 = FUN_004a2350();
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        lVar5 = plVar1[1];
        if ((lVar5 != 0) && (lVar4 = plVar2[1], lVar4 != 0)) goto LAB_0060e888;
      }
      break;
    case 7:
      uVar3 = thunk_FUN_004a2350(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    case 8:
      uVar3 = FUN_00424ba0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar3;
    default:
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

