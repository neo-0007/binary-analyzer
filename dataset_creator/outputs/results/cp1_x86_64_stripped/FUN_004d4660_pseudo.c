
undefined8 FUN_004d4660(long param_1,int param_2,int param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xb8) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004d469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  if (10000 < param_2) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_gen.c",0xa3,"dh_builtin_genparams");
    FUN_0051f8f0(5,0x67,0);
    return 0;
  }
  if (param_2 < 0x200) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_gen.c",0xa8,"dh_builtin_genparams");
    FUN_0051f8f0(5,0x7e,0);
    return 0;
  }
  lVar3 = FUN_004b2b10();
  if (lVar3 != 0) {
    FUN_004b2c00(lVar3);
    uVar2 = FUN_004b2df0(lVar3);
    lVar4 = FUN_004b2df0(lVar3);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 8) == 0) {
        lVar5 = FUN_004b7690();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) goto LAB_004d486e;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        lVar5 = FUN_004b7690();
        *(long *)(param_1 + 0x18) = lVar5;
        if (lVar5 == 0) goto LAB_004d486e;
      }
      if (param_3 < 2) {
        FUN_0051f420();
        FUN_0051f540("../crypto/dh/dh_gen.c",0xbc,"dh_builtin_genparams");
        FUN_0051f8f0(5,0x65,0);
      }
      else if (param_3 == 2) {
        iVar1 = FUN_004b8190(uVar2,0x18);
        if (iVar1 != 0) {
          uVar6 = 0x17;
          goto LAB_004d475a;
        }
      }
      else if (param_3 == 5) {
        iVar1 = FUN_004b8190(uVar2,0x3c);
        if (iVar1 != 0) {
          uVar6 = 0x3b;
          goto LAB_004d475a;
        }
      }
      else {
        iVar1 = FUN_004b8190(uVar2,0xc);
        if (iVar1 != 0) {
          uVar6 = 0xb;
LAB_004d475a:
          iVar1 = FUN_004b8190(lVar4,uVar6);
          if ((((iVar1 != 0) &&
               (iVar1 = FUN_005c4cc0(*(undefined8 *)(param_1 + 8),param_2,1,uVar2,lVar4,param_4),
               iVar1 != 0)) && (iVar1 = FUN_005c3bd0(param_4,3,0), iVar1 != 0)) &&
             (iVar1 = FUN_004b8190(*(undefined8 *)(param_1 + 0x18),(long)param_3), iVar1 != 0)) {
            *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
            uVar2 = 1;
            goto LAB_004d48a0;
          }
        }
      }
    }
  }
LAB_004d486e:
  uVar2 = 0;
  FUN_0051f420();
  FUN_0051f540("../crypto/dh/dh_gen.c",0xe2,"dh_builtin_genparams");
  FUN_0051f8f0(5,0x80003,0);
LAB_004d48a0:
  FUN_004b2d50(lVar3);
  FUN_004b2b50(lVar3);
  return uVar2;
}

