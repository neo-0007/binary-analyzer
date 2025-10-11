
int FUN_0041a8e0(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int local_44;
  
  iVar2 = FUN_00422340(&DAT_0093fc8c,FUN_0041a650);
  puVar1 = DAT_0093fc90;
  if (((iVar2 != 0) && (DAT_0093fc88 != 0)) && (DAT_0093fc90 != (undefined8 *)0x0)) {
    if (param_2 == 0) {
      iVar2 = FUN_004222c0(DAT_0093fc90[1]);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      DAT_0093fc90 = (undefined8 *)0x0;
    }
    local_44 = 0;
    while( true ) {
      iVar2 = FUN_00436480(*puVar1);
      if (iVar2 <= local_44) {
        if (param_2 != 0) {
          FUN_00422300();
          FUN_004360b0(*puVar1);
          FUN_0041ad60(puVar1,"../crypto/initthread.c",0x1c8);
          return param_2;
        }
        FUN_004222e0(puVar1[1]);
        return 1;
      }
      plVar3 = (long *)FUN_004364a0(*puVar1,local_44);
      if (plVar3 == (long *)0x0) break;
      plVar4 = (long *)*plVar3;
      plVar6 = (long *)0x0;
      while (plVar4 != (long *)0x0) {
        while ((plVar5 = plVar4, plVar4 = (long *)plVar5[3], param_2 == 0 && (*plVar5 != param_1)))
        {
          plVar6 = plVar5;
          if (plVar4 == (long *)0x0) goto LAB_0041a9ab;
        }
        if (plVar6 == (long *)0x0) {
          *plVar3 = (long)plVar4;
        }
        else {
          plVar6[3] = (long)plVar4;
        }
        plVar4 = (long *)plVar5[3];
        FUN_0041ad60(plVar5,"../crypto/initthread.c",0x1bc);
      }
LAB_0041a9ab:
      if (param_2 != 0) {
        FUN_0041ad60(plVar3,"../crypto/initthread.c",0x1c3);
      }
      local_44 = local_44 + 1;
    }
    if (param_2 == 0) {
      FUN_004222e0(puVar1[1]);
    }
  }
  return 0;
}

