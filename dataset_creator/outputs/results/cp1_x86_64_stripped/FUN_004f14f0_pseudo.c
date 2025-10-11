
undefined8 FUN_004f14f0(long *param_1,long param_2,long param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x418,"EC_POINTs_make_affine");
    FUN_0051f8f0(0x10,0xc0101,0);
    return 0;
  }
  lVar4 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = *(long **)(param_3 + lVar4 * 8);
      if ((*param_1 != *plVar2) ||
         ((((int)param_1[4] != 0 && (iVar1 = (int)plVar2[1], (int)param_1[4] != iVar1)) &&
          (iVar1 != 0)))) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x41d,"EC_POINTs_make_affine");
        FUN_0051f8f0(0x10,0x65,0);
        return 0;
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x004f1574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)();
  return uVar3;
}

