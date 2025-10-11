
long FUN_005ba3d0(int param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char **ppcVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  char *local_50 [4];
  
  lVar4 = 0;
  local_50[2] = *(char **)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50[0] = "PrivateKeyInfo";
  local_50[1] = (char *)0x0;
  local_68 = param_4;
  if ((param_1 != 0) && (lVar4 = FUN_0040e630(), lVar4 == 0)) {
LAB_005ba54d:
    lVar4 = 0;
LAB_005ba54f:
    if (local_50[2] != (char *)*(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    return lVar4;
  }
  ppcVar6 = &local_58;
  plVar7 = &local_60;
  local_70 = *param_3;
  pcVar5 = "type-specific";
  if (param_2 == (long *)0x0) goto LAB_005ba4eb;
LAB_005ba461:
  lVar1 = *param_2;
  if (lVar1 != 0) {
    plVar7 = param_2;
  }
  lVar3 = FUN_005164c0(plVar7,"DER",pcVar5,lVar4,0x87,param_5,param_6);
  *param_2 = lVar1;
  do {
    if (lVar3 != 0) {
      iVar2 = FUN_00514ab0(lVar3,param_3,&local_68);
      FUN_00515c80(lVar3);
      if (iVar2 == 0) goto LAB_005ba4ca;
      if ((*plVar7 == 0) || (iVar2 = FUN_0053d9d0(*plVar7,1), iVar2 == 0)) {
        *param_3 = local_70;
LAB_005ba540:
        if (param_2 != plVar7) {
          FUN_0040f4f0(*plVar7);
        }
        goto LAB_005ba54d;
      }
      if (param_2 != (long *)0x0) {
        *param_2 = *plVar7;
      }
      lVar4 = *plVar7;
      goto LAB_005ba54f;
    }
LAB_005ba4ca:
    ppcVar6 = ppcVar6 + 1;
    if (local_50 + 2 == ppcVar6) goto LAB_005ba540;
    local_70 = *param_3;
    pcVar5 = *ppcVar6;
    if (param_2 != (long *)0x0) goto LAB_005ba461;
LAB_005ba4eb:
    lVar3 = FUN_005164c0(plVar7,"DER",pcVar5,lVar4,0x87,param_5,param_6);
  } while( true );
}

