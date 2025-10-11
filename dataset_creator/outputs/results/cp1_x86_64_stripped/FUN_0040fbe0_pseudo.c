
long FUN_0040fbe0(undefined4 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x1a) == 0) {
      return 0;
    }
    if (param_3 == (long *)0x0) goto LAB_0040fcca;
LAB_0040fc3b:
    lVar8 = *param_3;
    *param_3 = 0;
    lVar7 = lVar8;
    if (lVar8 != 0) goto LAB_0040fc4e;
    lVar2 = FUN_00413530(param_2,param_1,param_4);
    if (lVar2 != 0) {
      lVar7 = *(long *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      FUN_00412f00();
      if (lVar7 != 0) goto LAB_0040fc4e;
    }
    lVar2 = 0;
  }
  else {
    if (*(long *)(*(long *)(param_1 + 2) + 0x118) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 2) + 0x120) == 0) {
      return 0;
    }
    if (param_3 != (long *)0x0) goto LAB_0040fc3b;
LAB_0040fcca:
    lVar2 = FUN_00413530(param_2,param_1,param_4);
    if (lVar2 == 0) {
LAB_0040fcfa:
      lVar2 = 0;
      goto LAB_0040fc9c;
    }
    lVar7 = *(long *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    FUN_00412f00();
    if (lVar7 == 0) goto LAB_0040fcfa;
LAB_0040fc4e:
    lVar8 = lVar7;
    if (*(long *)(param_1 + 8) == 0) {
      lVar2 = FUN_0053d4f0(param_1,lVar7);
LAB_0040fe2e:
      if (lVar2 == 0) {
        lVar8 = 0;
      }
      goto LAB_0040fc94;
    }
    lVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x118))(param_1);
    if (lVar2 == *(long *)(param_1 + 0x20)) {
      iVar1 = FUN_004222a0(*(undefined8 *)(param_1 + 0xe));
      if (iVar1 != 0) {
        plVar6 = (long *)FUN_0053d380(param_1,lVar7);
        if ((plVar6 != (long *)0x0) && (*plVar6 != 0)) {
          lVar2 = plVar6[1];
          FUN_004222e0(*(undefined8 *)(param_1 + 0xe));
          goto LAB_0040fe2e;
        }
        FUN_004222e0(*(undefined8 *)(param_1 + 0xe));
        goto LAB_0040fc73;
      }
LAB_0040fc8e:
      lVar8 = 0;
      lVar2 = 0;
    }
    else {
LAB_0040fc73:
      uVar3 = FUN_00423b00(*param_1);
      iVar1 = FUN_0053e720(lVar7,uVar3);
      if ((iVar1 == 0) || (lVar4 = FUN_0053e7b0(lVar7), lVar4 == 0)) goto LAB_0040fc8e;
      iVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x120))
                        (param_1,lVar4,*(undefined8 *)(lVar7 + 0xb8),param_2,param_4);
      if ((iVar1 == 0) || (iVar1 = FUN_0053e0e0(lVar7), iVar1 == 0)) {
LAB_0040fe90:
        FUN_0053e7e0(lVar7,lVar4);
        goto LAB_0040fc8e;
      }
      iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0xe));
      lVar2 = lVar4;
      if (iVar1 != 0) {
        lVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x118))(param_1);
        if ((lVar5 != *(long *)(param_1 + 0x20)) && (iVar1 = FUN_0053d300(param_1,0), iVar1 == 0)) {
          FUN_004222e0(*(undefined8 *)(param_1 + 0xe));
          FUN_0053e7e0(lVar7,lVar4);
          FUN_0053e0f0(lVar7);
          goto LAB_0040fc8e;
        }
        FUN_0053e0f0(lVar7);
        plVar6 = (long *)FUN_0053d380(param_1,lVar7);
        if ((plVar6 != (long *)0x0) && (*plVar6 != 0)) {
          lVar2 = plVar6[1];
          FUN_004222e0(*(undefined8 *)(param_1 + 0xe));
          FUN_0053e7e0(lVar7,lVar4);
          goto LAB_0040fe2e;
        }
        iVar1 = FUN_0053d3f0(param_1,lVar7,lVar4);
        if (iVar1 == 0) {
          FUN_004222e0(*(undefined8 *)(param_1 + 0xe));
          goto LAB_0040fe90;
        }
        uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x118))(param_1);
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        FUN_004222e0(*(undefined8 *)(param_1 + 0xe));
      }
    }
LAB_0040fc94:
    if (param_3 == (long *)0x0) goto LAB_0040fc9c;
  }
  *param_3 = lVar8;
LAB_0040fc9c:
  FUN_0053e0f0(0);
  return lVar2;
}

