
undefined8
FUN_00778c10(long *param_1,undefined8 param_2,long param_3,long *param_4,int param_5,int param_6)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    if (4 < param_5 + 2U) {
                    /* WARNING: Subroutine does not return */
      FUN_00703110("Illegal status in __nss_next.\n");
    }
    plVar1 = (long *)*param_1;
    uVar3 = *(uint *)(plVar1 + 1) >> ((char)(param_5 + 2U) * '\x02' & 0x1fU);
  }
  else {
    plVar1 = (long *)*param_1;
    uVar3 = *(uint *)(plVar1 + 1);
    if ((((uVar3 & 3) != 1) || ((uVar3 >> 2 & 3) != 1)) || ((uVar3 >> 4 & 3) != 1))
    goto LAB_00778c47;
    uVar3 = uVar3 >> 6;
  }
  if ((uVar3 & 3) == 1) {
    return 1;
  }
LAB_00778c47:
  lVar2 = plVar1[2];
  if (lVar2 != 0) {
    if (param_3 == 0) {
      do {
        *param_1 = (long)(plVar1 + 2);
        lVar2 = FUN_00779ce0(lVar2,param_2);
        *param_4 = lVar2;
        if (lVar2 != 0) {
          return 0;
        }
        plVar1 = (long *)*param_1;
      } while (((*(byte *)(plVar1 + 1) & 0xc) == 0) && (lVar2 = plVar1[2], lVar2 != 0));
    }
    else {
      do {
        *param_1 = (long)(plVar1 + 2);
        lVar2 = FUN_00779ce0(lVar2,param_2);
        *param_4 = lVar2;
        if (lVar2 != 0) {
          return 0;
        }
        plVar1 = (long *)*param_1;
        if (*plVar1 != 0) {
          lVar2 = FUN_00779ce0(*plVar1,param_3);
          *param_4 = lVar2;
          if (lVar2 != 0) {
            return 0;
          }
          plVar1 = (long *)*param_1;
        }
      } while (((*(byte *)(plVar1 + 1) & 0xc) == 0) && (lVar2 = plVar1[2], lVar2 != 0));
    }
  }
  return 0xffffffff;
}

