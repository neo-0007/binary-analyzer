
short * FUN_006e8e30(short *param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  short *psVar5;
  
  puVar4 = DAT_0094ab80;
  if ((DAT_0094ab80 == (undefined8 *)0x0) || ((char)*param_1 == '\0')) {
    psVar5 = (short *)0x0;
  }
  else if (*(char *)((long)param_1 + 1) == '\0') {
    psVar5 = (short *)*DAT_0094ab80;
    if (psVar5 == (short *)0x0) {
      psVar5 = (short *)0x0;
    }
    else {
      do {
        if (CONCAT11(0x3d,(char)*param_1) == *psVar5) {
          return psVar5 + 1;
        }
        psVar5 = (short *)puVar4[1];
        puVar4 = puVar4 + 1;
      } while (psVar5 != (short *)0x0);
    }
  }
  else {
    lVar3 = thunk_FUN_007129d0();
    psVar5 = (short *)*puVar4;
    sVar1 = *param_1;
    if (psVar5 == (short *)0x0) {
      psVar5 = (short *)0x0;
    }
    else {
      do {
        if (((sVar1 == *psVar5) &&
            (iVar2 = thunk_FUN_00712ab0(psVar5 + 1,param_1 + 1,lVar3 + -2), iVar2 == 0)) &&
           (*(char *)((long)psVar5 + lVar3) == '=')) {
          return (short *)((long)psVar5 + lVar3 + 1);
        }
        psVar5 = (short *)puVar4[1];
        puVar4 = puVar4 + 1;
      } while (psVar5 != (short *)0x0);
    }
  }
  return psVar5;
}

