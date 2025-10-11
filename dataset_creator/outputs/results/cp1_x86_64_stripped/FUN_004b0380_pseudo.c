
long FUN_004b0380(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00417730(param_1,0x11,&DAT_009023c0);
  if ((plVar2 != (long *)0x0) && ((plVar2[1] != 0 || (*plVar2 != 0)))) {
    uVar3 = FUN_004b0370();
    lVar4 = FUN_004ab390(param_1,uVar3);
    if (lVar4 != 0) {
      iVar1 = (*(code *)plVar2[5])(param_2);
      if (iVar1 != 0) {
        FUN_004ab630(lVar4,param_2);
        return lVar4;
      }
      FUN_004ab560(lVar4);
    }
  }
  return 0;
}

