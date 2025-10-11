
undefined8 FUN_005968f0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_1 + 8))(), iVar2 < 1)) {
    pcVar6 = "opening session";
LAB_005969f7:
    pcVar1 = *(code **)(*param_1 + 0x28);
joined_r0x005969db:
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1);
    }
    goto LAB_00596a09;
  }
  if ((*(byte *)((long)param_1 + 0x29) & 1) != 0) {
    FUN_005fb7d0(FUN_00595920,param_1);
  }
  lVar5 = param_1[1];
  iVar2 = 0;
  while( true ) {
    iVar3 = FUN_00436480(lVar5);
    if (iVar3 <= iVar2) break;
    pcVar1 = *(code **)(*param_1 + 0x10);
    lVar5 = param_1[1];
    if (pcVar1 != (code *)0x0) {
      uVar4 = FUN_004364a0(lVar5,iVar2);
      iVar3 = (*pcVar1)(param_1,uVar4);
      if (iVar3 < 1) {
        pcVar6 = "writing strings";
        goto LAB_005969f7;
      }
      lVar5 = param_1[1];
    }
    iVar2 = iVar2 + 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x18);
  if (pcVar1 == (code *)0x0) {
LAB_00596988:
    lVar5 = param_1[1];
    for (iVar2 = 0; iVar3 = FUN_00436480(lVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      lVar5 = param_1[1];
      pcVar1 = *(code **)(*param_1 + 0x20);
      if (pcVar1 != (code *)0x0) {
        uVar4 = FUN_004364a0(lVar5,iVar2);
        iVar3 = (*pcVar1)(param_1,uVar4);
        if (iVar3 == -1) goto LAB_00596a70;
        if (iVar3 == 0) {
          pcVar6 = "reading strings";
          goto LAB_005969d0;
        }
        lVar5 = param_1[1];
      }
    }
    pcVar6 = (char *)0x0;
    uVar4 = 0;
  }
  else {
    iVar2 = (*pcVar1)(param_1);
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        pcVar6 = "flushing";
LAB_005969d0:
        pcVar1 = *(code **)(*param_1 + 0x28);
        goto joined_r0x005969db;
      }
      goto LAB_00596988;
    }
LAB_00596a70:
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
    pcVar6 = "processing";
    uVar4 = 0xfffffffe;
  }
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return uVar4;
  }
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (0 < iVar2) {
    return uVar4;
  }
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "closing session";
  }
LAB_00596a09:
  FUN_0051f420();
  FUN_0051f540("../crypto/ui/ui_lib.c",0x220,"UI_process");
  FUN_0051f8f0(0x28,0x6b,"while %s",pcVar6);
  return 0xffffffff;
}

