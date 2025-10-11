
undefined8 FUN_00470e10(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_00547ef0();
  if (lVar2 == 0) {
    return 0;
  }
  if (((param_1[2] == 0) || (iVar1 = FUN_00548480(lVar2,"encoding",param_1[2],0), iVar1 != 0)) &&
     ((param_1[3] == 0 || (iVar1 = FUN_00548480(lVar2,"point-format",param_1[3],0), iVar1 != 0)))) {
    if (param_1[1] == 0) {
      if ((((((((param_1[5] == 0) ||
               (iVar1 = FUN_00548480(lVar2,"field-type",param_1[5],0), iVar1 == 0)) ||
              (param_1[6] == 0)) || ((param_1[7] == 0 || (param_1[8] == 0)))) ||
            ((param_1[9] == 0 ||
             ((iVar1 = FUN_00548430(lVar2,"p"), iVar1 == 0 ||
              (iVar1 = FUN_00548430(lVar2,"a",param_1[7]), iVar1 == 0)))))) ||
           (iVar1 = FUN_00548430(lVar2,"b",param_1[8]), iVar1 == 0)) ||
          (((iVar1 = FUN_00548430(lVar2,"order",param_1[9]), iVar1 == 0 ||
            ((param_1[10] != 0 && (iVar1 = FUN_00548430(lVar2,"cofactor"), iVar1 == 0)))) ||
           ((param_1[0xc] != 0 &&
            (iVar1 = FUN_005485f0(lVar2,"seed",param_1[0xc],param_1[0xe]), iVar1 == 0)))))) ||
         (param_1[0xb] == 0)) goto LAB_00470e8a;
      iVar1 = FUN_005485f0(lVar2,"generator",param_1[0xb],param_1[0xd]);
    }
    else {
      iVar1 = FUN_00548480(lVar2,"group",param_1[1],0);
    }
    if ((iVar1 != 0) && (lVar3 = FUN_00548720(lVar2), lVar3 != 0)) {
      uVar5 = 0;
      lVar4 = FUN_004f1e20(lVar3,*param_1,0);
      if (lVar4 != 0) {
        uVar5 = 1;
        FUN_004efd00(param_1[0x10]);
        param_1[0x10] = lVar4;
      }
      goto LAB_00470e90;
    }
  }
LAB_00470e8a:
  lVar3 = 0;
  uVar5 = 0;
LAB_00470e90:
  FUN_0041ec30(lVar3);
  FUN_00547f60(lVar2);
  return uVar5;
}

