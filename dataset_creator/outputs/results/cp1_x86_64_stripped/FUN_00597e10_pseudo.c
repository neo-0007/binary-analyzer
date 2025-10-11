
long FUN_00597e10(code *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_0041aec0(0x10,"../crypto/ui/ui_util.c",0x95);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_00596c00("PEM password callback wrapper");
    if (lVar3 != 0) {
      iVar1 = FUN_00596d40(lVar3,FUN_00597ae0);
      if (-1 < iVar1) {
        iVar1 = FUN_00596da0(lVar3,&LAB_00597c60);
        if (-1 < iVar1) {
          iVar1 = FUN_00596d60(lVar3,FUN_00597af0);
          if (-1 < iVar1) {
            iVar1 = FUN_00596dc0(lVar3,FUN_00597cb0);
            if (-1 < iVar1) {
              iVar1 = FUN_00422340(&DAT_00942724,FUN_00597b20);
              if ((iVar1 != 0) && (DAT_00942720 != 0)) {
                iVar1 = FUN_00596e20(lVar3,DAT_0093cb38,puVar2);
                if (-1 < iVar1) {
                  *(undefined4 *)(puVar2 + 1) = param_2;
                  if (param_1 == (code *)0x0) {
                    param_1 = FUN_005551d0;
                  }
                  *puVar2 = param_1;
                  return lVar3;
                }
              }
            }
          }
        }
      }
      goto LAB_00597f03;
    }
  }
  lVar3 = 0;
LAB_00597f03:
  FUN_00596cd0(lVar3);
  FUN_0041ad60(puVar2,"../crypto/ui/ui_util.c",0x9e);
  return 0;
}

