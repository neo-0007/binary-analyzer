
long * FUN_004b1d00(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                   long param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = param_1;
  if ((param_1 != (long *)0x0) || (plVar3 = (long *)FUN_004b1b50(0,0), plVar3 != (long *)0x0)) {
    if (*plVar3 == 0) {
      lVar2 = FUN_004b7690();
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        lVar2 = plVar3[1];
        goto joined_r0x004b1f10;
      }
    }
    else {
      lVar2 = plVar3[1];
joined_r0x004b1f10:
      if (lVar2 == 0) {
        lVar2 = FUN_004b7690();
        plVar3[1] = lVar2;
        if (lVar2 == 0) goto LAB_004b1e16;
      }
      lVar2 = plVar3[2];
      if (param_2 != 0) {
        FUN_004b7fa0();
        lVar2 = FUN_004b82e0(param_2);
        plVar3[2] = lVar2;
      }
      if (lVar2 != 0) {
        if (param_5 != 0) {
          plVar3[8] = param_5;
        }
        if (param_6 != 0) {
          plVar3[7] = param_6;
        }
        iVar4 = 0x21;
        do {
          iVar1 = FUN_004bb5a0(*plVar3,plVar3[3],0,param_4);
          if (iVar1 == 0) goto LAB_004b1e16;
          lVar2 = FUN_004b6260(plVar3[1],*plVar3,plVar3[3],param_4,&local_44);
          if (lVar2 != 0) {
            if (((code *)plVar3[8] == (code *)0x0) || (plVar3[7] == 0)) {
              iVar4 = FUN_004b5a10(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
            }
            else {
              iVar4 = (*(code *)plVar3[8])();
            }
            if ((iVar4 == 0) ||
               ((plVar3[7] != 0 &&
                ((iVar4 = FUN_004b9720(plVar3[1],plVar3[1],plVar3[7],param_4), iVar4 == 0 ||
                 (iVar4 = FUN_004b9720(*plVar3,*plVar3,plVar3[7],param_4), iVar4 == 0))))))
            goto LAB_004b1e16;
            goto LAB_004b1e1b;
          }
          if (local_44 == 0) goto LAB_004b1e16;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        FUN_0051f420();
        FUN_0051f540("../crypto/bn/bn_blind.c",0x11e,"BN_BLINDING_create_param");
        FUN_0051f8f0(3,0x71,0);
      }
    }
LAB_004b1e16:
    if (param_1 != (long *)0x0) goto LAB_004b1e1b;
  }
  FUN_004b1980(plVar3);
  plVar3 = (long *)0x0;
LAB_004b1e1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

